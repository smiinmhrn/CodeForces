#include <iostream>
using namespace std ;
int main(){
    int n ;
    cin >> n ;
    char stones[100];
    cin >> stones;
    int count = 0 ;
    for ( int i = 0 ; i < n ; i++ ){
        if ( stones[i] == stones[i+1]){
            count++ ;
        }
    }

    cout << count ;
}