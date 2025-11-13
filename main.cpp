#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    const int SIZE = 9;
    const int ROWS = 3;
    const int COLS = 3;
    int arr[SIZE];
    int matrix[ROWS][COLS];
    
    // Input 9 integers
    cout << "Please enter 9 integers between 0-100:" << endl;
    for (int i = 0; i < SIZE; i++) {
        do {
            cout << "Enter number " << i + 1 << ": ";
            cin >> arr[i];
            if (arr[i] < 0 || arr[i] > 100) {
                cout << "Error! Please enter integer between 0-100." << endl;
            }
        } while (arr[i] < 0 || arr[i] > 100);
    }
    
    // Ascending sort
    int asc_arr[SIZE];
    copy(arr, arr + SIZE, asc_arr);
    sort(asc_arr, asc_arr + SIZE);
    
    cout << "\nAscending order: ";
    for (int i = 0; i < SIZE; i++) {
        cout << asc_arr[i] << " ";
    }
    cout << endl;
    
    // Descending sort
    int desc_arr[SIZE];
    copy(arr, arr + SIZE, desc_arr);
    sort(desc_arr, desc_arr + SIZE, greater<int>());
    
    cout << "Descending order: ";
    for (int i = 0; i < SIZE; i++) {
        cout << desc_arr[i] << " ";
    }
    cout << endl;
    
    // Fill 3x3 matrix and calculate sums
    cout << "\nMatrix and row sums:" << endl;
    int row_sums[ROWS] = {0};
    int col_sums[COLS] = {0};
    
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            matrix[i][j] = arr[i * COLS + j];
            cout << matrix[i][j] << "\t";
            row_sums[i] += matrix[i][j];
            col_sums[j] += matrix[i][j];
        }
        cout << row_sums[i] << endl;
    }
    
    // Output column sums
    cout << "Column sums:\t";
    for (int j = 0; j < COLS; j++) {
        cout << col_sums[j] << "\t";
    }
    cout << endl;
    
    return 0;
}