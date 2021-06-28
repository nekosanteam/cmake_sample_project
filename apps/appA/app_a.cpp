#include "src_a.hpp"
#include "lib_a.hpp"

#include <cstdint>
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
    std::cout << smpl::src_a_func01(2) << std::endl;
    std::cout << smpl::lib_a_f01(1) << std::endl;

    smpl::SRC_A_d1 d1;
    smpl::func_A(d1);

    return 0;
}
