#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    const int ARR_SIZE = 9;
    vector<int> arr(ARR_SIZE);

    // 输入9个100以内的整数
    cout << "请输入9个100以内的整数：" << endl;
    for (int i = 0; i < ARR_SIZE; i++) {
        cin >> arr[i];
        // 输入验证（确保在0 - 100之间）
        while (arr[i] < 0 || arr[i] > 100) {
            cout << "请输入0 - 100之间的有效整数，重新输入：" << endl;
            cin >> arr[i];
        }
    }

    // 1. 数组升序排序并打印
    vector<int> arrAsc = arr;
    sort(arrAsc.begin(), arrAsc.end());
    cout << "从小到大排列：";
    for (int num : arrAsc) {
        cout << num << " ";
    }
    cout << endl;

    // 2. 数组降序排序并打印
    vector<int> arrDesc = arr;
    sort(arrDesc.rbegin(), arrDesc.rend());
    cout << "从大到小排列：";
    for (int num : arrDesc) {
        cout << num << " ";
    }
    cout << endl;

    // 3. 构建3x3矩阵并计算行列和
    const int ROWS = 3, COLS = 3;
    vector<vector<int>> matrix(ROWS, vector<int>(COLS));
    int index = 0;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            matrix[i][j] = arr[index++];
        }
    }

    // 计算行和与列和
    vector<int> rowSums(ROWS, 0);
    vector<int> colSums(COLS, 0);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            rowSums[i] += matrix[i][j];
            colSums[j] += matrix[i][j];
        }
    }

    // 打印矩阵及行和
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << rowSums[i] << endl;
    }

    // 打印列和
    for (int j = 0; j < COLS; j++) {
        cout << colSums[j] << " ";
    }
    cout << endl;

    return 0;
}