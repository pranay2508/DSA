#include <iostream>
using namespace std; 
int main (){
    int setbit = 1111;
    cout << setbit << endl; 
    int count = 0;
    while (setbit > 0){
        int remainder;
        remainder = setbit % 10 ;
        // cout << "remainder"<<" "<< remainder << endl;
        if(remainder == 1){
            count ++ ;
        }
        setbit = setbit / 10;
        // cout <<"setbit"<<" " << setbit << endl;
        // cout << "count" <<" " << count << endl;
    }
    cout << "out count" <<" " << count;
    return 0;
}