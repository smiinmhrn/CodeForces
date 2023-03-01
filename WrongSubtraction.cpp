#include <iostream>
using namespace std;
int main(){
    long int n ;
    int k ;
    cin >> n >> k ;
    int count = 0 ;


    while ( count < k ){

        if ( n / 10 == 0 ){
            n = n - 1 ; 
            count++ ;
        }else{
            break;
        }
    }
    
    while ( count < k ){


        if ( n % 10 == 0 ){
            n = n / 10 ;
            count++ ;
        }

        if ( count == k ){
            break;
        }

        if ( n % 10 != 0  ){
            n = n - 1 ;
            count++ ;
        }
    }

    cout << n ;

}
