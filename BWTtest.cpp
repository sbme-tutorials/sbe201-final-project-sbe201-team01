#include <iostream>
#include <string>
#include <algorithm>
#include "b.hpp"
#include "suffix.hpp"
int main()
{
    std::string x = "banana$";
    std::vector<BWT::BWTLF> v;
    v = BWT:: firstcolumn(x);
    BWT::print(v);
}
