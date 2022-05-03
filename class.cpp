#include <iostream>
using namespace std;
class A
{
public:
    virtual void show()
    {
        cout << "A\n";
    }
};
class B : public A
{
public:
    void show()
    {
        cout << "B\n";
    }
};
int main()
{
    A a;
    a.show();
    B b;
    b.show();
    A *a1 = new B();
    a1->show();
    A *a2 = new A();
    a2->show();
    B *a4 = new B();
    a4->show();
}