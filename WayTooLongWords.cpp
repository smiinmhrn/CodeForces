#include <iostream>
#include <string.h>
using namespace std ;
int main (){
    char word[101];
    char temp[101][101];
    
    int count = 0 ;
    int k ;
    int n ;
    cin >> n ;
    for ( int i = 0 ; i < n ; i++){
        
        cin >> word ;
        strcpy(temp[i] , word);
    
    }

    for ( int i = 0 ; i < n ; i++){

       

        count = strlen(temp[i]);
        
        if ( count > 10){
        
            k = count - 2 ;
            count = count - 1 ;

        
            
         cout << temp[i][0] << k << temp[i][count] << endl ;
            
        }else {
            cout << temp[i] << endl ;
            
        } 

        count = 0 ;
    }


}