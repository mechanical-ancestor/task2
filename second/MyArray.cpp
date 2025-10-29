#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    vector<int> myinput(9);

    cout << "请输入9个100以内的整数：" << endl;
    for (int i=0; i<9; i+=1) {
        while (true) {
            cout << "请输入第 " << i + 1 << " 个整数: ";
            cin >> myinput[i];
            
            if (cin.fail() or myinput[i]<0 or myinput[i]>100) {
                cin.clear(); 
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "输入无效，请输入0-100之间的整数！" << endl;
            } 
            else {
                break;
            }
        }
    }
    
    vector<int> ascending = myinput;
    sort(ascending.begin(), ascending.end());
    cout << "升序排列: ";
    for (int num : ascending) {
        cout << num << " ";
    }
    
    vector<int> descending = myinput;
    sort(descending.begin(), descending.end(), greater<int>());
    cout << "\n降序排列: ";
    for (int num : descending) {
        cout << num << " ";
    }
    cout << endl;
    
    vector<vector<int>> matrix(3, vector<int>(3));
    int index = 0;
    for (int i=0; i<3; i+=1) {
        for (int j = 0; j < 3; j+=1) {
            matrix[i][j] = myinput[index++];
        }
    }
    
    vector<int> rowSums(3, 0);
    vector<int> colSums(3, 0);
    
    cout << "\n矩阵形式:" << endl;
    for (int i=0; i<3; i+=1) {
        for (int j=0; j<3; j+=1) {
            cout << setw(4) << matrix[i][j];
            rowSums[i] += matrix[i][j];
            colSums[j] += matrix[i][j];
        }
        cout << "   | 行和: " << rowSums[i] << endl;
    }
    
    // 打印列和
    cout << string(16, '-') << endl;
    for (int j=0; j<3; j+=1) {
        cout << setw(4) << colSums[j];
    }
    cout << "   | 列和" << endl;
    
    return 0;
}