#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main()
{

    steady_clock::time_point t1 = steady_clock::now();
    for (uint32_t i=0; i<1000; i++)
    {
        cout << '*';
    }
    cout << endl;
    steady_clock::time_point t2 = steady_clock::now();
    duration<double> time_span = duration_cast<duration<double>>(t2-t1);
    cout << time_span.count() << endl;

    t1 = steady_clock::now();
    for (uint32_t i=0; i<2000; i++)
    {
        cout << '*';
    }
    cout << endl;
    t2 = steady_clock::now();
    time_span = duration_cast<duration<double>>(t2-t1);
    cout << time_span.count() << endl;

    return 0;
}
