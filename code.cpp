#include<iostream>
using namespace std;

int main()
{
	int arr[9];
	int arr1[9];
    cout<<"请您输入9个整数"<<endl;
	for (int i = 0; i < 9; i++)//输入数组
	{
		cin >> arr[i];
	}
	for (int i = 0; i < 9; i++)//复制数组，以便可以分别完成二维数组填充和排序
	{
		arr1[i] = arr[i];
	}
	int a = 0;//冒泡排序，从小到大排序
	for (int j = 1; j < 9; j++)
	{
		for (int i = 0; i < 8 - a; i++)
		{
			if (arr1[i] > arr1[i + 1])
			{
				int temp = arr1[i];
				arr1[i] = arr1[i + 1];
				arr1[i + 1] = temp;
			}
		}
		a++;
	}
	for (int i = 0; i < 9; i++)
	{
		cout << arr1[i] << " ";
	}
	cout << endl;
	for (int i = 0; 8 - i > i; i++)//利用已排好序的数组对称交换项值
	{
		int temp1 = arr1[i];
		arr1[i] = arr1[8 - i];
		arr1[8 - i] = temp1;
	}
	for (int i = 0; i < 9; i++)
	{
		cout << arr1[i] << " ";
	}
	cout << endl;
	int arr2[3][3];//定义二维数组
	for (int i = 0; i < 3; i++)//给数组赋值
	{
		for (int j = 0; j < 3; j++)
		{
			arr2[i][j] = arr[j + i * 3];
		}
	}
	int sum[6] = { 0 };//定义每行每列和的数组
	for (int i = 0; i < 3; i++)//求数组每行每列的和
	{
		for (int j = 0; j < 3; j++)
		{
			sum[i] += arr2[i][j];
		}
		for (int j = 0; j < 3; j++)
		{
			sum[i + 3]+= arr2[j][i];
		}
	}
	for (int i = 0; i < 3; i++)//打印
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr2[i][j] << "\t";
		}
		cout << sum[i]; 
		cout << endl;
	}
	for (int i = 0; i < 3; i++)
	{
		cout << sum[i + 3] << "\t";
	}
    cout<<endl;
	return 0;
}