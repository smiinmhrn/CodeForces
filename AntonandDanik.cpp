#include <iostream>
using namespace std;
int main(){
    char win[100001] ;
    int n ;
    cin >> n >> win ;

    int a = 0  , d = 0  ;
    for ( int i = 0 ; i < n ; i++ ){

        if (win[i] == 'A'){
            a++ ;
        }else{
            d++;
        }
    }

    if ( a > d ){
        cout <<  "Anton" ;
    }else if ( d > a ){
        cout <<  "Danik" ;
    }else{
        cout << "Friendship" ;
    }
}