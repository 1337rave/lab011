#include <iostream>

using namespace std;

#include <iostream>

const int MAX_ROWS = 10;
const int MAX_COLS = 10;

int main() {
    int myMatrix[MAX_ROWS][MAX_COLS] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int newRow[MAX_COLS] = { 10, 11, 12 };
    int numRows = 3;
    int numCols = 3;

    if (numRows < MAX_ROWS) {
        for (int i = 0; i < numCols; ++i) {
            myMatrix[numRows][i] = newRow[i];
        }
        numRows++; 
    }
    else {
        cout << "Maximum number of rows exceeded." << endl;
    }

    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numCols; ++j) {
            cout << myMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
