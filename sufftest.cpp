#include <iostream>
#include <string>
#include <algorithm>
#include "suffix.hpp"

int main()
{

std::string x ="banana$";
std::vector<SA::suffix>y;
y=SA::getsuffixes(x);
SA::printsuffixesvector(y);
std::vector<int>z=SA::suffixarray(x);
SA::printsuffixarray(z);

}
