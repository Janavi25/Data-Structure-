#include<iostream>
using namespace std;

int main(){

    int n=8;
    // cin>>n;

    for(int i=1;i<=n/2;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
         for(int j=1;j<=n-(2*i);j++){
            cout<<"  ";
        }
          for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
     for(int i=1;i<=n/2;i++){
        for(int j=1;j<=(n/2)-i+1;j++){
            cout<<"* ";
        }
        for(int j=1;j<=(2*i)-2;j++){
             cout<<"  ";
        }
        
        for(int j=1;j<=(n/2)-i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

}