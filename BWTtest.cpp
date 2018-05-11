#include <iostream>
#include <string>
#include <algorithm>
#include "BWT.hpp"
#include "suffix.hpp"
int main()
{
    std::string x = "banana";
    std::vector<char> y;
    y = BWT::LAST_COLUMN(x);
   for(int i=0;i<y.size();i++)
   {
       std::cout<<y[i]<<std::endl;
   }
    }
