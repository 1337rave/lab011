#include <iostream>

const int MAX_ROWS = 10;
const int MAX_COLS = 10;

void addRowToPosition(int matrix[MAX_ROWS][MAX_COLS], int newRow[], int& numRows, int numCols, int position) {
    if (numRows < MAX_ROWS&& position >= 0 && position <= numRows) {
 
        for (int i = numRows; i > position; --i) {
            for (int j = 0; j < numCols; ++j) {
                matrix[i][j] = matrix[i - 1][j];
            }
        }

        for (int i = 0; i < numCols; ++i) {
            matrix[position][i] = newRow[i];
        }

        numRows++;
    }
    else {
        std::cout << "Incorrect position or maximum number of lines exceeded." << std::endl;
    }
}

int main() {
    int myMatrix[MAX_ROWS][MAX_COLS] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int newRow[MAX_COLS] = { 10, 11, 12 };
    int numRows = 3;
    int numCols = 3;
    int position = 1; 

    addRowToPosition(myMatrix, newRow, numRows, numCols, position);

    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numCols; ++j) {
            std::cout << myMatrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
