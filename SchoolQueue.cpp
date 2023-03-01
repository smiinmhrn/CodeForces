#include <iostream>
using namespace std;
int main(){
    int n , t ;
    cin >> n >> t ;
    char q[100] ;
    cin >> q ;

    

    for ( int i = 0 ; i < t ; i++){
        for (int j = 0 ; j < n ; j++ ){
            if ( q[j] == 'B' && q[j+1] == 'G'){
                
                q[j] = 'G';
                q[j+1] = 'B';
                j++;
            }
        }
    }

    cout << q ;

}