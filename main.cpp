#include<iostream>
using namespace std;
class A
{
    int a;
    public:
    A(int a_):a(a_){cout<<"ctor is called"<<endl;}
    void print()
    {
        cout<<"this is inside A"<<endl;//call to its derived will not happen in case of overload
    }
    void show()
    {
        cout<<"this is inside A"<<endl;
    }
}
class B:public A{
    int b;
    public:
    B(int a_):A(a_),b(a_){cout<<"ctor of B is called"<<endl;}
    void print(int a)
    {
        cout<<"this is inside B"<<endl;

    }
    void show()
    {
        cout<<"this is inside B"<<endl;//base class overridden cannot invoke A::show()
    }

}
int main()
{
    A a(4);
    B b(6);
    a.show();//call A::show()
    a.print();//call A::print()
    b.print()//do not bind to A::print()
}
