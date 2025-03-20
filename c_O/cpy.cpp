#include <iostream>

using namespace std;
class test
{
public:
    int a;

    test(int i)
    {
        a = i;
        cout << "Constructor with int: " << a << endl;
    }
    test(test &e)
    {
        a = e.a;
    }
};

main()
{
    test t1(10);
    test t2(t1);
    cout<<t2.a<<endl;
}