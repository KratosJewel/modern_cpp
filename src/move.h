#include <iostream>
#include <vector>
#include <string>

namespace Move
{
    void Test()
    {
        auto &&a = 10;

        std::cout << a << std::endl;

        std::string str = "Hello";
        std::vector<std::string> vec;

        // 使用引用 push_back(const T&) 版本
        // 将带来复制 str 的成本
        vec.push_back(str);
        // vec.emplace_back(str); 更高效

        std::cout << str << std::endl;

        // 使用右值引用 push_back(T&&) 版本
        // 不复制字符串，而是将 str 的内容移动进 vector
        // 开销比较低，但也会导致 str 可能变为空。
        vec.push_back(std::move(str));
        // vec.emplace_back(str); 更高效

        std::cout << str << std::endl; //str 为空
        std::cout << vec[0] << " " << vec[1] << std::endl;
    }
}