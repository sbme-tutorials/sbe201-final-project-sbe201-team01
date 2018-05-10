#include <iostream>
#include <string>
#include <algorithm>
#include <stdlib.h>
#include "suffix.hpp"
<<<<<<< HEAD

std::vector<char> LAST_COLUMN(std::string text)
{
    int n = text.size();
    std::vector<char> BWT_arr;

    std::vector<int> SuffixesArray = SA::suffixarray(text);
=======
struct suffix
{
    int index;
    std::string suff;
};
std::vector<char> LAST_COLUMN(std::string text)
{
    int n = text.size();
    std::vector<char> BWT_arr(n) ;
    std::vector<suffix> SuffixesArray = SA::getsuffixes(text);
>>>>>>> cfe9cd2c683b7dab17264afed69f65dfc39bb269
    for (int i = 0; i < n; i++)
    {
        BWT_arr[i] = text[(SuffixesArray[i] + n - 1) % n];
    }
    return BWT_arr;
}
