#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
int main(){
    const int SIZE=9;
    int arr[SIZE];
    cout<<"请输入9个100以内的整数：";<<endl;
    for(int i=0;i<SIZE;i++){
        cin>>arr[i];
        if(arr[i]<0||arr[i]>100)
        {
            cout<<"输入的数字超出范围，清输入0-100之间的整数：";
            i--;
        }
    }
    int matrix[3][3];
    int index=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            matrix[i][j]=arr[index++];
        }
    }
    int rowSums[3]={0};
    int colSums[3]={0};
    fot(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            rowSums[i]+=matrix[i][j];
            colSums[j]+=matrix[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<setw(2)<<matrix[i][j]<<"";
        }
            cout<<setw(3)<<rowSums[i]<<endl;
        }
        for(int j=0;j<3;j++){
            cout<<setw(2)<<colSums[j]<<"";
        }
        cout<<endl;
        return 0;
    }