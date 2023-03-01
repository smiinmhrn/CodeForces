// #include <iostream>
// using namespace std;
// int main(){
//     int n ;
//     cin >> n ;
//     int a = 0 ;
//     int b = 0 ;
//     int c = 0 ;
//     int d = 0 ;
//     int e = 0 ;
//     int f = 0 ;
//     int g = 0 ;
//     int h = 0 ;
    

//     while(n>0){

//         if ( n % 4 == 0 ){
//             n = n / 4 ;
//             a++ ;
//         }

//         if ( n % 7 == 0){
//             n = n / 7 ;
//             b++ ;
//         }

//         if ( n % 47 == 0){
//             n = n / 47 ;
//             c++ ;
//         }

//         if ( n % 74 == 0){
//             n = n / 74 ;
//             d++ ;
//         }

//         if ( n % 447 == 0){
//             n = n / 447 ;
//             e++ ;
//         }

//         if ( n % 474 == 0){
//             n = n / 474 ;
//             f++ ;
//         }

//         if ( n % 747 == 0){
//             n = n / 747 ;
//             g++ ;
//         }

//         if ( n % 474 == 0){
//             n = n / 474 ;
//             h++ ;
//         }
//     }

//     if()
// }
#include <iostream>
using namespace std;

int main(){

    int n , count=0;
    int arry[20]{4,7,44,77,47,77,444,474,477,447,777,744,747,774};
    cin >> n;
    
    for ( int i = 0 ; i < 14 ; i++){

        if( n % arry[i]==0){
            count = count + 1;
        }
      

    }


       if (count>=1){
            cout << "YES";
         } else { cout << "NO";}

}