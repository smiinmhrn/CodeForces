#include <iostream>
using namespace std ;
int main(){

    char bit[4];
    int n ;
    int y = 0 ;

    cin >> n ;
    for ( int i =0 ; i<n ; i++ ){
        cin >> bit ;
        if ( bit[1] == '+'){
            y = y + 1;
        }else{
            y = y - 1 ;
        }
    }

    cout << y ;
}