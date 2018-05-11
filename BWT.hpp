#include <iostream>
#include <string>
#include <algorithm>
#include <stdlib.h>
#include "suffix.hpp"
namespace BWT 
{
std::vector<char> LAST_COLUMN(std::string text)
{
    int n = text.size();
    std::vector<char> BWT_arr;

    std::vector<int> SuffixesArray = SA::suffixarray(text);
    for (int i = 0; i < n; i++)
    {
        BWT_arr[i] = text[(SuffixesArray[i] + n - 1) % n];
    }
    return BWT_arr;
}
}
