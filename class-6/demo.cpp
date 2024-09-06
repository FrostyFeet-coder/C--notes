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

// // // int m2(int x , int y){
// // //     int ans= x*y;
// // //     return ans;
// // // }

// // // int main() {
// // //     init_code();

// // //     cout<< m2(2,4);
// // //     return 0;
// // // }


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

// // // void myswap(int &a , int &b){
// // //     int temp =a;
// // //     a=b;
// // //     b=temp;
// // // }

// // // int main() {
// // //     init_code();
// // //     int a=10;
// // //     int b=20;
// // //     cout<< a << b<<endl;

// // //     myswap(a,b);

// // //     cout<< a << b;

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

// // void isPrime(int x){

// //     for (int i = 2; i < sqrt(x); ++i)
// //     {
// //         if (i%x==0)
// //         {
// //             cout<<"Is prime";
// //         }
// //         else{
// //             cout<< "not prime";
// //         }
// //     }
// // }

// // int main() {
// //     init_code();

// //     isPrime(10);

// //     return 0;
// // // }
// // #include<iostream>
// // #include<cmath>
// // using namespace std;
// // #include <iostream>
// // // // #include <cmath>
// // // / #include <bits/stdc++.h>
// //  #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
// //  #include <vector>

// #include <iostream>
// #include <cmath>
// #include <bits/stdc++.h>
// #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
// #include <vector>

// using namespace std;

// bool isPrime(int n) {

//     for (int i = 2; i <= sqrt(n); i++) {
//         if (n % i == 0) {
//             return false; // n is not prime
//         }
//     }

//     return true; // n is prime

// }

// void printPrimes(int m) {

//     for (int n = 2; n <= m; n++) {

//         // check if n is prime

//         if (isPrime(n)) {

//             // n is a prime number

//             cout << n << " ";

//         }

//     }

// }

// void init_code(){
//     fast_io;
//     #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//     #endif 
// }

// int main() {
//     init_code();

//     int m;
//     cin>>m;

//     printPrimes(m);
    

//     return 0;
// }



































