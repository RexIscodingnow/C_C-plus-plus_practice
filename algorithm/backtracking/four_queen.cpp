#include <iostream>
#include <vector>
#include "../../dataStructure_C++/array/vector_arr.h"


using namespace std;


struct Position {
    int x, y;

    Position(int now_x, int now_y) : x(now_x), y(now_y) {}
};


void four_queeen(int j, vector<vector<int>>& chess_board);
bool is_safe(Position pos, vector<vector<int>>& chess_board);


int main(int argc, char const *argv[]) {
    vector<vector<int>> chess_board(4, vector<int>(4, {0}));
    
    four_queeen(0, chess_board);
    

    return 0;
}



/*
    兩狀態代表放入、未放入

    1 : 有
    0 : 沒有

*/
void four_queeen(int j, vector<vector<int>>& chess_board) {
    if (j == chess_board.size()) {
        print_vector(chess_board);
        cout << endl << "--------------------------" << endl << endl;
        
        return;
    }

    for (int i = 0; i < chess_board.size(); i++) {
        Position pos(i, j);

        if (is_safe(pos, chess_board)) {
            chess_board[i][j] = 1;
            
            four_queeen(j + 1, chess_board);
            
            chess_board[i][j] = 0;
        }
    }
}


bool is_safe(Position pos, vector<vector<int>>& chess_board) {
    const int ROWS = chess_board.size(), COLUMNS = chess_board[0].size();

    if (pos.x > ROWS - 1 && pos.x < 0 && pos.y > COLUMNS - 1 && pos.y < 0) {
        return false;
    }

    int i, j;

    // 判斷 "列"
    for (i = pos.x, j = 0; j < COLUMNS; j++) {
        if (chess_board[i][j] == 1 && j != pos.y) {
            return false;
        }
    }

    // 判斷 "行"
    for (i = 0, j = pos.y; i < ROWS; i++) {
        if (chess_board[i][j] == 1 && i != pos.x) {
            return false;
        }
    }
    
    // 判斷 "左上方"
    for (i = pos.x - 1, j = pos.y - 1; i >= 0 && j >= 0; i--, j--) {
        if (chess_board[i][j] == 1) {
            return false;
        }
    }

    // 判斷 "右下方"
    for (i = pos.x + 1, j = pos.y + 1; i < ROWS && j < COLUMNS; i++, j++) {
        if (chess_board[i][j] == 1) {
            return false;
        }
    }

    // 判斷 "右上方"
    for (i = pos.x - 1, j = pos.y + 1; i >= 0 && j < COLUMNS; i--, j++) {
        if (chess_board[i][j] == 1) {
            return false;
        }
    }

    // 判斷 "左下方"
    for (i = pos.x + 1, j = pos.y - 1; i < ROWS && j >= 0; i++, j--) {
        if (chess_board[i][j] == 1) {
            return false;
        }
    }

    return true;
}



