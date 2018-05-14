#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include "suffix.hpp"
namespace BWT

{
struct BWTLF
{
    char x;
    int index;
};

std::vector<BWTLF> bwt(std::string text)
{
    int n = text.size();
    std::vector<BWTLF> BWT_Array;
    std::vector<int> suffarray;
    suffarray = SA::suffixarray(text);
    for (int i = 0; i < text.size; i++)
    {
        int x = (SA::suffixarray[i] - 1 + n) % n;

        char y = text[x];
        BWTLF burrow{ y ,i };
        BWT_Array.push_back(burrow);
    }
    return BWT_Array;
}
}
