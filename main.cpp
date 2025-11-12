
#include <iostream>
#include <algorithm> // 用于排序函数
using namespace std;

int main() {
    // 定义存储9个整数的数组
    int arr[9];
    cout << "请输入9个100以内的整数：" << endl;
    for (int i = 0; i < 9; i++) {
        cin >> arr[i];
    }

    // 1. 数组排序（从小到大、从大到小）
    int arr_asc[9], arr_desc[9];
    // 复制原数组到排序数组
    for (int i = 0; i < 9; i++) {
        arr_asc[i] = arr[i];
        arr_desc[i] = arr[i];
    }
    // 从小到大排序
    sort(arr_asc, arr_asc + 9);
    // 从大到小排序
    sort(arr_desc, arr_desc + 9, greater<int>());

    // 输出排序结果
    cout << "\n从小到大排序结果：";
    for (int i = 0; i < 9; i++) {
        cout << arr_asc[i] << " ";
    }
    cout << "\n从大到小排序结果：";
    for (int i = 0; i < 9; i++) {
        cout << arr_desc[i] << " ";
    }

    // 2. 填充3x3二维数组并计算行列和
    int matrix[3][3];
    int index = 0;
    // 将一维数组填充到二维数组
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrix[i][j] = arr[index++];
        }
    }

    // 输出二维数组（矩阵形式）
    cout << "\n\n3x3矩阵：" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    // 计算并输出每行的和
    cout << "\n每行的和：";
    for (int i = 0; i < 3; i++) {
        int row_sum = 0;
        for (int j = 0; j < 3; j++) {
            row_sum += matrix[i][j];
        }
        cout << row_sum << " ";
    }

    // 计算并输出每列的和
    cout << "\n每列的和：";
    for (int j = 0; j < 3; j++) {
        int col_sum = 0;
        for (int i = 0; i < 3; i++) {
            col_sum += matrix[i][j];
        }
        cout << col_sum << " ";
    }

    return 0;
}
