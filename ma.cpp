#include <iostream>
using namespace std;

int main() {
    // 存储输入的9个整数的一维数组
    int arr[9];
    // 用于存储排序后的数组
    int sortedAsc[9], sortedDesc[9];
    // 3x3二维数组
    int matrix[3][3];
    // 存储每行每列的和
    int rowSum[3] = {0}, colSum[3] = {0};

    // 1. 用户输入9个整数
    cout << "请输入9个100以内的整数：" << endl;
    for (int i = 0; i < 9; i++) {
        cin >> arr[i];
        // 将输入的数同时存入排序数组和二维数组
        sortedAsc[i] = arr[i];
        sortedDesc[i] = arr[i];
        matrix[i / 3][i % 3] = arr[i]; // 修正二维数组赋值逻辑
    }

    // 2. 从小到大排序（冒泡排序）
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8 - i; j++) {
            if (sortedAsc[j] > sortedAsc[j + 1]) {
                int temp = sortedAsc[j];
                sortedAsc[j] = sortedAsc[j + 1];
                sortedAsc[j + 1] = temp;
            }
        }
    }

    // 从大到小排序（冒泡排序）
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8 - i; j++) {
            if (sortedDesc[j] < sortedDesc[j + 1]) {
                int temp = sortedDesc[j];
                sortedDesc[j] = sortedDesc[j + 1];
                sortedDesc[j + 1] = temp;
            }
        }
    }

    // 输出从小到大排序的结果
    cout << "从小到大排序：" << endl;
    for (int i = 0; i < 9; i++) {
        cout << sortedAsc[i] << " ";
    }
    cout << endl;

    // 输出从大到小排序的结果
    cout << "从大到小排序：" << endl;
    for (int i = 0; i < 9; i++) {
        cout << sortedDesc[i] << " ";
    }
    cout << endl;

    // 计算并输出3x3矩阵每行每列的和
    cout << "3x3矩阵及每行每列的和：" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
            rowSum[i] += matrix[i][j];
            colSum[j] += matrix[i][j];
        }
        cout << " 行和：" << rowSum[i] << endl;
    }
    cout << "列和：" << colSum[0] << " " << colSum[1] << " " << colSum[2] << endl;

    return 0;
}