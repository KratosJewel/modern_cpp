#include <iostream>

namespace Tuple
{
    struct Foo
    {
        int d;
        int e;
    };

    void Test()
    {
        auto tp = std::make_tuple(1, 2.5, 'c');

        auto[a, b, c] = tp;

        Foo foo{1,2};

        auto& [d,e] = foo;

        //忽略前两个值
        char f;
        std::tie(std::ignore,std::ignore, f) = tp;
    }
}