#include "src_a.hpp"
#include "lib_a.hpp"

#include <cstdint>

namespace smpl {

uint32_t src_a_func01(uint32_t val)
{
    return lib_a_f01(val);
}

uint32_t SRC_A_d1::probe()
{
    return src_a_func01(1);
}

}
