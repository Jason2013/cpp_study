#include <iostream>
#include <map>
#include <vector>
using namespace std;

struct A
{
    A() { cout << "A()" << endl; }
    int x, y;
    vector<int> ivec;
};

int main()
{
    map<int, int> imap;

    for (int i = 0; i < 5; i++)
    {
        imap[i] = i * 10;
    }

    for (const auto& item : imap)
    {
        cout << "imap[" << item.first << "]=" << item.second << endl;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << "imap[" << i << "]=" << imap[i] << endl;
    }

    map<int, A> amap;
    for (int i = 0; i < 10; i++)
    {
        cout << "imap[" << i << "]=" << amap[i].x << endl;
    }
    cout << amap.size() << endl;

    return 0;
}
