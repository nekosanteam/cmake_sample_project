#ifndef SRC_A_HPP_
#define SRC_A_HPP_

#include <cstdint>

namespace smpl {

class SRC_A {
public:
    SRC_A() {}
    virtual ~SRC_A() {}

    virtual uint32_t probe() = 0;
};

class SRC_A_d1 : public SRC_A {
public:
    SRC_A_d1() {}
    ~SRC_A_d1() {};

    uint32_t probe() override;
};

uint32_t src_a_func01(uint32_t val);

}

#endif /* SRC_A_HPP_ */
