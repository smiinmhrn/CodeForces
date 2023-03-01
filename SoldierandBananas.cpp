#include <iostream>
using namespace std;
int main(){
    long int k , n , w , d , f ;
    cin >> k >> n >> w ;
    int sum = 0 ;

    f = k ;

    for( int i = 1 ; i <= w ; i++){
        sum = sum + k ;
        k = k + f  ;

    }

    if ( n >= sum ){
        cout << "0" ;
    }else{
        d = sum - n ;
        cout << d ;
    }
}