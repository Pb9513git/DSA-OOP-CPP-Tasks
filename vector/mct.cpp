#include <iostream>
#include<vector>
using namespace std;    
template<typename T>
class students{
    private:
    T id;
    string name;
    public:
    students(T id, string name):id(id),name(name){}
    void display() const{
        cout<<"ID: "<<id<<", Name: "<<name<<endl;
    }
    void addStudent(T id, string name){
        students<T> s(id,name);
        data.push_back(s);
    }
};
