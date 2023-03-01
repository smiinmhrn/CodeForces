#include <iostream>
#include <string.h>
using namespace std;
int main(){

    char word[101];
    char defult[6]="hello";

    cin >> word;
    int n ;
    n = strlen(word);
    int j=0;
    for( int i = 0 ; i < n ; i++){

        if(word[i]==defult[j]){
            j = j + 1 ;

        }
    }

    if(j==5){
        cout << "YES";
    }else {
        cout << "NO";
    }
}