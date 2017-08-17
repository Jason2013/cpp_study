#include <iostream>
using namespace std;

struct A
{
    A():val(0){cout << "A()" << endl; val++;}
    ~A(){cout << "~A()" << endl;}
    void Func(){cout<<"A.Func(" << val << ")"<<endl;}

    int val;
};

A& GetA()
{
    cout << "GetA()" << endl;
    static A a;
    return a;
}

int main()
{
    cout << "main() begin" << endl;
    for (int i=0; i<5; i++)
    {
        GetA().Func();
    }
    cout << "main() end" << endl;

    return 0;
}
