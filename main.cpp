#include <iostream>
using namespace std;

int main() {
    int a, b;
    int arr[9];
    cout << "请输入9个100以内的整数：" << endl;
    for (int i = 0; i < 9; i++) {
        cout << "第" << i + 1 << "个数：";
        cin >> arr[i];
        while (arr[i]<0||arr[i]>100)
        {
            cout << "输入错误，请输入100以内的整数：" << endl;
            cin >> arr[i];
        }
        
    }

    //创建二维数组并填充,排序前打印防止数据错误
    int arr2[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            arr2[i][j] = arr[i * 3 + j];
        }
    }

    //由小到大
    for (int i = 0; i < 9 - 1; i++) {
        for (int j = 0; j < 9 - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                a = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = a;
            }
        }
    }
    cout << "由小到大排列结果为：" << endl;
    for (int i = 0; i < 9; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    //由大到小
    for (int i = 0; i < 9 - 1; i++) {
        for (int j = 0; j < 9 - 1 - i; j++) {
            if (arr[j] < arr[j + 1]) {      
                b = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = b;
            }
        }
    }
    cout << "由大到小排列结果为：" << endl;
    for (int i = 0; i < 9; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    //矩阵形式打印
    cout << "数组表示及其行和与列和：" << endl;
    int rowSums[3] = {0};
    int colSums[3] = {0};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr2[i][j] << "\t"; 
            rowSums[i] += arr2[i][j];
            colSums[j] += arr2[i][j];
        }
        cout << rowSums[i] << endl;
    }
    for (int j = 0; j < 3; j++) {
        cout << colSums[j] << "\t";
    }
    cout << endl;

    return 0;
}