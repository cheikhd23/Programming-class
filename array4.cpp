#include <iostream>
#include <vector>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    if (rows <= 0 || cols <= 0) {
        cout << "Rows and columns must be greater than 0.\n";
        return 1;
    }

    vector<vector<int>> arr(rows, vector<int>(cols));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter value for [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    cout << "\nYour 2D array:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
