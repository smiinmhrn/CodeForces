#include <iostream>
using namespace std ;
int yearcheak(int y) ;
int main(){
    int y ;
    int year[5] ;
    int ans;
    cin >> y ;

    //int  a = y ;
    y = y + 1 ;

    ans = yearcheak(y) ;

    // if (ans == 1 ){
    //     cout << y ;
    // }

    while (ans == 0){
        y = y + 1 ;
        ans = yearcheak(y);
    }

    cout << y ;



    // for (int i = 0 ; i < 4 ; i++ ){
    //     if ( year[i] == year[i+1]){
    //         b = b + 1 ;
    //     }
    // }




}

int yearcheak(int y){

    int year2[6];
    int i = 0 ;
    int temp ;
    int b = y ;
   

    while(y>0){
        int r = y % 10 ;
        y = y / 10 ;

        year2[i] = r ;
        i++;
 

    }

    for( int i = 0 ; i < 4 ; i++ ){
        for ( int j = i+1 ; j < 4 ; j++){
        
        if ( year2[i] > year2[j] ){
            
            temp = year2[i] ;
            year2[i] = year2[j] ;
            year2[j] = temp ;
        }
        }
    }
    int flag = 0 ;
    for (int i = 0 ; i < 4 ; i++ ){
        if ( year2[i] == year2[i+1]){
            flag = 0 ;
            break;
        }else{
            flag = 1 ;
        }
    }

    return flag ;

}