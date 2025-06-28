#include <iostream>
using namespace std;
int main()
{
    // for (row=1; row<=5; row++){
    //     for(col=1;col<=5;col++){
    //         cout<<row<<" ";
    //     }
    //     cout<<endl;
    // }
    // for (row=1;row<=5;row++){
    //     for(col=5;col>=1;col--){
    //         cout<<col<<" ";
    //     }
    //     cout<<endl;
    // }
    // for(row=1;row<=5;row++){
    //     for(col=1;col<=5;col++){
    //         cout<<col*col<<" ";
    //     }
    //     cout<<endl;
    // }
    // for(row=1;row<=5;row++){
        
    //     for(char col='a';col<='e';col++){
    //         cout<<col<<" ";
    //     }
    //     cout<<endl;
    // }
    int row,col,count=10;
    for(row=1;row<=5;row++){
        for(col=1;col<=5;col++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}