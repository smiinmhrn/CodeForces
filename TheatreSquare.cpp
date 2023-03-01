#include <iostream>
using namespace std;
int main(){
    long long int m , n , a , x , z , b ;
    cin >> m >> n >> a;

    b =  a ;

    if ( n % a == 0){
        a = n / a ;
    } else if (n > a){

        x = n / a ;
        a = x + 1 ;
    } else {
        a = 1 ;
    }

   

    

    if ( m % b == 0){
        b = m / b ;
    }else if (m > b){

        z = m / b ;
       
        b = z + 1 ;
    } else {
        b = 1 ;
    }

    

    cout << b*a ;
}