#include <iostream>
using namespace std ;
int main(){
    long long int n ;
    cin >> n ;
    long long int d ;
    long long int count = 0 ;
    while( n > 0){

        d = n % 10 ;
        n = n / 10 ;
        if ( d == 7 || d == 4 ){
            count++;
        }
    }

    if ( count == 4 || count == 7 || count == 47 || count == 74 ){
        cout << "YES" ;

    }else {
        cout << "NO" ;
    }

}