// // // // // // #include <iostream>
// // // // // // #include <cmath>
// // // // // // #include <bits/stdc++.h>
// // // // // // #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
// // // // // // #include <vector>

// // // // // // using namespace std;

// // // // // // void init_code(){
// // // // // //     fast_io;
// // // // // //     #ifndef ONLINE_JUDGE
// // // // // //     freopen("input.txt", "r", stdin);
// // // // // //     freopen("output.txt", "w", stdout);
// // // // // //     #endif 
// // // // // // }



// // // // // // int mostwater(int arr[], int n){
// // // // // //     int maxSoFar=0;
// // // // // //     int i=0;
// // // // // //     int j =n-1;

// // // // // // }

// // // // // // int main() {
// // // // // //     init_code();
// // // // // //     maxSoFar=0;
// // // // // //     int i,j;

// // // // // //     int arr[] ={1,8,6,2,5,4,8,3,7};

// // // // // //     int n = sizeof(arr)/sizeof(int);

// // // // // //     for (int i = 0; i < n-1; ++i)
// // // // // //     {
// // // // // //         for (int j = i+1; j < n; ++j)
// // // // // //         {

// // // // // //             int width_ij = j-i;
// // // // // //             int height_ij = min(arr[i],arr[j]);
// // // // // //             int area_ij = width_ij*height_ij;

// // // // // //             maxSoFar = max(maxSoFar,area_ij);

// // // // // //         }
// // // // // //     }

// // // // // //     return maxSoFar;
// // // // // // 




// // // // // //merge a sorted array


// // // // // #include <iostream>
// // // // // #include <cmath>
// // // // // #include <bits/stdc++.h>
// // // // // #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
// // // // // #include <vector>

// // // // // using namespace std;

// // // // // void init_code(){
// // // // //     fast_io;
// // // // //     #ifndef ONLINE_JUDGE
// // // // //     freopen("input.txt", "r", stdin);
// // // // //     freopen("output.txt", "w", stdout);
// // // // //     #endif 
// // // // // }


// // // // // mergearray(int arr1[] , int arr2[] , int n , int m){
    
// // // // //     int arr3[]={};
// // // // //     for (int k = 0; k < n+m ; ++k)
// // // // //     {
// // // // //         for (int i = 0; i < n; ++i)
// // // // //     {
// // // // //        int arr[i];
// // // // //     };
// // // // //      for (int j = 0; j < m; ++j)
// // // // //     {
// // // // //             arr[j];
// // // // //     }



// // // // //     }


// // // // // }
    

   


// // // // // int main() {
// // // // //     init_code();

// // // // //     int arr1[]={10,30,50,70};
// // // // //     int arr2[]={20,40,60};

// // // // //     int n =sizeof(arr1)/sizeof(int);
// // // // //     int m =sizeof(arr2)/sizeof(int);    

// // // // //     mergearray(arr1 , arr2 , n , m);

// // // // //     cout<<mergearray;

// // // // //     return 0;
// // // // // }



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


// // // // void countsortArrays(int arr[] , int n ,int k){
// // // //     int arr2[k+1]={0};



// // // //     for (int i = 0; i < n; ++i)
// // // //     {
// // // //         int x = arr[i];
// // // //         arr2[x]++;
// // // //     }


// // // //     for (int i = 0; i <=k; ++i)
// // // //     {
// // // //         cout<<i<<arr[i]<<endl;
// // // //     }

// // // // }

// // // // int main() {
// // // //     init_code();
// // // //     int arr[]={1,0,3,2,3,1,2,0,2};
// // // //     int k=3;
// // // //     int n =sizeof(arr)/sizeof(int);
// // // //     countsortArrays(arr , n ,k);

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

// // // int main() {
// // //     init_code();

// // //     // int x =10;
// // //     // cout<<sizeof(&x);

// // //     // cout<<endl;

// // //     // char ch='A';
// // //     // cout<<&ch;


// // //     // int x = 101;
// // //     // char*ptr=(char*)&x;

// // //     // cout<<(int)*ptr<<endl;




// // //     int x =10;
// // //     int *xptr=&x;

// // //     cout<<xptr;
// // //     xptr+=1;
// // //     cout<<endl;
// // //     cout<<xptr;


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

// // int main() {
// //     init_code();

// //     char str[]= {'a','b','c','d','e','\0','f'};
// //     cout<<str<<endl;


// //     char str2[]="yoi";
// //     cout<<str2<<endl;
// //     cout<<sizeof(str2); //4 because null character already gets addded to the array
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


// void ReverseString(char str[] , int a ){
//     int i=0;
//     int j = a-1; 
//     while(i<j){
//         swap(str[i], str[j]);
//         i++;
//         j--;
//     }
// }

// int main() {
//     init_code();

//     char str[] = "coding";
//     int a= strlen(str);
//     ReverseString(str , a );

//     cout<<str;

//     strrev(char)
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

int CompareString(char str[], char str2[]){
    int n= strlen(str);
    int n1 = strlen(str2);

    int i =0;
    int j=0;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n1; ++j)
        {
            
            if(str[i]> str[j]){
                return 1;
            }

            else if(str2[j]> str[i]){
                return -1 ;
            }

            else{
                return 0;
            }

        }
    }
}

int main() {
    init_code();

    char str[]= "hello";
    char str2[]= "yello with jello";
    CompareString(str , str2);

    return 0;
}