#include<iostream>
using namespace std;
main(){
    //sum and average of all elements
    int size;
    cout<<"Enter Array Size : ";
    cin>>size;
    int a[size];
    for(int i=0;i<size;i++){
        cout<<"Enter element : ";
        cin>>a[i];
    }
    cout<<"Array Elements are  "<<endl;
    int sum=0;
    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
        sum+=a[i];
    }
    cout<<"Sum of all Array elements is : "<<sum<<endl;
    cout<<"Average is : "<<sum/size;
}