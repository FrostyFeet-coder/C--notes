// // // // // // // // #include <iostream>
// // // // // // // // #include <cmath>
// // // // // // // // #include <bits/stdc++.h>
// // // // // // // // #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
// // // // // // // // #include <vector>

// // // // // // // // using namespace std;

// // // // // // // // void init_code(){
// // // // // // // //     fast_io;
// // // // // // // //     #ifndef ONLINE_JUDGE
// // // // // // // //     freopen("input.txt", "r", stdin);
// // // // // // // //     freopen("output.txt", "w", stdout);
// // // // // // // //     #endif 
// // // // // // // // }

// // // // // // // // int main() {
// // // // // // // //     init_code();
// // // // // // // // // 


// // // // // // // //         // string str = "mera L";
// // // // // // // //     // cout<<str<<endl;


// // // // // // // //     // cout<<str[6]<<endl;
// // // // // // // //     // cout<<str.size();
// // // // // // // //     // cout<<str.length();


// // // // // // // //     // for (int i = 0; i < str.size(); ++i)
// // // // // // // //     // {
// // // // // // // //     //     cout<<str[i]<<endl;
// // // // // // // //     // }


// // // // // // // //     // string s;
// // // // // // // //     // getline(cin>>ws , s);
// // // // // // // //     // cout<<s;


// // // // // // // //     // string s1 ="abc";
// // // // // // // //     // string s2="def";
// // // // // // // //     // // cout<<s1.append(s2)<<endl;
// // // // // // // //     // // cout<<s1+s2;
    
// // // // // // // //     // s1.push_back('d');
// // // // // // // //     // cout<<s1;




// // // // // // // //     // string s = "sasd";
// // // // // // // //     // s.pop_back();
// // // // // // // //     // cout<<s;

// // // // // // // //     // string s = "abc";
// // // // // // // //     // cout<<s.back();

// // // // // // // //     // string s1 = "abc";
// // // // // // // //     // string s2="azf";

// // // // // // // //     // // cout<<s1.find("bc");
// // // // // // // //     // // reverse(s1.begin(),s1.end());
    
// // // // // // // //     // // cout<<s1;




// // // // // // // //     // sort(s2.begin() , s2.end());

// // // // // // // //     // cout<<s2;


// // // // // // // //     // cout<<s1.compare(s2);


// // // // // // // //     bool comparator(){
// // // // // // // //         if(a.size()<b.size){
// // // // // // // //             return true;
// // // // // // // //         }

// // // // // // // //         return false;
// // // // // // // //     }

// // // // // // // //     string arr[] = {"wyz" ,"abcd" , "ef", "z"};
// // // // // // // //     int n =4;

// // // // // // // //     sort(arr , arr+n, comparator);

// // // // // // // //     for (int i = 0; i < n; ++i)
// // // // // // // //     {
// // // // // // // //         cout<<arr[i]<<endl;    
// // // // // // // //     }










// // // // // // // #include <iostream>
// // // // // // // #include <cmath>
// // // // // // // #include <bits/stdc++.h>
// // // // // // // #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
// // // // // // // #include <vector>

// // // // // // // using namespace std;

// // // // // // // void init_code(){
// // // // // // //     fast_io;
// // // // // // //     #ifndef ONLINE_JUDGE
// // // // // // //     freopen("input.txt", "r", stdin);
// // // // // // //     freopen("output.txt", "w", stdout);
// // // // // // //     #endif 
// // // // // // // }

// // // // // // // int main() {
// // // // // // //     init_code();

// // // // // // //     string s;
// // // // // // //     cin >>s;

// // // // // // //     for (int i = 0; i < s.size(); ++i)
// // // // // // //     {
// // // // // // //         for (int j = i; j < s.size(); ++j)
// // // // // // //     {   
// // // // // // //         for (int k = i; k <= j; ++k)
// // // // // // //         {
// // // // // // //             cout<<s[k]<< " ";
// // // // // // //         }
// // // // // // //     }
// // // // // // //             cout<<endl;
// // // // // // //     }
// // // // // // //     return 0;
// // // // // // // }












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

