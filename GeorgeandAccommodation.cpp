#include <iostream>
using namespace std;
int main(){
    int n ;
    cin >> n ;
    int a , b ;
    int c ;
    int count = 0 ;
    for (int i = 1 ; i <=n ; i++){
        cin >> a >> b ;
        c = b - a ;
        if ( c >=2 ){
            count++;
        }
        
    }

    cout << count ;
}