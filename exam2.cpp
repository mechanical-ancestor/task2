#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int arr[9];
cout<<"请输入9个100以内的整数："<<endl;
for (int i=0;i<9;i++)
{
cin>>arr[i];
}
int arrAsc[9];
for (int i=0;i<9;i++)
{
arrAsc[i]=arr[i];
}
sort(arrAsc,arrAsc + 9);
cout<<"从小到大排序：";
for (int i=0;i<9;i++)
{
cout<<arrAsc[i]<<"";
}
cout<<endl;
int arrDesc[9];
for (int i=0;i<9;i++)
{
arrDesc[i]=arr[i];
}
sort(arrDesc,arrDesc + 9,greater<int>());
cout<<"从大到小排序：";
for (int i=0;i<9;i++)
{
cout<<arrDesc[i]<<"";
}
cout<<endl;
int matrix[3][3];
int rowSum[3]={0};
int colSum[3]={0};
int index=0;
for (int i=0;i<3;i++)
{
for (int j=0;j<3;j++)
{
matrix[i][j]=arr[index++];
rowSum[i]+=matrix[i][j];
}
}
for (int j=0;j<3;j++)
{
for (int i=0;i<3;i++)
{
colSum[j]+=matrix[i][j];
}
}
cout<<"矩阵形式（每行末尾为行和）："<<endl;
for (int i=0;i<3;i++)
{
for (int j=0;j<3;j++)
{
cout<<matrix[i][j]<<"";
}
cout<<rowSum[i]<<endl;
}
cout<<"每列的和：";
for (int j=0;j<3;j++)
{
cout<<colSum[j]<<"";
}
cout<<endl;
return 0;
}
