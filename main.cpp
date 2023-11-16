#include <iostream>

const int MAX_ROWS = 10;
const int MAX_COLS = 10;


void deleteRow(int matrix[MAX_ROWS][MAX_COLS], int& numRows, int numCols, int rowToDelete) {
    
    if (rowToDelete >= 0 && rowToDelete < numRows) {

        for (int i = rowToDelete; i < numRows - 1; ++i) {
            for (int j = 0; j < numCols; ++j) {
                matrix[i][j] = matrix[i + 1][j];
            }
        }

        numRows--; 
    }
    else {
        std::cout << "Invalid row number." << std::endl;
    }
}

int main() {
    int myMatrix[MAX_ROWS][MAX_COLS] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int numRows = 3;
    int numCols = 3;
    int rowToDelete;

    std::cout << "Current Matrix:" << std::endl;
    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numCols; ++j) {
            std::cout << myMatrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Enter the row number to delete: ";
    std::cin >> rowToDelete;

    deleteRow(myMatrix, numRows, numCols, rowToDelete);

    std::cout << "Updated Matrix:" << std::endl;
    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numCols; ++j) {
            std::cout << myMatrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
