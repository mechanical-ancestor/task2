#include <iostream>         // 导入输入输出流库
#include <algorithm>        //导入算法库
#include <vector>           // 导入向量容器库
#include <iomanip>      //导入输入输出流的格式化库
#include <limits>       //导入数据类型库

using namespace std;

int main() {
    vector<int> myinput(9);     //创建一个长度为9的容器，用来存储input

    cout << "请输入9个100以内的整数：" << endl;
    for (int i=0; i<9; i+=1) {
        while (true) {
            cout << "请输入第 " << i + 1 << " 个整数: ";
            cin >> myinput[i];      //将input赋值给容器myinput
            
            if (cin.fail() or myinput[i]<0 or myinput[i]>100) {     //判断input是否符合要求
                cin.clear();        //清除状态
                cin.ignore(numeric_limits<streamsize>::max(), '\n');        //清理缓冲区
                cout << "输入无效，请输入0-100之间的整数！" << endl;
            } 
            else {
                break;
            }
        }
    }
    
    vector<int> order = myinput;
    sort(order.begin(), order.end());       //排序算法，默认升序
    cout << "升序排列: ";
    for (int num : order) {
        cout << num << " ";
    }
    
    reverse(order.begin(), order.end());        //反转顺序
    cout << "\n降序排列: ";
    for (int num : order) {
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
    
    cout << string(16, '-') << endl;
    for (int j=0; j<3; j+=1) {
        cout << setw(4) << colSums[j];
    }
    cout << "   | 列和" << endl;
    
    return 0;
}
