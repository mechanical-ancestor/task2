#include <iostream>
#include <algorithm> //提供sort算法函数
using namespace std; //简化代码

    int main( ){
        int a1 [9]; //定义一维数组
        int a2 [3][3]; //定义二维数组
        int a3 [3]={0}; //统计每行的和 开始为0
        int a4 [3]={0}; //统计每列的和 开始为0

        for(int i = 0;i <= 8;i++)
        {   
            cout <<"请依次输入9个100以内的整数"<< endl;
            cin >> a1[i];   //输入9个数
        }

        int b=0; //随便设的数 便于下面的循环
        for (int d=0 ; d<3 ; d++)
        {
                for(int c=0 ; c<3 ; c++)
                {
                    a2 [d][c]=a1[b++]; //将值赋进二维组数
                    a3 [d] += a2[d][c]; //计算行的和
                    a4 [c] += a2[d][c]; //计算列的和
                }
        }
    
        //对这九个数进行从小到大排列
        sort (a1,a1+9);
            for (int num:a1)
            {
                cout << num <<" " ;

            }   cout <<"\n";

        //对这九个数进行从大到小排列
        sort (a1,a1+9,greater<int>());
            for (int num:a1)
            {
                cout << num <<" " ;
            }   cout <<"\n";

            //输出二维数组和每行的和
        for (int d=0 ; d<3 ; d++)
        {
               for(int c=0;c<3;c++)
             {       cout << a2[d][c] <<" ";  //输出二维数组 留一个位置避免和每行或每列的和紧挨
                }
                cout << a3[d] << "\n";  //输出当前行的和 然后换行
            }

            for (int c=0;c<3;c++)
            {
                cout << a4[c] << " ";//输出每列的和 和一个空格 和旁边的数分隔开
            }
                cout << "\n"; //结束
                 return 0;
                }
