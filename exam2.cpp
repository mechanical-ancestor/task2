#include <iostream>
using namespace std;

int main() {
    // 1. 输入9个整数到一维数组
    int arr[9];
    cout << "请输入9个100以内的整数：" << endl;
    for (int i = 0; i < 9; i++) {
        cin >> arr[i];
    }

    // 2. 从小到大排序（冒泡排序）
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "从小到大排列：";
    for (int i = 0; i < 9; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 3. 从大到小排序（冒泡排序）
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8 - i; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "从大到小排列：";
    for (int i = 0; i < 9; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 4. 填充到3x3二维数组并计算行列和
    int matrix[3][3];
    int rowSum[3] = {0}, colSum[3] = {0};
    int index = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrix[i][j] = arr[index++];  // 一维数组转二维矩阵
            rowSum[i] += matrix[i][j];    // 计算每行和
            colSum[j] += matrix[i][j];    // 计算每列和
        }
    }

    // 打印矩阵和行列和
    cout << "矩阵及行列和：" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << rowSum[i] << endl;  // 打印行和
    }
    for (int j = 0; j < 3; j++) {
        cout << colSum[j] << " ";
    }
    cout << endl;

    return 0;
}
