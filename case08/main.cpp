#include <iostream>
using namespace std;

class B;

class A
{
public:
    void show(const B* p);
    int val;
};

class B
{
public:
    void show(const A* p)
    {
        cout << "B.show(" << p->val << ")" << endl;
    }
    int val;
};


void A::show(const B* p)
{
    cout << "A.show(" << p->val << ")" << endl;
}

int main()
{
    A a;
    a.val = 100;
    B b;
    b.val = 200;

    a.show(&b);
    b.show(&a);

    return 0;
}
