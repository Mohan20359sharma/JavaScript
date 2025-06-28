#include <iostream>
using namespace std;
int main()
{
    int n,i,prev=1,last=0,current;
    cout<<"Enter are number: ";
    cin>>n;
    for(i=0;i<n;i++){
        cout<<last<<endl;
        current=prev+last;
        last=prev;
        prev=current;
    }
}