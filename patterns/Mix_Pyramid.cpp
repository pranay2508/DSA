// #include <iostream>
// using namespace std;

// void upper(int num)
// {

//     for (int row = 0; row < num; row++)
//     {
//         // left pyramid
//         for (int col = 0; col < num - row; col++)
//         {
//             cout << "* ";
//         }
//         // mid pyramid
//         for (int col = 0; col < (2 * row) + 1; col++)
//         {
//             cout << "_ ";
//         }
//         // right pyramid
//         for (int col = 0; col < num - row; col++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }
// int main()
// {
//     int num = 5;
//     upper(5);
// }



/// next pattern fancy pattern 
# include <iostream>
using namespace std; 
int main (){
    int num = 5 ;
    // 2*row + 1 condt is for when row is 0 col will be 1 
    // then row 1 so col will be 3
    // for row 2 col will be 5
    for (int row = 0; row < num ; row ++){
        for (int col =0 ; col < (2 * row) + 1 ; col ++){
            if ( (col & 1) == 0)
            cout << row <<" ";
            else 
            cout <<  "* ";
        }
        cout << endl;
    }
    num --;
    for (int row = 0; row < num; row ++){
        for (int col = 0; col < 2 * ( num - row ) -1 ; col ++){
            if ( (col & 1) == 0)
            cout << num - 1 <<" ";
            else 
            cout <<  "* ";
        }
        cout << endl;
    }
} 

// used & operator to check its even or odd 