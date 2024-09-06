// // // // #include <iostream>
// // // // #include <cmath>
// // // // #include <bits/stdc++.h>
// // // // #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
// // // // #include <vector>

// // // // using namespace std;

// // // // void init_code(){
// // // //     fast_io;
// // // //     #ifndef ONLINE_JUDGE
// // // //     freopen("input.txt", "r", stdin);
// // // //     freopen("output.txt", "w", stdout);
// // // //     #endif 
// // // // }

// // // // int fact(int n){

// // // //     if(n==0){
// // // //         return 1;
// // // //     }

// // // //     int A = fact(n-1);
// // // //     return n*A;
// // // // }

// // // // int main() {
// // // //     init_code();

// // // //     int n;
// // // //     cin>>n;
// // // //     cout<<fact(n);
// // // //     return 0;
// // // // }


// // // // #include <iostream>
// // // // #include <cmath>
// // // // #include <bits/stdc++.h>
// // // // #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
// // // // #include <vector>

// // // // using namespace std;

// // // // void init_code(){
// // // //     fast_io;
// // // //     #ifndef ONLINE_JUDGE
// // // //     freopen("input.txt", "r", stdin);
// // // //     freopen("output.txt", "w", stdout);
// // // //     #endif 
// // // // }

// // // // int fibo(int n){
    
// // // //     if(n==0){
// // // //         return 0;
// // // //     }
// // // //     if(n==1){
// // // //         return 1;
// // // //     }

// // // //     return fibo(n-1 )+fibo( n-2 );
// // // // }

// // // // int main() {
// // // //     init_code();

// // // //     int n;
// // // //     cin>>n;
// // // //     cout<<fibo(n);
// // // //     return 0;
// // // // }

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

// // // int f(int x , int y){
   
// // //    if(y==0){
// // //     return 0;
// // //    } 

// // //    int A = f(x , y-1);

// // //     return x+A;
// // // }

// // // int main() {
// // //     init_code();

// // //     int x ,y;
// // //     x=3;
// // //     y=4;
    
// // //     cout<<f(x,y);
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

// // // void f(int n){
    

// // //     if(n==0){
// // //         return;
// // //     }

// // //     // if(n==1){
// // //     //     cout<< 1 <<" ";
// // //     //     return ;
// // //     // }

// // //     cout<<n <<" ";
// // //     f(n-1);

// // //     return;
// // // }

// // // int main() {
// // //     init_code();

// // //     int n;
// // //     cin>>n;
// // //     f(n);
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

// // // int f(int n , int m){
// // //     if(m==0){
// // //         return 1;
// // //     }

// // //     int A = f(n , m-1);

// // //     return n * A ;
// // // }

// // // int main() {
// // //     init_code();

// // //     int n = 2;
// // //     int m = 3;
    
// // //     cout <<f(n,m);
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

// // string spellingMap[]={"zero" , "one" , "two" , "three" , "four" , "five" , "six" ,"seven" , "eight" , "nine"};

// // void f(int n){

// //   if(n==0){
// //     return;
// //   }

// //    f(n/10);

// //   int d =n%10;
// //   cout<<spellingMap[d]<<" ";

// // }

// // int main() {
// //     init_code();
    
// //     int n =32;    
// //     f(n);
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

// void f(){

// }

// int main() {
//     init_code();

    

//     return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
    int numRows = rowSum.size();
    int numCols = colSum.size();
    vector<vector<int>> result(numRows, vector<int>(numCols, 0));

    int i = 0, j = 0;

    while (i < numRows && j < numCols) {
        int val = min(rowSum[i], colSum[j]);
        result[i][j] = val;
        rowSum[i] -= val;
        colSum[j] -= val;

        if (rowSum[i] == 0) {
            i++;
        }
        if (colSum[j] == 0) {
            j++;
        }
    }

    return result;
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> row(N), col(M);

    for (int i = 0; i < N; i++) {
        cin >> row[i];
    }

    for (int i = 0; i < M; i++) {
        cin >> col[i];
    }

    vector<vector<int>> matrix = restoreMatrix(row, col);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
