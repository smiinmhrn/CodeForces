#include <iostream>
using namespace std;
int main(){
    int n ;
    int coins[100];
    cin >> n ;
    for ( int i = 0 ; i < n ; i++ ){
        cin >> coins[i] ;
    }

    int temp ;
    for( int i = 0 ; i < n ; i++ ){
        for ( int j = i+1 ; j < n ; j++){
        
            if ( coins[i] > coins[j] ){
                
                temp = coins[i] ;
                coins[i] = coins[j] ;
                coins[j] = temp ;
            }
        }
    }
    int sum = 0 ;
    int count = 1 ;
    int flag = 0 ;
    int temp2 = coins[n-1];
    //int j = 1 ;

    while(flag == 0){

        for ( int i = 0 ; i < (n-1) ; i++){

            sum = sum + coins[i];
            
        }
        
        if ( temp2 <= sum ){
                count++;
                 
                n--;
                temp2 = temp2 + coins[n-1];
                
                sum = 0 ;
                flag = 0 ;

        }else {
            flag = 1 ;
            }
    }

    cout << count ;
}