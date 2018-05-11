#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include "suffix.hpp"
namespace BWT
{
std::vector<char>LAST_COLUMN(std::string text)
{
    
    std::vector<char> BWT_arr;

    std::vector<int> SuffixesArray = SA::suffixarray(text);
    int x;
    int y;
    int n=SuffixesArray.size();
    for (int i = 0; i < SuffixesArray.size(); i++)
    {
        x=SuffixesArray[i];
        y=(x+n-1)%n;
        BWT_arr[i] = text[y];
    }
    return BWT_arr;
}
}