#include <iostream>
#include <string.h>

using namespace std;

int main (){
    char word [101];
    char word2[101] ;

    cin >> word >> word2 ;
    //cin >> word ;
    int n ;
    char temp[101] ;
    n = strlen(word);

    for (int i=0; i<n/2; i++){
        temp[i]= word[i];
        word[i]=word[n-1-i];
        word[n-1-i]=temp[i];
    }

    int a  ;

    /*for ( int i = 0 ; i < n ; i++ ){

        if (temp[i] == word2[i]){
            a++;
        }
    }*/
    a = strcmp(word , word2) ;
    //cout << a ;

    if ( a == 0 ){

        cout << "YES";
    }else{
        cout <<"NO" ;
    }


}
