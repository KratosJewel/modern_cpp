#include <iostream>
#include <random>

namespace Random
{
    void Test()
    {
        //生成浮点随机数
        std::uniform_real_distribution<double> d_u(0, 1);
        std::default_random_engine d_e(std::random_device{}());

        for (int i = 0; i < 5; ++i)
        {
            std::cout << d_u(d_e) << " ";
        }

        std::cout << std::endl;

        //生成无符号整型随机数
        std::uniform_int_distribution<unsigned> i_u(0, 10);
        std::default_random_engine i_e(std::random_device{}());

        for (int i = 0; i < 5; ++i)
        {
            std::cout << i_u(i_e) << " ";
        }

        std::cout << std::endl;
    }
}