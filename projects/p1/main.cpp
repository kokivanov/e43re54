#include "../../lib/mt/mt.hpp"
#include <iostream>
#include <vector>
#include <array>

int foo(const int& x) { return x*2; }

int main(int argc, const char* argv[])
{
    std::vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8};
    std::cout << mt::min<int>(vec) << std::endl;
    std::cout << mt::sum(vec) << std::endl;
    std::cout << mt::sum_rule(vec, foo) << std::endl;

    std::array<int, 5> arr{1, 2, 3, 4, 5};
    std::cout << mt::max<int, 5>(arr) << std::endl;
    std::cout << mt::average(arr) << std::endl;

    return 0;
}