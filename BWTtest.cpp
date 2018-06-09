

#include <iostream>
#include <string>
#include <algorithm>
#include "BWT.hpp"
#include "suffix.hpp"
int main()
{
    std::string x = "banana$";
    std::vector<BWT::BWTLF> z,y;

    z = BWT::bwt(x);
y=BWT::firstcolumn(x);
std::vector<int>LF;
LF=BWT::lasttofirst(y);
    BWT::print(y);
    BWT::printint(LF);
}

