#include <iostream>
#include <memory>

namespace SmartPtr
{
    void Test()
    {
        // 多个 shared_ptr 通过指针来保留对象的共享所有权
        auto sp = std::make_shared<int>(8);

        // unique_ptr 通过一个指针来拥有和管理另一个对象
        auto up = std::make_unique<int>(18);

        std::cout << *sp << std::endl;
        std::cout << *up << std::endl;
    }
}