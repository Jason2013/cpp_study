#include <iostream>
#include <chrono>
#include <map>
#include <unordered_map>

using namespace std;
using namespace std::chrono;

int main()
{

    const uint32_t size = 10000000;
    map<uint32_t, uint32_t> map1;
    steady_clock::time_point t1 = steady_clock::now();
    for (uint32_t i=0; i<size; i++, i++)
    {
        map1[i] = i;
    }
    for (uint32_t i=1; i<size; i++, i++)
    {
        map1[i] = i;
    }
    steady_clock::time_point t2 = steady_clock::now();
    duration<double> time_span = duration_cast<duration<double>>(t2-t1);
    cout << time_span.count() << endl;

    unordered_map<uint32_t, uint32_t> map2(size * 1.2f);
    t1 = steady_clock::now();
    for (uint32_t i=0; i<size; i++, i++)
    {
        map2[i] = i;
    }
    for (uint32_t i=1; i<size; i++, i++)
    {
        map2[i] = i;
    }
    t2 = steady_clock::now();
    time_span = duration_cast<duration<double>>(t2-t1);
    cout << time_span.count() << endl;

    return 0;
}
