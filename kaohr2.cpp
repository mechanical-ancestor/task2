#include <iostream>
#include <algorithm>//特殊函数
using namespace std;

int main() {
    int arr[9];
    cout << "请输入9个数:" << endl;
    for (int i = 0; i < 9; i++) {
        cin >> arr[i];
    }

    // 升序排序
    int sheng[9];
    for (int i = 0; i < 9; i++) {
        sheng[i] = arr[i];//相当于把arr中的数转到另一个数组sheng
    }
    sort(sheng, sheng + 9);
    cout << "从小到大排序：";
    for (int num : sheng) {
        cout << num << " ";
    }
    cout << endl;

    // 降序排序
    int jiang[9];
    for (int i = 0; i < 9; i++) {
        jiang[i] = arr[i]; //相当于把arr中的数转到另一个数组jiang
    }
    sort(jiang, jiang + 9, greater<int>());
    cout << "从大到小排序：";
    for (int num : jiang) {
        cout << num << " ";
    }
    cout << endl;

    // 构建3×3矩阵并计算行列和
    int m[3][3];
    int hang[3] = { 0 };  // 行和
    int lie[3] = { 0 };   // 列和

    // 填充矩阵并计算行和
    for (int i = 0; i < 3; i++) {  // 行索引（0-2）
        for (int j = 0; j < 3; j++) {  // 列索引（0-2）
            m[i][j] = arr[i * 3 + j];  // 一维数组转二维矩阵
            hang[i] += m[i][j];        // 累加行和                                   数组第一个元素默认序号为0
        }
    }

    // 计算列和
    for (int j = 0; j < 3; j++) {  // 列索引（0-2）
        for (int i = 0; i < 3; i++) {  // 行索引（0-2）
            lie[j] += m[i][j];        // 累加列和
        }
    }

    // 输出矩阵及行和
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << m[i][j] << " ";
        }
        cout << hang[i]<< endl;
    }

    // 输出列和
   
    for (int j = 0; j < 3; j++) {
        cout << lie[j] << "  ";
        
    }
   
    cout << endl;

    return 0;
}