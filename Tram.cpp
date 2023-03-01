/*#include <iostream>
using namespace std ;
int main(){
    int mat[1000][2];
    int n ;
    cin >> n ;
    int sum = 0 ;
    

    for (int i = 0 ; i < n ; i++ ){
        for(int j = 0 ; j < 2 ; j++ ){
            cin >> mat[i][j];
        }
    }

    int max = 0 ;

    for (int i = 0 ; i < n ; i++ ){
        
            
        sum = sum + mat[i][1] - mat[i][0] ;
        if ( sum > max ){
            max = sum ;
        }
        
    }

    cout << max ;



    
}*/




#include <iostream>
using namespace std;

int main(){
    int s = 0 , max = 0;
    int n , a , b ;
    cin >> n;

    for (int i = 1 ; i <= n ; i++){
        cin >> a >> b;
        s = s + (b-a);
        if (s>max){
            max=s;
        }
    }

    cout << max ;
}