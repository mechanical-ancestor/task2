#include <iostream>
using namespace std;

int main() {
    int numbers[9];
    cout << "请输入9个100以内的整数：" << endl;
    
    for (int i = 0; i < 9; i++) {
        cout << "请输入第" << i + 1 << "个整数：";
        cin >> numbers[i];
        
        while (numbers[i] < 0 || numbers[i] >= 100) {
            cout << "输入错误！请输入100以内的整数。" << endl;
            cout << "请重新输入第" << i + 1 << "个整数：";
            cin >> numbers[i];
        }
    }

    int ascending[9];
    int descending[9];
    for (int i = 0; i < 9; i++) {
        ascending[i] = numbers[i];
        descending[i] = numbers[i];
    }

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8 - i; j++) {
            if (ascending[j] > ascending[j + 1]) {
                int temp = ascending[j];
                ascending[j] = ascending[j + 1];
                ascending[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8 - i; j++) {
            if (descending[j] < descending[j + 1]) {
                int temp = descending[j];
                descending[j] = descending[j + 1];
                descending[j + 1] = temp;
            }
        }
    }

    cout << "\n从小到大排序：";
    for (int i = 0; i < 9; i++) {
        cout << ascending[i] << " ";
    }
    cout << endl;
    
    cout << "从大到小排序：";
    for (int i = 0; i < 9; i++) {
        cout << descending[i] << " ";
    }
    cout << endl;

    int matrix[3][3];
    int index = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrix[i][j] = numbers[index];
            index++;
        }
    }
 
    int rowSums[3] = {0, 0, 0};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            rowSums[i] += matrix[i][j];
        }
    }

    int colSums[3] = {0, 0, 0};
    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < 3; i++) {
            colSums[j] += matrix[i][j];
        }
    }

    cout << "\n带行列和的4x4形式：" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (i < 3 && j < 3) {
                cout << matrix[i][j] << "\t";
            }
            else if (i < 3 && j == 3) {
                cout << rowSums[i] << "\t";
            }
            else if (i == 3 && j < 3) {
                cout << colSums[j] << "\t";
            }
            else {
                cout << " " << "\t";
            }
        }
        cout << endl;
    }
    
    return 0;
}