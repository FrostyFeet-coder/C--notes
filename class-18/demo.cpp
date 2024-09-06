// // // #include <iostream>
// // // #include <cmath>
// // // #include <bits/stdc++.h>
// // // #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
// // // #include <vector>

// // // using namespace std;

// // // void init_code(){
// // //     fast_io;
// // //     #ifndef ONLINE_JUDGE
// // //     freopen("input.txt", "r", stdin);
// // //     freopen("output.txt", "w", stdout);
// // //     #endif 
// // // }


// // // f(vector<int> arr , int n ,int i){
// // //     if(i==n-1){
// // //         return 0;
// // //     }

// // //     int sum=arr[0];
    
// // //     int A=f(arr[i]+arr[i+1]);
// // //     return sum+A;
// // // }

// // // int main() {
// // //     init_code();


// // //     int arr[] = {10,20,30,40,50};
// // //     int n = 5;
// // //     cout<<f(arr,n ,0);

// // //     return 0;
// // // }




// // #include <iostream>
// // #include <cmath>
// // #include <bits/stdc++.h>
// // #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
// // #include <vector>

// // using namespace std;

// // void init_code(){
// //     fast_io;
// //     #ifndef ONLINE_JUDGE
// //     freopen("input.txt", "r", stdin);
// //     freopen("output.txt", "w", stdout);
// //     #endif 
// // }

// // bool flag ==false;

// // void f(int X[] , int n , int t , int i){
// //     if(i==n){
// //         if(flag == false){
// //             return -1 ;
// //         }

// //         return;
// //     }

// //     if(X[i]==t){
// //         cout<<i<<endl;
// //         return true;
// //     }

// //     f(X , n , t , i+1);
    
// // }

// // int main() {
// //     init_code();

// //         int X[]={10,20,30,20,40};
// //         int n =5;
// //         int t=20;

// //         f(X , n ,t , 0);

// //     return 0;
// // }



// #include <iostream>
// #include <cmath>
// #include <bits/stdc++.h>
// #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
// #include <vector>

// using namespace std;

// void init_code(){
//     fast_io;
//     #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//     #endif 
// }

// vector<int> ans;

// void f(int X[] , int n , int t , int i){
//     if(i==n){
//         return;
//     }

//     if(X[i]==t){
//         ans.push_back(i);
//         return true;
//     }

//     f(X , n , t , i+1);
    
// }

// int main() {
//     init_code();

//         int X[]={10,20,30,20,40};
//         int n =5;
//         int t=20;

//         f(X , n ,t , 0);

//         if(ans.empty()){
//             cout<<-1;
//         }

//         else{
//             for(int x:ans){
//                 cout<<x;
//             }
//         }

//     return 0;
// }



#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#include <vector>

using namespace std;

void init_code(){
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}

bool f(int arr[] , int n , int i){
    if(i==n-1){
        return true;
    }
    if(arr[i]<arr[i+1] && f(arr , n, i) ){

        return true;
    }
    else{
        return false;
    }

    f(arr , n , i+1);
}

int main() {
    init_code();

    int arr[]={10,20,30,40,50};
    int n =5;

    f(arr , n , 0);

    return 0;
}