#include<iostream>
using namespace std;
int main()
{
    // for(row=1;row<=7;row++){
    //     int limit=(row<7) ? row:6;
    //     for(col=1;col<=limit;col++){
    //         cout<<col<<" ";
    //     }
    //     cout<<endl;
    // }

    /*
    A
    A B
    A B C
    A B C D
    A B C D E
    for(row=1;row<=5;row++){
        for(col=1;col<=row;col++){
            char alphabet='A'+col-1;
            cout<<alphabet<<" ";
        }
        cout<<endl;
    }
    */
   /*
    10 
    10 11
    10 11 12
    10 11 12 13
    10 11 12 13 14 
    10 11 12 13 14 15     
    for(row=10;row<=15;row++){
        for(col=10;col<=row;col++){
            cout<<col<<" ";
        }
        cout<<endl;
    }
   */
  /*
    A B C D
    A B C
    A B
    A

    for ( row = 1; row <= 4;row++)
    {
        for(col=4;col>=row;col--){
            char cahr='D'-col+1;
            cout<<cahr<<" ";
        }
        cout<<endl;
}
  */

 /*
            1 
          2 2 
        3 3 3 
      4 4 4 4 
    5 5 5 5 5

    for(row=1;row<=n;row++){
        for(col=1;col<=n-row;col++){
            cout<<"  ";
        }
        for(col=1;col<=row;col++){
            cout<<row<<" ";
        }
        cout<<endl;
    }
 */
/*
        A 
      A B
    A B C
  A B C D
A B C D E


for(row=1;row<=n;row++){
    for(col=1;col<=n-row;col++){
        cout<<"  ";
    }
    for(char name='A';name<='A'+row-1;name++){
        cout<<name<<" ";
    }
    cout<<endl;
}
*/

/*
      1 
    2 1 
  3 2 1 
4 3 2 1


for(row=1;row<=n;row++){
    for(col=1;col<=n-row;col++){
        cout<<"  ";
    }
    for(col=row;col>=1;col--){
        cout<<col<<" ";
    }
    cout<<endl;
}
*/
/*
        * 
      * * *
    * * * * *
  * * * * * * * 
* * * * * * * * *


for(row=1;row<=n;row++){
    for(col=1;col<=n-row;col++){
        cout<<"  ";
    }
    for(col=1;col<=(2*row)-1;col++){
        cout<<"* ";
    }
    cout<<endl;
}
*/
/*
        1 
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1 
1 2 3 4 5 4 3 2 1

for(row=1;row<=n;row++){
    for(col=1;col<=n-row;col++){
        cout<<"  ";
    }
    for(col=1;col<=row;col++){
        cout<<col<<' ';
    }
    for(col=row-1;col>=1;col--){
        cout<<col<<" ";
    }
    cout<<endl;
}
*/
/*
* * * * * * * * * 
  * * * * * * *
    * * * * *
      * * *
        *



        for(row=n;row>=1;row--){
            for(col=1;col<=n-row;col++){
                cout<<"  ";
            }
            for(col=(2*row)-1;col>=1;col--){
                cout<<"*"<<" ";
            }
            cout<<endl;
        }

*/
/*
    * * * * * * * * 
    * * *     * * *
    * *         * *
    *             *
    *             *
    * *         * *
    * * *     * * *
    * * * * * * * *
    
    




    for(row=n;row>=1;row--){
    for(col=row;col>=1;col--){
        cout<<"* ";
        }
        for(col=1;col<=2*(n-row);col++){
            cout<<"  ";
        }
        for(col=row;col>=1;col--){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++){
            cout<<"* ";
        }
        for(col=2*(n-row);col>=1;col--){
            cout<<"  ";
        }
        for(col=row;col>=1;col--){
            cout<<"* ";
        }
        cout<<endl;
    }
*/

/*

    *                 * 
    * *             * * 
    * * *         * * * 
    * * * *     * * * * 
    * * * * * * * * * * 
    * * * *     * * * * 
    * * *         * * * 
    * *             * * 
    *                 *

    for(row=1;row<=n;row++){
    for(col=1;col<=row;col++){
        cout<<"* ";
    }
    for(col=1;col<=2*(n-row);col++){
        cout<<"  ";
    }
    for(col=1;col<=row;col++){
        cout<<"* ";
    }
    cout<<endl;
    }
    for(row=n-1;row>=1;row--){
    for(col=1;col<=row;col++){
        cout<<"* ";
    }
    for(col=2*(n-row);col>=1;col--){
        cout<<"  ";
    }
    for(col=1;col<=row;col++){
        cout<<"* ";
    }
    cout<<endl;
    }
*/
/*
   * 
  * *
 * * *
* * * *
 * * *
  * *
   *
   
   for(row=1;row<=n;row++){
    for(col=1;col<=n-row;col++){
        cout<<" ";
    }
    for(col=1;col<=row;col++){
        cout<<"* ";
    }
    cout<<endl;
   }
   for(row=n-1;row>=1;row--){
    for(col=1;col<=n-row;col++){
        cout<<" ";
    }
    for(col=1;col<=row;col++){
        cout<<"* ";
    }
    cout<<endl;
   }

*/

   int row,col,n;
   cout<<"Enter a number: ";
   cin>>n;
}