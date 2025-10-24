#include<iostream>
using namespace std;
#define LEN 9
 
void Write(int arr[LEN])  //输入一个数组
{
    int num = 0;
    for(int i = 0 ; i < LEN ; i++)
    {
        while(1)
        {
            cin >> num;
            if(num > 100)
            {
                cout << "Please reintroduce" << endl;  
            }
            else
            {
                arr[i] = num ;
                break;
            }
        }
    }
}

void Arrange_BtoS(int arr[LEN] )   //大到小
{
    for(int i = 0 ; i < LEN - 1 ; i++)
    {
        for(int j = 0 ; j < LEN - 1 - i ; j++)
        {
            if(arr[j] < arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int i = 0 ; i < LEN ; i++)
    {
        cout << arr[i] << " " ;
    } 
}

void Arrange_StoB(int arr[LEN] )   //小到大
{
    for(int i = 0 ; i < LEN - 1 ; i++)
    {
        for(int j = 0 ; j < LEN - 1 - i ; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    } ; 

    for(int i = 0 ; i < LEN ; i++)
    {
        cout << arr[i] << " ";
    }
}

void switchArr(int arr[LEN] , int arr_two[][3])//转换数组
{
    int i = 0;
    if(i < LEN)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            for(int k = 0 ; k < 3 ; k++)
            {
                arr_two[j][k] = arr[i];
                i++;
            }
        }  
    }  
}

void calculator(int arr[][3] , int arr_cal_sum1[3] , int arr_cal_sum2[3] )
{
    //横行和
    for(int i = 0 ; i < 3 ; i++)
    {
        arr_cal_sum1[i] = 0 ;
        for(int j = 0 ; j < 3 ; j++)
        {
            arr_cal_sum1[i] += arr[i][j];
        }
    }

    //竖行和
     for(int i = 0 ; i < 3 ; i++)
    {
        arr_cal_sum2[i] = 0;
        for(int j = 0 ; j < 3 ; j++)
        {
            arr_cal_sum2[i] += arr[j][i];
        }
    }
}

void printArr_(int arr[][3] , int arr_pri_sum1[3] , int arr_pri_sum2[3] )//打印出来
{
    calculator(arr , arr_pri_sum1 , arr_pri_sum2);

    cout << "打印矩阵如下：" << endl;
    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            cout << arr[i][j] << "\t" ;
        }
        cout << arr_pri_sum1[i] << endl;
        cout << endl;
    }

    for(int i = 0 ; i < 3 ; i++)
    {
        cout << arr_pri_sum2[i] << "\t" ;
    }
    cout << endl;
}

int main()
{
    int arr[LEN];

    Write(arr);

    int arr_sum1[3];
    int arr_sum2[3];
    int arr_two[3][3];

    switchArr(arr , arr_two);

    printArr_(arr_two , arr_sum1 , arr_sum2 );

    Arrange_BtoS(arr);
    
    cout << endl;
    
    Arrange_StoB(arr);

    return 0;
}