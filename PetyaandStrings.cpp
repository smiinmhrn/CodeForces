#include <string.h>
#include <iostream>
using namespace std;
void str12( char str1[] , char str2[] );
int strcmp(char str1[], char str2[]);
int main(){
    int x;
    char str1[101];
    char str2[101];

    cin >> str1;
    cin >> str2;

    str12(str1 , str2 );

     
    cout << strcmp( str1, str2) ;

    return 0;
}


void str12( char str1[] , char str2[] ){

    for(int i=0 ; str1[i] ; i++ ){

        if( str1[i]>='A' && str1[i]<='Z'){
            str1[i]=str1[i]+32 ;
        }


        
        if( str2[i]>='A' && str2[i]<='Z'){
            str2[i]=str2[i]+32 ;
        }
    }

}


int strcmp(char str1[], char str2[]){
    
    for(int i = 0 ; str1[i] ; i++){
        if(str1[i] > str2[i]){
            return 1;
        }else if (str1[i] < str2[i]){
            return -1;
        }
    }
    return 0 ;
}