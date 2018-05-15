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
        int z = suffarray[i];
        int x = (z - 1 + n) % n;

        char y = text[x];
        BWTLF burrow{y, i};
        BWT_Array.push_back(burrow);
    }
    return BWT_Array;
}

void print(std::vector<BWTLF> v)
{
    for (int i = 0; i < v.size(); i++)
    {

        std::cout << "the index is " << v[i].x << v[i].index << std::endl;
    }
}

std::vector<BWTLF> firstcolumn(std::string text)
{
    std::vector<BWTLF> v;
    v = bwt(text);
    std::sort(v.begin(), v.end(), [](BWTLF &a, BWTLF &b) {
        return a.x < b.x;
    });
    //lmfrod 3wza lama a3ml sort hena l bw_array en ykon 3ndy el first column belorginal index bta3o
    //lakn ana bytl3ly el index beltrteb 3ady lakn elfirstcolumn sorted sa7 wmsh 3rfa a lsbb

    return v;
}
std::vector<int> lasttofirst(std::vector<BWTLF> firstcolumn)

{
    int j;
    std::vector<int> LF;
    for (int i = 0; i < firstcolumn.size(); i++)
    {
        j = firstcolumn[i].index;
        LF[j] = i;
    }
}
int bwt_mattching(std::vector<BWTLF> last_column, std::vector<BWTLF> first_column, std::vector<int> lasttofirst, std::string text)
{
    int top = 0;
    int bottom = last_column[text.size()] - 1  ;
    while top < bottom
    {
        symbol = text[i];
        
    }
}
} // namespace BWT

#endif
