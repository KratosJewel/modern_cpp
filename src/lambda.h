#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

namespace Lambda
{
    void Test()
    {
        std::vector<std::string> vec{"asd", "bef"};

        //自定义排序，无需在定义一个函数，直接使用lambda
        std::sort(vec.begin(), vec.end(),
                  [](const std::string &s1, const std::string &s2) -> bool
                  {
                      return s1.size() < s2.size();
                  });

        //传入捕获参数，mutable让值传递变量在内部可修改，对外部无效
        int vnum = 85;
        std::sort(vec.begin(), vec.end(),
                  [vnum](const std::string &s1, const std::string &s2) mutable -> bool
                  {
                      return s1.size() < s2.size() < (++vnum);
                  });

        //传入捕获参数，捕获参数可以是引用
        std::sort(vec.begin(), vec.end(),
                  [&vnum](const std::string &s1, const std::string &s2) -> bool
                  {
                      return s1.size() < s2.size() < (++vnum);
                  });

        //传入捕获参数，= 捕获当前上下文所有变量，这些变量是按值传递
        std::sort(vec.begin(), vec.end(),
                  [=](const std::string &s1, const std::string &s2) -> bool
                  {
                      return s1.size() < s2.size() < vnum;
                  });

        //传入捕获参数，& 捕获当前上下文所有变量，这些变量是引用传递
        std::sort(vec.begin(), vec.end(),
                  [&](const std::string &s1, const std::string &s2) -> bool
                  {
                      return s1.size() < s2.size() < (++vnum);
                  });

        //使用auto保存lambda变量
        auto com = [&](const std::string &s1, const std::string &s2) -> bool
        {
            return s1.size() < s2.size() < (++vnum);
        };
        com("a", "b");

        //创建lambda后立即调用
        [&](const std::string &s1, const std::string &s2) -> bool
        {
            return s1.size() < s2.size() < (++vnum);
        }("a", "b");

        std::cout << vnum << std::endl;
    }
}