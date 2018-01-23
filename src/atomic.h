#include <iostream>
#include <atomic>

namespace Atomic
{
    std::atomic_bool exit = true;

    void Test()
    {
        exit = false;
    }

    void Thd()
    {
        while (exit);
    }
}