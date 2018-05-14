#include <iostream>
#include <string>
#include <algorithm>
#include "BWT.hpp"
#include "suffix.hpp"
int main()
{
    std::string x = "banana";
    std::vector<BWT::BWTLF> v;
    v = BWT::bwt(x);
    BWT::print(v);
}
