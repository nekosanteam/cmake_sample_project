#include "src_a.hpp"
#include <iostream>

namespace smpl {

void func_A(SRC_A& src_a);

void func_A(SRC_A& src_a)
{
    std::cout << "func: " << src_a.probe() << std::endl;
}

}

int main(void)
{
    smpl::SRC_A_d1 d1;
    
    std::cout << "hello,world" << std::endl;
    smpl::func_A(d1);

    return 0;
}
