#include<iostream>
using namespace std;
class test{
    int a,b;
    public:
    test(int a,int b){
        this->a = a;
        this->b = b;
        cout << "Sum of Two Numbers : " << a+b << endl;

    }
};
main(){
    int a,b;
   cout << "Enter two Values : ";
    cin >> a;
    cin >> b;
    test t(a,b);

}