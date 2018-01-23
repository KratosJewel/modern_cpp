#include <iostream>
#include <vector>

namespace Auto
{
    void Test()
    {
        auto at = 8; //at = int

        std::vector<int> vec_at;

        auto begin = vec_at.cbegin(); //begin = const_iterator
        auto end = vec_at.cend(); //end = const_iterator
        begin = std::cbegin(vec_at); //= vec.cbeing();
        end = std::cend(vec_at); //= vec.cend();
    }
}