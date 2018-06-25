#include <iostream>
#include <vector>
#include <functional>

namespace Bind
{
    bool check(const int &num, const int &cod)
    {
        return num > cod;
    }

    class TestBind
    {
    public:
        TestBind():num_(5){}

        void Test(int num)
        {
            std::cout << num_ + num << std::endl;
        }

    private:
        int num_;
    };

    void Test()
    {
        std::vector vec{1, 2, 3, 5};

        //find_if只接受 接受一个参数的函数，利用bind可以突破这个限制
        auto cod = 4;
        auto num = std::find_if(vec.cbegin(), vec.cend(), std::bind(check,std::placeholders::_1,cod));

        //绑定引用参数使用std::ref
        auto ref_num = std::find_if(vec.cbegin(), vec.cend(), std::bind(check,std::placeholders::_1,std::ref(cod)));

        //绑定类成员函数
        TestBind tt;
        auto test_bind = std::bind(&TestBind::Test,tt,50);

        test_bind();

        std::cout << (*num) << std::endl;
    }
}