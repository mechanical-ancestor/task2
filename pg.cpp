#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    const int SIZE = 9;
    const int ROWS = 3;
    const int COLS = 3;
    
    vector<int> arr(SIZE);
    
    // 获取用户输入的9个100以内的整数
    cout << "请输入9个100以内的整数：" << endl;
    for (int i = 0; i < SIZE; i++) {
        while (true) {
            cout << "请输入第" << i + 1 << "个整数: ";
            cin >> arr[i];
            
            // 输入验证
            if (cin.fail() || arr[i] < 0 || arr[i] > 100) {
                cout << "请输入0-100之间的有效整数！" << endl;
                cin.clear();
                cin.ignore(10000, '\n');
            } else {
                break;
            }
        }
    }
    
    // ===== 新增：排序功能 =====
    vector<int> arr_asc = arr;
    vector<int> arr_desc = arr;
    sort(arr_asc.begin(), arr_asc.end());
    sort(arr_desc.begin(), arr_desc.end(), greater<int>());
    
    cout << "\n从小到大排列: ";
    for (int x : arr_asc) cout << x << " ";
    cout << "\n从大到小排列: ";
    for (int x : arr_desc) cout << x << " ";
    cout << endl << endl;
    // =========================
    
    // 创建3x3二维数组并填充
    vector<vector<int>> matrix(ROWS, vector<int>(COLS));
    int index = 0;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            matrix[i][j] = arr[index++];
        }
    }
    
    // 计算每行和每列的和
    vector<int> row_sums(ROWS, 0);
    vector<int> col_sums(COLS, 0);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            row_sums[i] += matrix[i][j];
            col_sums[j] += matrix[i][j];
        }
    }
    
    // 按照要求的格式输出
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << matrix[i][j];
            if (j < COLS - 1) cout << " ";
        }
        cout << " " << row_sums[i] << endl;
    }
    
    // 输出列和
    for (int j = 0; j < COLS; j++) {
        cout << col_sums[j];
        if (j < COLS - 1) cout << " ";
    }
    cout << endl;
    
    return 0;
}