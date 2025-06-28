#include<iostream>
using namespace std;
int main()
{
    /*
    i=1;
    while (i<=n)
    {
        if(n%i==0){
            cout<<i<<" ";
        }
        i++;
    }
    */
   /*
   i=1;
   while(i<=n){
       if(i%2==0){
           cout<<i<<" Odd ";
       }
       else{
           cout<<i<<" Even ";
       }
       i++;
   }
   */
    int n,i,sum;
    n=5;
    sum=0;
    i=1;
    // while(i<=n){
    //     sum=sum+i;
     
    //     i++;
    // }
    // cout<<sum;k
    do{
        sum=sum+i;
        i++;
    }while(i<=n);
    cout<<sum;

}