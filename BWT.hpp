#ifndef BWT_HPP
#define BWT_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <stack>
#include "suffix.hpp"
using namespace std;
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
    std::vector<SA::suffix> m;
    std::vector<int> suffarray;
    m = SA::getsuffixes(text);
    suffarray = SA::suffixarray(m);
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

std::vector<char> last_column(std::string text)
{
    std::vector<BWTLF> v = bwt(text);
    std::vector<char> z;
    for (int i = 0; i < v.size(); i++)
    {
        z.push_back(v[i].x);
    }
    return z;
}

std::vector<BWTLF> firstcolumn(std::string text)
{
    std::vector<BWTLF> v;
    v = bwt(text);
    std::sort(v.begin(), v.end(), [](BWTLF &a, BWTLF &b) {
        return a.x < b.x;
    });

    return v;
}

std::vector<int> lasttofirst(std::vector<BWTLF> firstcolumn)

{
    int j;
    std::vector<int> LF(firstcolumn.size());
    for (int i = 0; i < firstcolumn.size(); i++)
    {
        j = firstcolumn[i].index;
        LF[j] = i;
    }
    return LF;
}

void printint(std::vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {

        std::cout << v[i] << std::endl;
    }
}

void printchar(std::vector<char> v)
{
    for (int i = 0; i < v.size(); i++)
    {

        std::cout << v[i] << std::endl;
    }
}

void print(std::vector<BWTLF> v)
{
    for (int i = 0; i < v.size(); i++)
    {

        std::cout << "the index is " << v[i].x << v[i].index << std::endl;
    }
}

int findpattern(std::vector<int> LF, std::vector<char> lastcolumn, std::stack<char> pattern)
{

    int top = 0;
    int bottom = lastcolumn.size() - 1;
    int topindex = -1;
    int bottomindex;

    while (top <= bottom && !pattern.empty())
    {
        std::cout << "entering while loop" << std::endl;

        char symbol = pattern.top();
        pattern.pop();

        for (int i = top; i <= bottom; i++)
        {

            if (symbol == lastcolumn[i])
            {
                if (topindex == -1)
                {
                    topindex = i;
                }

                bottomindex = i;
            }
        }
        std::cout << "topidx= " << topindex << std::endl;
        std::cout << "bottomidx= " << bottomindex << std::endl;

        top = LF[topindex];
        bottom = LF[bottomindex];
        topindex = -1;
    }
    return bottom - top + 1;
}

} // namespace BWT

#endif
