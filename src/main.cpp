#include <iostream>
#include "using.h"
#include "constexpr.h"
#include "auto.h"
#include "deduction_guide.h"
#include "initialize_list.h"
#include "coding.h"
#include "for.h"
#include "lambda.h"
#include "emplace.h"
#include "bind.h"
#include "string_view.h"
#include "tuple.h"
#include "for_each.h"
#include "move.h"
#include "atomic.h"
#include "file_system.h"
#include "random.h"
#include "smart_ptr.h"

int main()
{
    //使用 using 代替 typedef
    Using::Test();

    //使用 constexpr 限定编译期常量
    Constexpr::Test();

    //使用 auto 推导类型
    Auto::Test();

    //使用 deduction guide
    DeductionGuide::Test();

    //使用初始化列表
    InitializeList::Test();

    //使用新增标准库函数操作字符编码相关，使用R字面量
    Coding::Test();

    //使用 auto 和 deduction guide 遍历数组或容器
    For::Test();

    //使用 lamdba
    Lambda::Test();

    //使用 emplace 代替 push_
    Emplace::Test();

    //使用 bind，突破参数限制
    Bind::Test();

    //使用 string_view 代替 const char, const string
    StringView::Test();

    //使用 tuple 构造和解包
    Tuple::Test();

    //使用 for_each 对容器的每个项进行操作
    ForEach::Test();

    //使用 std::move 和 && 右值
    Move::Test();

    //使用 atomic 进行线程原子操作，不需要互斥量来保护变量
    Atomic::Test();

    //使用 filesystem 操作路径，文件，目录等
    FileSystem::Test();

    //使用新标准库生成随机数
    Random::Test();

    //使用智能指针代替new malloc
    SmartPtr::Test();

    return 0;
}