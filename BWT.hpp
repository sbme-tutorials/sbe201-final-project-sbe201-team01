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
<<<<<<< HEAD
    int x;
    int y;
    int n=SuffixesArray.size();
    for (int i = 0; i < SuffixesArray.size(); i++)
    {
        x=SuffixesArray[i];
        y=(x+n-1)%n;
        BWT_arr[i] = text[y];
=======
    for (int i = 0; i < n; i++)
    {
        BWT_arr[i] = text[(SuffixesArray[i] + n - 1) % n];
>>>>>>> 99c772af6bd65a2fac85bc4431b7546d09c9e158
    }
    return BWT_arr;
}
}
