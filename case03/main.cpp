#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

class A
{
public:
	A() { cout << "A()" << endl; }
	virtual ~A() { cout << "~A()" << endl; }
};

class B : public A
{
public:
	B() { cout << "B()" << endl; }
	/*virtual*/ ~B() { cout << "~B()" << endl; }
};

class A2
{
public:
	A2() { cout << "A2()" << endl; }
	/*virtual*/ ~A2() { cout << "~A2()" << endl; }
};

class B2 : public A2
{
public:
	B2() { cout << "B2()" << endl; }
	/*virtual*/ ~B2() { cout << "~B2()" << endl; }
};


int main()
{
	cout << "hello, world!" << endl;

	A * a = new B;
	delete a;
	A2 * a2 = new B2;
	delete a2;
	return 0;
}
