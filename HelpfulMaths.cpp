#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int temp ;
    char math [100];
    int n ;
    
    
    cin >> math ;
    n = strlen(math);

    for( int i = 0 ; i < n ; i = i+2 ){
        for ( int j = i+2 ; j < n ; j = j + 2){
        
        if ( math[i] > math[j] ){
            
            temp = math[i] ;
            math[i] = math[j] ;
            math[j] = temp ;
        }
        }
    }

    cout << math ;
    
}




