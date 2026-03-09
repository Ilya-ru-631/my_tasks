#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            vector<int> arr;
            for (int j = 0; j < 9; j++) {
                if (board[i][j] != '.') {
                    arr.push_back(board[i][j]);
                }
            }
            sort(arr.begin(), arr.end());
            for (int g = 1; g < arr.size(); g++) {
                if (arr[g] == arr[g - 1])
                    return false;
            }
        }
//---------------------------------------------------------------------
        for (int j = 0; j < 9; j++) {
            vector<int> arr2;
            for (int i = 0; i < 9; i++) {
                if (board[i][j] != '.') {
                    arr2.push_back(board[i][j]);
                }
            }
            sort(arr2.begin(), arr2.end());
            for (int g = 1; g < arr2.size(); g++) {
                if (arr2[g] == arr2[g - 1])
                    return false;
            }
        }
//--------------------------------------------------------------------------
        for (int r = 0; r < 3; r++) {
            for (int c = 0; c < 3; c++) {
                vector<char> block;
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        int row = r * 3 + i;
                        int col = c * 3 + j;
                        if (board[row][col] != '.') {
                            block.push_back(board[row][col]);
                        }
                    }
                }
                sort(block.begin(), block.end());
                for (int g = 1; g < block.size(); g++) {
                    if (block[g] == block[g - 1])
                        return false;
                }
            }
        }
        return true;
    }
};

int main() {
    vector<vector<char>> board = {
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };
    Solution a;
    bool result = a.isValidSudoku(board);
    cout << result;
    return 0;
}