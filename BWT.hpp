#include <iostream>
#include <string>
#include <algorithm>
#include <stdlib.h>
#include "suffix.hpp"
struct suffix
{
    int index;
    std::string suff;
};
std::vector<char> *LAST_COLUMN(std::string text)
{
    int n = text.size();
    std::vector<char> BWT_arr = (std::vector<char> *)malloc(text.size() * sizeof(char));
    std::vector<suffix> SuffixesArray = SA::getsuffixes(text);
    for (int i = 0; i < n; i++)
    {
        BWT_arr[i] = text[(SuffixesArray[i] +  n - 1) % n]
    }
    return BWT_arr ;
}
