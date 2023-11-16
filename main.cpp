#include <iostream>
using namespace std;

const int MAX_ROWS = 10;
const int MAX_COLS = 10;

void addRowToBeginning(int matrix[MAX_ROWS][MAX_COLS], int newRow[], int& numRows, int numCols) {
    if (numRows < MAX_ROWS) {
        // Зсув існуючих рядків вниз
        for (int i = numRows; i > 0; --i) {
            for (int j = 0; j < numCols; ++j) {
                matrix[i][j] = matrix[i - 1][j];
            }
        }

        for (int i = 0; i < numCols; ++i) {
            matrix[0][i] = newRow[i];
        }

        numRows++; 
    }
    else {
        cout << "Перевищено максимальну кількість рядків." << endl;
    }
}

int main() {
    int myMatrix[MAX_ROWS][MAX_COLS] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int newRow[MAX_COLS] = { 10, 11, 12 };
    int numRows = 3;
    int numCols = 3;

    addRowToBeginning(myMatrix, newRow, numRows, numCols);

    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numCols; ++j) {
            std::cout << myMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
