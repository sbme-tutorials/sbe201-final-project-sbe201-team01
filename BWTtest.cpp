#include <iostream>
#include <string>
#include <algorithm>
#include "BWT.hpp"
#include "suffix.hpp"
int main()
{
    std::string x = "GCGTGCCTGGTCA$";
    std::vector<BWT::BWTLF> v, z;

    z = BWT::bwt(x);
    v = BWT::firstcolumn(x);
    BWT::print(v);
    BWT::print(z);
}
