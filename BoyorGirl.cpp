#include <iostream>
#include <string.h>
using namespace std;

int main(){
  char word[101] ;
  int n ;
  int temp ;
  int count = 0 ;
  cin >> word;

  n = strlen(word);

 for( int i = 0 ; i < n ; i++ ){
        for ( int j = i+1 ; j < n ; j++){
        
        if ( word[i] > word[j] ){
            
            temp = word[i] ;
            word[i] = word[j] ;
            word[j] = temp ;
        }
        }
    }

   
  
  for ( int i = 0 ; i < n ; i++){
    
    if ( word[i] != word[i+1]){
        count++ ;
    }
  }

  if (count % 2 == 0 ){
    cout << "CHAT WITH HER!";
  }else {
    cout << "IGNORE HIM!";
  }
  
  
  
}