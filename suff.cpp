#include <iostream>
#include <string>
#include <algorithm>
struct suffix
{
    int index;
    std::string suff;
};

std::vector<suffix> getsuffixes(std::string pattern)
{
    std::vector<suffix> v;
    for (int i = 0; i < pattern.size(); i++)
    {
        std::string str = pattern.c_str() + i ;
        suffix suf{ i , str };
        v.push_back( suf );
    }

    std::sort( v.begin() , v.end() , []( suffix &a , suffix &b ){
        return a.suff < b.suff ;
    });

    return v;


}

std::vector<int> suffixarray (std::vector<suffix>s)
{
    std::vector<int>v;
    for (int i=0;i<s.size();i++)
    { 
        int index =s[i].index;
        v.push_back(index);
    }
    return v;
}

void printsuffixarray (std::vector<int>x)
{
    for (int element : x )

    std::cout << element << std::endl;

}

void printsuffixesvector(std::vector<suffix> x)
{
    for (int i = 0; i < x.size(); i++)
    {
         
        std::cout << "the index is "<< x[i].index << "th"<<" suffix :"<<x[i].suff << std::endl;
    }
}


int main()
{

std::string x ="banana";
std::vector<suffix>y;
y=getsuffixes(x);
printsuffixesvector(y);
std::vector<int>z=suffixarray(y);
printsuffixarray(z);

}