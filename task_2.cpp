#include <iostream>
#include <algorithm> // 用于sort函数进行数组排序
using namespace std; 

int main() {
    const int SIZE = 9;//定义常量并初始化，表示数组大小
    const int ROWS = 3;//行数
    const int COLS = 3;//列数
    int arr[SIZE];//整型数组，储存整数
    
    // 输入9个100以内的整数
    cout << "请输入9个100以内的整数：" << endl;
    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i];//读取整数并储存到arr上
        // 简单验证输入是否在100以内
        if (arr[i] > 100) {
            cout << "警告：输入的数字超过100，请重新运行程序并输入有效数字。" << endl;
            return 1;
        }
    }
    
    // 排序并输出
    // 升序排列
    int ascendingArr[SIZE];
    copy(arr, arr + SIZE, ascendingArr); // 复制原数组：源数组的起始地址，结束地址，目标数组的起始地址
    sort(ascendingArr, ascendingArr + SIZE);//排列数组起始地址，结束地址
    
    cout << "升序排列：";
    for (int i = 0; i < SIZE; i++) {
        cout << ascendingArr[i] << " ";
    }
    cout << endl;
    
    // 降序排列
    int descendingArr[SIZE];
    copy(arr, arr + SIZE, descendingArr); // 复制原数组
    sort(descendingArr, descendingArr + SIZE, greater<int>());//排列数组起始地址，结束地址，定义降序的比较规则
    
    cout << "降序排列：";
    for (int i = 0; i < SIZE; i++) {
        cout << descendingArr[i] << " ";//打印数组索引为i的元素并跟一个空格
    }
    cout << endl << endl;
    
    // 创建3x3二维数组并填充
    int matrix[ROWS][COLS];//声明二维整型数组行数，列数均常量定义
    int index = 0;
    
    // 将一维数组填充到二维数组中
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            matrix[i][j] = arr[index++];//赋值，后缀自增
        }
    }//main函数体结束
    
    // 以矩阵形式打印二维数组
    cout << "3x3矩阵：" << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << matrix[i][j] << "\t";//打印j列元素
        }
        cout << endl;
    }
    cout << endl;
    
    // 计算每一行的和
    cout << "行和：" << endl;//标题
    for (int i = 0; i < ROWS; i++) {
        int rowSum = 0;
        for (int j = 0; j < COLS; j++) {
            rowSum += matrix[i][j];//累加
        }
        cout << "第" << i + 1 << "行和：" << rowSum << endl;
    }
    cout << endl;
    
    // 计算每一列的和
    cout << "列和：" << endl;
    for (int j = 0; j < COLS; j++) {
        int colSum = 0;
        for (int i = 0; i < ROWS; i++) {
            colSum += matrix[i][j];
        }
        cout << "第" << j + 1 << "列和：" << colSum << endl;
    }
    
    return 0;
    
}
