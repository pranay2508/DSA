#include <iostream>
using namespace std ;
int main (){
    int k;
    int set; // expected 4 bits only
    cout << "put some no k";
    cin >> k;
    cout << "for set ";
    cin >> set;
    int value = 1 << k;
    // cout << value << endl;
    int newvalue = set | value;
    cout << newvalue;
    return 0;
}

// set = 1 0 1 0 , k = 2 
// 1010 | 100 
// 1110 output 