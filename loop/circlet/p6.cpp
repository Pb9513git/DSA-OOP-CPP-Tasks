#include<iostream>
using namespace std;
main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<j;

        }
        for(int j=1;j<=2*(5-i)-1;j++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            if(j==5){
                continue;
            }
            cout<<j;
        }
        cout<<endl;
    }
}