// // // // // // int main() {
// // // // // //     init_code();

// // // // // //     string s;
// // // // // //     cin>>s;

// // // // // //     for (int i = 0; i < s.size(); ++i)
// // // // // //     {
// // // // // //                  for (int j = i; j < s.size(); ++j)
// // // // // //     {   
// // // // // //         for (int k = i; k <= j; ++k)
// // // // // //         {
// // // // // //             for (int l = k; l < s.size(); ++l)
// // // // // //             {
// // // // // //                 cout<<s[l] ;
// // // // // //             }

// // // // // //             cout<<endl;

// // // // // //         }
// // // // // //     }

// // // // // //  }

// // // // // //     return 0;
// // // // // // }














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

// // // // // int main() {
// // // // //     init_code();

// // // // //    string s = "abcdef";

// // // // // for(int i = 0; i < s.size(); ++i)
// // // // // {
// // // // //     if(!(s[i]=="a"||"e"||"i"||"o"||"u")){
// // // // //         cout<< "false";
// // // // //     }

// // // // //     else{
// // // // //         cout<<"true";
// // // // //     }
// // // // // }



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

// // // // int longestgood(string s ,int n){
// // // //     int msf=0;
// // // //     int count=0;
// // // //     for (int i = 0; i < n; ++i)
// // // //     {
// // // //        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
// // // //         count++;
// // // //        }
// // // //        else count=0;
// // // //        msf = max(msf,count);
// // // //     }

// // // //     return msf;
// // // // }

// // // // int main() {
// // // //     init_code();


// // // //     string str = "cbaeicdeiouioio";
// // // //     int n = str.size();
// // // //    cout<< longestgood(str, n);










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

// // // bool isPalindrome(string s){
// // //     i=0;
// // //     j=n-1;
// // //     while(i<j){
// // //         if(s[i]!=s[j]) return false;
// // //         else return true

// // //         i++;
// // //         j--;
// // //     }
// // // }

// // // int countsubstring(string s, int n ){
// // //     int cnt =0;
// // //     for (int i = 0; i < n; ++i)
// // //     {
// // //         for (int j = i; i < n; ++i)
// // //         {

// // //         }
// // //     }
// // // }


// // // int main() {
// // //     init_code();

// // //     string str = "abaaba";
// // //     int n = str.size();

// // //     countsubstring(str , n)

// // //     return 0;
// // // }









// // // // // // // //     return 0;
// // // // // // // // }





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


// // int OddPalindrome(string s){
// // int i =0;
// // int n = s.size();

// // while(i<n){
// //     int j =0;
// // }


// // }



// // void  countpalindrome(string s ){

// // }


// // int main() {
// //     init_code();

// //     string str="abaaba";

// //     countpalindrome(str)

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

// // int maxsubarray(int arr[] , int n){
// //     int csum[101];

// //     csum[0]=0;
// //     for (int i = 1; i <=n; ++i)
// //     {
// //         csum[i]=csum[i-1]+arr[i-1];
// //     }
// //     int maxsofar= INT_MIN;

// //     for (int i = 0; i < n; ++i)
// //     {
// //         for (int j = i; j < n; ++j)
// //         {
// //             int sum = csum[j+1]-csum[i];
// //             maxsofar =max(maxsofar , sum);
// //         }
// //     }



// //     return maxsofar;
// // }

// int maxsubarray(int arr[] , int n){
//     int x[100];

//     x[0] = arr[0];
//     int maxSofar =x[0];


//     for (int i = 1; i < n; ++i)
//     {
//         x[i]=max(x[i-1]+arr[i] , arr[i]);
//         maxSofar= max(maxSofar,x[i]);

//     }

//     return maxSofar;
// }








// int main() {
//     init_code();
//     int arr[]={-2,1,-3,4,-1,2,1,-5,4};
//     int n =sizeof(arr)/sizeof(int);
//     cout<<maxsubarray(arr , n);
//     return 0;
// }