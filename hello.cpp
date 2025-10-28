#include <iostream>
using namespace std;
int main ()
{
int a[9],m,n,t;
int b [3][3],i,j;
int sum=0 ,sum2=0;
cout <<"请输入九个100以内的整数:";
for(m=0;m<9;m++)
cin >>a[m];
for (n=1;n<=8;n++)
{
    for(m=0;m<=8-n;m++) 
        if(a[m]>a[m+1])
           {
             t=a[m];
             a[m]=a[m+1];
             a[m+1]=t;
           }
}
cout <<endl;
cout <<"这九个数从小到大排序为：";
for (m=0;m<9;m++)
{
cout <<a[m]<<"  ";
}
cout <<endl;

cout <<"这九个数从大到小排序为：";
for (m=8;m>=0;m--)
{
    cout <<a[m]<<"  ";
}
cout <<endl;
//上述为第一题程序
        m=0;
for(i=0;i<3;i++)
         for(j=0;j<3;j++)
         {
            b[i][j]=a[m];
            m+=1;
         }
for (i=0;i<3;i++)
   {
    for (j=0;j<3;j++)
      {
        cout <<b[i][j]<<"  ";
        sum += b[i][j];
      }
     cout <<sum<<endl;
     sum=0;
   }
for (j=0;j<3;j++)
{
     for(i=0;i<3;i++)
      {
        sum2 += b[i][j];
      }
cout <<sum2<<"  ";
sum2=0;
}
return 0;
}