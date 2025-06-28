#include <iostream>
using namespace std;
int main()
{
    string name="falfhaofjfrfln";
    int row,col;
    for(row=0;row<=name.length();row++){
        for(col=1;col<=3;col++){
            cout<<name.substr(0,3)<<" ";
        }
    }
}