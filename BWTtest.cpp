

#include <iostream>
#include <string>
#include<stack>
#include <algorithm>
#include "BWT.hpp"
#include "suffix.hpp"
int main()
{
    std::string x = "panamabananas$";
    std::vector<char> lastcolumn;
    lastcolumn = BWT::last_column(x);
    std::vector<BWT::BWTLF> fircolumn;
    fircolumn = BWT::firstcolumn(x);
    std::vector<int> LF;
    LF = BWT::lasttofirst(fircolumn);

std::stack<char>pattern;

pattern.push('a');
pattern.push('n');
pattern.push('a');
int nofoccurence;

nofoccurence=BWT::findpattern(LF,lastcolumn,pattern);
std::cout<<"the pattern is found "<<nofoccurence<<" times"<<std::endl;
}