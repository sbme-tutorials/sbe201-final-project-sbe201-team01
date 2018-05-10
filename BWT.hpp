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
    int x;
    for (int i = 0; i < n; i++)
    {
        x=SuffixesArray[i];
        BWT_arr[i] = text[(x + n - 1) % n];
    }
    return BWT_arr;
}
}