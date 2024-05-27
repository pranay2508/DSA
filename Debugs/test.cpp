//1
// #include<iostream>
// using namespace std;

// int main() {
// 	int width, height;
// 	cin >> width >> height;
// 	int area = width * height;
// 	cout << area << endl;
// 	return 0;
// }

// 2 
// #include<iostream>
// using namespace std;

// int main() {
//     int n,sum=0,factor=1;
//     cin>>n;
//     while(n!=0){
//         int digit = n/10;
//         cout << digit;
//         sum = sum + digit*factor;
//         factor = 2*factor;
//         n = n%10;
//     }
//     cout<<sum;
//     return 0;
// }

//correted code . 
// #include<iostream>
// using namespace std;

// int main() {
//     int n, sum = 0, factor = 1;
//     cin >> n;

//     while (n != 0) {
//         int digit = n % 10;  // Extract the last binary digit
//         sum = sum + digit * factor;  // Add the weighted digit to the sum
//         factor = 2 * factor;  // Update the factor to the next power of 2
//         n = n / 10;  // Remove the last binary digit
//     }

//     cout << sum;
//     return 0;
// }


//3 
// #include<iostream>
// using namespace std;

// int main(){
//     int n, flag=1;
//     cin>>n;
//     for(int i=2;i<=n;i++){
//         flag = 1;
//         for(int j=2;j<=i/2;j++){
//             if(i%j==0){
//                 flag = 0;
//             }
//         }
//         if(flag==1){
//             cout<<i<<endl;
//         }
//     }
//     return 0;
// }

//4 

// #include<iostream>
// using namespace std;

// int main() {
// 	int n,a=0;
// 	cin>>n;
//     int z = n,digits=0;
//     while(z!=0){
//         z = z/10;
//         digits++;
//     }
//     while(n!=0){
//         int k = n%10,z=digits-1;
//         while(z--){
//             k = k*10;
//         }
//         a = a + k;
//         digits--;
//         n = n/10;
//     }
//     cout<<a;
//     return 0;
// }


//5 
// #include <iostream>
// using namespace std;
// bool checkMember(int n){
//     int f1 = 1, f2 = 1;
//     if(n==0 && n==1){
//         return true;
//     }
//     else{
//         while(1){
//             int temp = f1 + f2;
//             f1 = f2;
//             f2 = temp;
//             if(temp==n){
//                 return true;
//             }
//             else if(temp>n){
//                 return false;
//             }
//         }
//     }

// }
// int main (){
//     bool pranay = checkMember(6);
//     cout << pranay;
//     return 0;
// }

//6
// #include<iostream>
// using namespace std;
// #include <climits>


// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int max = INT_MIN;
//     // cout << max;
//     for(int i=0;i<n;i++){
// 	    if(max < arr[i])
// 	      max = arr[i];
//       }
    
     
//      int second = INT_MIN;
//      for(int i=0; i<n ; i++){
// 	     if( max > arr[i] && arr[i]>second){
// 	       second = arr[i];
//        }
      
//      }
//       cout << second;
// 	return 0;
// }