#include <iostream>
using namespace std;

int main(){

int arry[50];
int n , k , count=0 ;
cin >> n >> k ;

    for ( int i = 0 ; i < n ; i++ ){
        cin >> arry[i];

    }
    
    for ( int i = 0 ; i < n ; i++ ){

        if ( arry[i]>= arry[ k - 1] && arry [i]>0){
            count = count + 1;
        }
    }
        cout << count;


}