#include<iostream>
using namespace std;
main(){
    //print all elements
    int size;
    cout<<"Enter Array Size : ";
    cin>>size;
    int a[size];
    for(int i=0;i<size;i++){
        cout<<"Enter element : ";
        cin>>a[i];
    }
    cout<<"Array Elements are  "<<endl;
    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }
}