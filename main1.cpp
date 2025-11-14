#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a[9];
    int b[3][3];
    for(int i=0;i<9;i++)
    { 
      cin >>a[i];
    }
    sort(a,a+9);
    for(int i=0;i<9;i++){
      cout <<a[i]<<" ";
    }
    cout << endl;
    sort(a,a+9,greater<int>());
    for(int i;i<9;i++){
      cout <<a[i]<<" ";
    }
    cout << endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            b[i][j]=a[i*3+j];
        }
    }
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            cout <<b[i][j]<<" ";
            sum+=b[i][j];
        }
        cout<<sum;
        cout <<endl;
    }
    for(int j=0;j<3;j++){
        int sum=0;
        for(int i=0;i<3;i++){
            sum+=b[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
    return 0;
}


   