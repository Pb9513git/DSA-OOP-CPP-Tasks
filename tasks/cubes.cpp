#include <iostream>
using namespace std;

class X {
protected:
    int a, b, c;

public:
    void getNumbers() {
        cout << "Enter three numbers: ";
        cin >> a >> b >> c;
    }
};

class Y : public X {
public:
    void sumOfCubes() {
        int sum = (a * a * a) + (b * b * b) + (c * c * c);
        cout << "Sum of cubes: " << sum << endl;
    }
};

int main() {
    Y obj;
    obj.getNumbers();
    obj.sumOfCubes();
    return 0;
}
