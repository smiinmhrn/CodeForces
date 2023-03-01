#include <iostream>
#include <string.h>
using namespace std;
int main(){
    char word[101] ;
    int n ;
    cin >> word ;

    n = strlen(word);

    for ( int i = 0 ; i < n ; i++ ){
        
        if ( word[i] > 'A' && word[i] <= 'Z'){
            if ( word[i] != 'a'&& word[i] != 'O'&& word[i] != 'o'&& word[i] != 'Y'&& word[i] != 'y'&& word[i] != 'E'&& word[i] != 'e'&& word[i] != 'U'&& word[i] != 'u'&& word[i] != 'I'&& word[i] != 'i'){
                word[i] = word[i] + 32 ;
                cout << "." << word[i] ;
            }
        }else if (word[i] != 'a'&& word[i] != 'O'&& word[i] != 'o'&& word[i] != 'Y'&& word[i] != 'y'&& word[i] != 'E'&& word[i] != 'e'&& word[i] != 'U'&& word[i] != 'u'&& word[i] != 'I'&& word[i] != 'i'&& word[i] > 'a' && word[i] <= 'z' ){
            cout << "." << word[i] ;
        }
    }
}