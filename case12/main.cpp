#include <iostream>
#include <vector>
using namespace std;

#include <boost/type_index.hpp>

class Widget
{
public:
    string val;
};

std::vector<Widget> createVec()
{
    std::vector<Widget> vw;
    vw.emplace_back(Widget());
    vw.emplace_back(Widget());
    vw.emplace_back(Widget());
    return vw;
}


template <typename T>
void f(const T& param)
{
    using boost::typeindex::type_id_with_cvr;

    cout << "T = " << type_id_with_cvr<T>().pretty_name() << endl;
    cout << "param = " << type_id_with_cvr<decltype(param) >().pretty_name() << endl;
}

int main()
{
    const auto & vw = createVec();
    if (!vw.empty())
    {
        f(&vw[0]);
    }

    return 0;
}
