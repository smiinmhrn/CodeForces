#include <iostream>
using namespace std ;
int main (){

    int team[1000][3];
    int n ;
    int k = 0 ;
    int count = 0 ;
    cin >> n ;

    for ( int i = 0 ; i < n ; i++){
        for ( int j = 0 ; j < 3 ; j++){
            cin >> team[i][j] ;
            
            if ( team[i][j] == 1 ){
                count++ ;
            }

        }

        if ( count > 1){
            k++ ;
        }

        count = 0 ;
    }

    cout << k ;

}