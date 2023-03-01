#include <iostream>
using namespace std;
int main(){
    int f , h ;
    int fh[2000];
    int count = 0 ;
    int num=0 ;

    cin >> f >> h ;
    for ( int i = 0 ; i < f ; i++ ){
        cin >> fh[i] ;
    }

    for ( int i = 0 ; i < f ; i++ ){
        if ( fh[i] > h ){
            count = count + 2 ;
            num++ ;
        }
    }

    num = count / 2 ;
    f = f - num ;

    cout << count + f ;


}