#include <iostream>
#include <vector>
#include <queue>

#include "../../dataStructure_C++/array/vector_arr.h"


using namespace std;


// 定義邊緣結構
struct Edge {
    int to;
    int weight;
};

// 定義圖形結構
struct Graph {
    int numVertices;
    vector<vector<Edge>> adjList;
};

// 定義距離結構
struct Distance {
    int vertex;
    int distance;
};

// 比較距離結構，用於優先佇列
struct DistanceComparator {
    bool operator() (const Distance& a, const Distance& b) {
        return a.distance > b.distance;
    }
};

// 初始化圖形
Graph* createGraph(int numVertices) {
    Graph* graph = new Graph;
    graph->numVertices = numVertices;
    graph->adjList.resize(numVertices);
    
    return graph;
}

// 新增邊緣到圖形
void addEdge(Graph* graph, int from, int to, int weight) {
    graph->adjList[from].push_back({to, weight});
}

// 執行 Dijkstra's 演算法
vector<int> dijkstra(Graph* graph, int start) {
    // 初始化距離陣列
    vector<int> distances(graph->numVertices, INT32_MAX);
    distances[start] = 0;
    print_vector<int>(distances);

    // 初始化優先佇列
    priority_queue<Distance, vector<Distance>, DistanceComparator> pq;  // 以距離
    pq.push({start, 0});    // 頂點代號, 起始點

    // 執行演算法
    while (!pq.empty()) {
        // 取得距離最小的頂點
        Distance current = pq.top();
        pq.pop();

        // 遍歷鄰接頂點
        for (Edge edge : graph->adjList[current.vertex]) {
            // 計算新距離
            int newDistance = distances[current.vertex] + edge.weight;

            // 如果新距離更短，更新距離並加入優先佇列
            if (newDistance < distances[edge.to]) {
                distances[edge.to] = newDistance;
                pq.push({edge.to, newDistance});
            }
        }
    }

    return distances;
}

void print_matrix(vector<vector<Edge>> &edges) {
    for (int i = 0; i < edges.size(); i++) {
        for (int j = 0; j < edges[i].size(); j++) {
            cout << "from: " << i << "  ( to: " << edges[i][j].to << ", weight: " << edges[i][j].weight << " )" << "\t";
        }

        cout << endl;
    }
}


// 範例用法
int main() {
    // 建立一個 5 個頂點的圖形
    Graph* graph = createGraph(5);

    // 新增邊緣
    addEdge(graph, 0, 1, 4);
    addEdge(graph, 0, 2, 2);
    addEdge(graph, 1, 2, 3);
    addEdge(graph, 1, 3, 2);
    addEdge(graph, 2, 3, 1);
    addEdge(graph, 2, 4, 5);
    addEdge(graph, 3, 4, 3);

    print_matrix(graph->adjList);

    // 執行 Dijkstra's 演算法，從頂點 0 開始
    vector<int> distances = dijkstra(graph, 0);

    // 印出結果
    for (int i = 0; i < distances.size(); i++) {
        cout << "Vertex distance " << i << ": " << distances[i] << endl;
    }

    return 0;
}