// #include <iostream>
// using namespace std ;
// int main (){
//     int n ;
//     cin >> n;
//     int k =n ;
//     for(int i=0;i<n;i++){
//         int c=1;
//         for(int j=0;j<k;j++){
//             if(j<n-i-1){
//                 cout <<" ";
//             }
//             else if(j<=n-1){
//                 cout <<c;
//                 c++;
//             }
//             else if (j==n){
//                 c=c-2;
//                 cout <<c;
//                 c--;
//             }
//             else {
//                 cout<< c;
//                 c--;
//             }
//         }
//         k++;
//         cout<<endl;
//     }
//     return 0;
// }


// half pyramid solid 

// #include <iostream>
// using namespace std ;
// int main (){
//     int n;
//     cin >> n;
//     for(int i=0  ; i < n ; i++){
//         for (int j = 0 ; j<=i;j++){
//             cout<<"*";
//         }
//         cout<< endl;
//     }
//     for (int i=1; i <=n-1;i++){
//         for(int j=0;j<n-i;j++){
//             cout << "*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }