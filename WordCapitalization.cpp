#include <iostream>
using namespace std;
int main(){
    char word[1001];
    cin >> word ;

    if ( word[0] >= 'a' && word[0] <= 'z'){
        word[0] = word[0] - 32 ;
        cout << word ;
    }
    else{
        
        cout << word ;
    }
}