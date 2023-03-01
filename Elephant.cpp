#include <iostream>
using namespace std;
int main(){
long int x  , n , m , y , r , q , k  , v , p , w , d ;
long int count = 0 ;

cin >> n ;
while(n>0){

    x = n / 5 ;
    if(x>0){
        count = count + x ;
        m = x*5 ;
        n = n-m ;
    }
    y = n / 4 ;
      if(y>0){
        count = count + y ;
        r = y * 4 ;
        n = n-r ;
    }
    q = n / 3 ;
      if(q>0){
        count = count + q ;
        k = q * 3 ;
        n = n-k ;
    }
    p = n / 2;
      if(p>0){
        count = count + p ;
        v = p*2 ;
        n = n-v ;
    }

    d = n / 1 ;
      if(d>0){
        count = count + d ;
        w = d * 1 ;
        n = n-w ;
    }
}
  cout << count ;
}