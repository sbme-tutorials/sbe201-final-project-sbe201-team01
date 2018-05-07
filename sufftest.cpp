#include <iostream>
#include <string>
#include <algorithm>
#include "suff.hpp"

int main()
{

std::string x ="banana";
std::vector<suffarray::suffix>y;
y=suffarray::getsuffixes(x);
suffarray::printsuffixesvector(y);
std::vector<int>z=suffarray::suffixarray(y);
suffarray::printsuffixarray(z);

}