#include <iostream>
#include <string.h>
using namespace std ;
int main (){
    char ball[101];

    cin >> ball ;
    int z = 0 ;
    int n ;
    int flag = 0 ;
    n = strlen(ball);
    
    for ( int i = 0 ; i < n ; i++ ){

        if ( ball[i] == ball[i+1] ){
            z++;

            if ( z >= 6){
                flag = 1 ;
            }

        }else{
            z = 0 ;
        }
    }

    if ( flag == 1 ){
        cout << "YES";
    }else {
        cout << "NO";
    }

}


