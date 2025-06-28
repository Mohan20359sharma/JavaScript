#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter a number: ";
    cin>>n;
    for(i=2;i<n;i++){
        if(n<2){
            cout<<"Not Prime";
            return 0 ;
        }
        else if (n%i==0){
            cout<<"This is not Prime number"<<endl;
            return 0;
        }
        else if(n%n==0){
            cout<<"This is  a Prime number."<<endl;
            return 0;
        }
    }
}