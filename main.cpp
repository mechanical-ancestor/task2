#include <iostream>
using namespace std;

int main() {
    const int SIZE = 9;
    int arr[SIZE]; // 存储9个整数的数组
    
    // 输入9个100以内的整数
    cout << "请输入9个100以内的整数：" << endl;
    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i];
    }
    
    // 1. 数组排序（升序和降序）
    // 使用冒泡排序算法实现升序排列
    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // 交换元素
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    // 打印升序排列结果
    cout << "升序排列：";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // 降序排列（将升序数组反转）
    cout << "降序排列：";
    for (int i = SIZE - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // 2. 创建3x3二维数组并计算行列和
    int matrix[3][3]; // 3x3二维数组
    int index = 0;    // 原数组索引
    
    // 将输入数据填充到二维数组中
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrix[i][j] = arr[index++];
        }
    }
    
    // 计算每行每列的和
    int rowSum[3] = {0}; // 存储每行的和
    int colSum[3] = {0}; // 存储每列的和
    
    // 计算行列和
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            rowSum[i] += matrix[i][j]; // 累加行和
            colSum[j] += matrix[i][j]; // 累加列和
        }
    }
    
    // 打印矩阵和行和（格式与示例图片一致）
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << rowSum[i] << endl; // 在每行末尾打印该行的和
    }
    
    // 打印列和
    for (int j = 0; j < 3; j++) {
        cout << colSum[j] << " ";
    }
    cout << endl;
    
    return 0;
}
