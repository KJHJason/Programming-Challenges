// https://codeforces.com/problemset/problem/263/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int matrix[5][5];

    int row; int col;
    for (int i = 0; i < 5; i++) {
        int inputNum;
        for (int j = 0; j < 5; j++) {
            cin >> inputNum;
            matrix[i][j] = inputNum;
            if (inputNum != 0) {
                row = i;
                col = j;
            }
        }
    }

    /* // output each array element's value
    cout << "\nMatrix:\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    } */

    int numOfMoves;
    // middlePos[2] = { 2, 2 }; // assuming index starts from 0
    while (row != 2 || col != 2) {
        if (row != 2) {
            if (row > 2) {
                row--;
                numOfMoves++;
            } else {
                row++;
                numOfMoves++;
            }
        }
        if (col != 2) {
            if (col > 2) {
                col--;
                numOfMoves++;
            } else {
                col++;
                numOfMoves++;
            }
        }
    }
    cout << numOfMoves;
    return 0;
}


/* // old solution
while (numPosition[0] != 2 || numPosition[1] != 2) {
    int rowDiff = abs(numPosition[0] - 2);
    int colDiff = abs(numPosition[1] - 2);
    if (rowDiff > colDiff) {
        if (numPosition[0] > 2) {
            numPosition[0]--;
            numOfMoves++;
        } else {
            numPosition[0]++;
            numOfMoves++;
        }
    } else {
        if (numPosition[1] > 2) {
            numPosition[1]--;
            numOfMoves++;
        } else {
            numPosition[1]++;
            numOfMoves++;
        }
    }
} */