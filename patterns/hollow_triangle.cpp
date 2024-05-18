#include <iostream>
using namespace std ;

void hollow(int n ){
    for (int rows =0 ; rows < n ; rows++){
        //for spaces 
        for(int col = 0 ; col < n - rows - 1 ; col ++){
            cout << " ";
            // cout << endl;
        }
        // for * star
        for(int col = 0; col< rows+1 ; col++){
            if(rows ==0 || rows == n-1 || col == 0 || col == rows + 1 - 1 ){
                cout << "* " ;
            }
            else 
            cout << "  ";
            
        }
        cout << endl;
    }
}

int main (){
    int n;
    cout << "write n ";
    cin >> n;
    hollow(n);
}