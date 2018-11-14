#include <iostream>
using namespace std;

template <typename ... Args> void func(void(*f)(Args ...), Args ... args)
{
    (*f)(args ...);
}

void f1()
{
    cout << "f1()" << endl;
}

void f3(int n)
{
    cout << "f3_1p(" << n << ")" << endl;
}

void f3(int a, int b)
{
    cout << "f3_2p(" << a << ", " << b << ")" << endl;
}


void f3(int a, int b, int c)
{
    cout << "f3_3p(" << a << ", " << b << ", " << c << ")" << endl;
}

template <typename ... Args> void f3(int a, int b, int c, Args ... args)
{
    f3(a, b, c);
    f3(args ...);
}

int main()
{
    cout << "hello, world!" << endl;

    func(f1);
    func(f3, 10);
    func(f3, 20, 30);
    func(f3, 20, 30, 40);
    func(f3, 20, 30, 40, 50);
    func(f3, 20, 30, 40, 50, 60);
    func(f3, 20, 30, 40, 50, 60, 70);

    return 0;
}
