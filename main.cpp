#include<iostream>
using namespace std;
int main()
{
    cout << "请输入九个小于100的数" << endl;
    int a[9], I, z, t,b[3][3], i, j, sum1 = 0, c[3], sum2 = 0;//;z为中间载量，I为一维数组序号。i为二维数组行数，j为列数，sum1为每一行的和
                                                      //sum2为每一列的暂定总值，b[3]为列总值一维数组

    for (I = 0; I <= 8; I++)
        cin >> a[I];                                  //输入九个小于100的数
    for(i=0;i<=2;i++)                                 //将一维数组的值输入二维数组
    {
        for (j = 0;j<=2;j++)
        b[i][j]=a[i*3+j];
    }

    for (t = 1; t < 9; t++)
        for (I = 0; I <= 8 - t; I++)
            if (a[I] > a[I + 1])                      //判断相邻两个数大小
            {
                z = a[I];                             //将大的数替换为下一个数
                a[I] = a[I + 1];                      //通过循环将大的数放在数列后面
                a[I + 1] = z;
            }

    cout<<endl;
    cout << "这个数组从小到大排列为："<<endl;
    for (I = 0; I <= 8; I++)
        cout << a[I] << "  ";                         //从小到大输出
    
    cout<<endl;
    cout << "这个数组从大到小排列为："<<endl;
    for (I = 8; I >= 0; I--)
        cout << a[I] << "  ";                         //从大到小输出


    /*以下是求二维数组矩阵与其每行每列的总值*/

    cout<<endl;
    cout<<endl;
    cout << "你输出的二维数组矩阵为（包括每行每列的总值）："<<endl;
    for (i = 0; i <= 2; i++)                                          //分行
    {
        for (j = 0; j <= 2; j++)                                      //分列
        {
            cout << b[i][j] << "     ";            //可以做到每一行三个数字
            sum1 += b[i][j];                      //分别输出并计算其每行的总值
        }
        cout << sum1;
        sum1 = 0;              //将每一行的总值清零，防止下一行的总值有初始值
        cout << "\n";
    }

    for (j = 0; j <= 2; j++)                                           //分列
    {
        for (i = 0; i <= 2; i++)                                       //分行
        {
            sum2 += b[i][j];                                   //求每一列总值
        }
        c[j] = sum2;
        cout << c[j] << "    ";                            //分别输出每一列总值
        sum2 = 0;
    }
    return 0;

}