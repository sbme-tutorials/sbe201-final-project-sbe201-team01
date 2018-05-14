#ifndef BWT_HPP
#define BWT_HPP

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
    for (int i = 0; i < n; i++)
    {
        int z=suffarray[i];
        int x = (z - 1 + n) % n;

        char y = text[x];
        BWTLF burrow{ y ,i };
        BWT_Array.push_back(burrow);
    }
    return BWT_Array;
}

void print(std::vector<BWTLF> v)
{
    for (int i = 0; i < v.size(); i++)
    {
         
        std::cout << "the index is "<< v[i].x << v[i].index<<std::endl;
    }
}


}


#endif