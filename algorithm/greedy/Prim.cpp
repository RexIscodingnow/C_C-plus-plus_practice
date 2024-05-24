/**
 * @file Prim.cpp
 * @brief Prim 演算法
 * 
 * @date 2024-05-11
 * 
 * @copyright Copyright (c) 2024
 * 
 * @details 使用 Prim 演算法用於創建最小生成樹
 */



#include <iostream>
#include <vector>
#include <queue>

using namespace std;


struct Edge {
    int to;         // 目的地
    int weight;     // 權重
};


struct Graph {
    int vertex_number;
    vector<vector<Edge>> adjacent_matrix;   // index: 起點  element: Edge
};


Graph* create_graph(int number_of_vertices) {
    Graph* graph = new Graph;
    graph->vertex_number = number_of_vertices;
    graph->adjacent_matrix.resize(number_of_vertices);

    return graph;
}

void addEdge(Graph* graph, int from, int to, int weight) {
    // Edge new_edge;
    // new_edge.to = to;
    // new_edge.weight = weight;
    
    // graph->adjacent_matrix[from].push_back(new_edge);

    graph->adjacent_matrix[from].push_back({to, weight});
}


int main(int argc, char const *argv[]) {
    int n;
    cin >> n;

    Graph* graph = create_graph(5);

    addEdge(graph, 0, 1, 5);
    

    return 0;
}




