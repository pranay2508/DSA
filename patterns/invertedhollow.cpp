#include <iostream>
using namespace std;
int main()
{
    int num = 5;
    for (int row = 0; row < num; row++)
    {
        for (int col = 0; col < row; col++)
        {
            cout << " ";
        }
        for (int col = 0; col < num - row; col++){
            if (row == 0 || col == 0 || row == num - 1 || col == num - row -1){
                cout << "* ";
            } 
            else {
                cout << "  "; 
            }    

        }
        cout << endl;
            
          
    }
}