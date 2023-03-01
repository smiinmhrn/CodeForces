#include <iostream>
using namespace std;
int main(){
    int n ;
    cin >> n ;
    int q[100];
    int x = 1 ;
    int count = 0 ;

    for ( int i = 0 ; i < n ; i++){
        cin >> q[i] ;
    }

    for (int i = 0 ; i < n ; i++){

        if ( q[i] == 1 ){
            cout << "HARD";
            count++;
            break;
        }
    }

    if (count == 0 ){
        cout << "EASY" ;
    }
}