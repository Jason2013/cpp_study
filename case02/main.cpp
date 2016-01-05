#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

class MyCls
{
public:
	//MyCls(const MyCls&) = delete;
	MyCls(const MyCls& rhs) {// = delete;
		cout << "MyCls(const MyCls& rhs)" << endl;
		val = rhs.val;
	}
	MyCls& operator=(const MyCls&) = delete;

	MyCls(int n) : val(n) { cout << "MyCls(" << n << ")" << endl; }
	MyCls(MyCls && rhs)
	{
		cout << "MyCls(MyCls && rhs)" << endl;
		val = rhs.val;
		rhs.val = 0;

	}
	MyCls & operator=(MyCls && rhs)
	{
		cout << "MyCls & operator=(MyCls && rhs)" << endl;
		clean();
		val = rhs.val;
		rhs.val = 0;
	}
	int val;
	void clean()
	{
		if (val) cout << "clean(" << val << ")" << endl;
	}
};

MyCls f(int n)
{
	MyCls cls(n);
	return cls;
}

int main()
{
	cout << "hello, world!" << endl;


	vector<MyCls> mycls;
	mycls.reserve(10);
	cout << mycls.capacity() << endl;
	mycls.push_back(MyCls(5));
	mycls.push_back(f(6));
	mycls.push_back(f(7));
	mycls.push_back(f(8));
	mycls.push_back(f(9));

	MyCls a = f(10);
	//mycls.push_back(std::move(a));
	mycls.push_back(a);

	cout << a.val << endl;

	//char buf[5];
	////strcpy(buf, "hello, world!");
	//getchar();
	//int * p = new int[3];
	return 0;
}
