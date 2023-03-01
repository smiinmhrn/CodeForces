#include <iostream>
using namespace std;
int main(){
    int mat[5][5];
    int x , y ;
    int k ;
    int count = 0 ;

    for ( int i = 0 ; i < 5 ; i++){
        for ( int j = 0 ; j < 5 ; j++ ){
            cin >> mat[i][j] ;
            if ( mat[i][j] == 1 ){
                x = i ;
                y = j ;
            }
        }
    }


    if ( x < 2 ){
        
        k = 2 - x ;
        count = count + k ;
        
    } else if ( x > 2){
       
        k = x - 2 ;
        count = count + k ; 
        
    }

    k = 0 ;

    if ( y < 2 ){

        k = 2 - y ;
        count = count + k ;
        

    } else if ( y > 2){
        k = y - 2 ;
        count = count + k ; 
        
    }

    cout << count ;

}


    