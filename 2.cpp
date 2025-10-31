#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    const int N = 9;
    int arr[N];
    int matrix[3][3];

    cout << "请输入9个100以内的整数（空格分隔）：" << endl;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // 填充3x3矩阵
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrix[i][j] = arr[i * 3 + j];
        }
    }

    // 打印矩阵 + 行和
    cout << "\n";
    for (int i = 0; i < 3; i++) {
        int rowSum = 0;
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << "\t";
            rowSum += matrix[i][j];
        }
        cout << rowSum << endl; // 每行末尾打印该行和
    }

    // 计算并打印列和
    cout << endl;
    for (int j = 0; j < 3; j++) {
        int colSum = 0;
        for (int i = 0; i < 3; i++) {
            colSum += matrix[i][j];
        }
        cout << colSum << "\t";
    }
    cout << endl;

    return 0;
}