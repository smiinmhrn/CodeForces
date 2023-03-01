#include <string.h>
#include <iostream>
using namespace std ;
int main(){
    char worrd[101];
    cin >> worrd ;
    int c = 0 ;
    int s = 0 ;
    int n ;
    n = strlen(worrd);
    
    for ( int i = 0 ; i < n ; i++ ){
        if (worrd[i] >= 'A' && worrd[i] <= 'Z'){
            c++;
        }else{
            s++;
        }
    }

    for ( int i = 0 ; i < n ; i++){

        if ( s == c ){

            if (worrd[i] >= 'A' && worrd[i] <= 'Z'){
                worrd[i] = worrd[i] + 32 ;
            }
        }else if ( c > s){

            if (worrd[i] >= 'a' && worrd[i] <= 'z'){
                worrd[i] = worrd[i] - 32 ;
            }
        }else{
            if (worrd[i] >= 'A' && worrd[i] <= 'Z'){
                worrd[i] = worrd[i] + 32 ;
            }
        }
    }

    cout << worrd;

    

}