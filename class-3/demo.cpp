// #include <bits/stdc++.h>
// #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

// using namespace std;

// void init_code(){
//     fast_io;
//     #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//     #endif 
// }

// void pattern2(int n){
// 		 int i =1;
// 	 while(i<=n ){
// 	 	int j = 1;
// 	 	while(j<=i){
// 	 		cout<<j;
// 	 		j++;
// 	 	}
// 	 	cout<<endl;
// 	 	i++;

// 	 }

// }

// void pattern3(int n){
// 			 int i =1;

// 		int num =1;
// 		 while(i<=n ){
// 	 	int j = 1;
// 	 	while(j<=i){
// 	 		cout<<j;
// 	 		j++;
// // 	 		num++
// // 	 	}
// // 	 	cout<<endl;
// // 	 	i++;

// // 	 }

// // }


// // void pattern6(int n){

// // 	 int i =1;
// // 	for(int i ; i <=n ; i++){

// // 		for(int j =1; j<=n-i; j++){
// // 			cout<<" ";
// // 	}
// // 		 int num = i;

// // 		for(int j =1 ; j<=i;j++){
// // 			cout<<num;
// // 			num++;
// // 		}
// // 	cout<<endl;
// // }

// // }


// // int main() {
// // 	init_code();
// // 	// pattern2(n);
// // 	 int n;
// // 	 cin>> n ;
// // 	 int i =1;
// // 	for(int i ; i <=n ; i++){

// // 		for(int j =1; j<=n-i; j++){
// // 			cout<<" ";
// // 	}
// // 		 int num = i;

// // 		for(int j =1 ; j<=i;j++){
// // 			cout<<num;
// // 			num++;
// // 		}
// // 	cout<<endl;
// // }
// // 		return 0;
// // }



// // #include <iostream>
// // #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
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
// //     int count = 0;
// //     char n;
// //     while (cin.get(n)) {
// //         if (n == '$') {
// //             break;
// //         } else {
// //             count++;
// //         }
// //     }
// //     cout << count << endl;
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

// void leftRotate(int arr[], int n, int d) {

//     if (n == 0) return;

//     // Get the effective number of rotations:
//     d = d % n;

//     //step 1:
//     reverse(arr, arr + d);

//     //step 2:
//     reverse(arr + d, arr + n);

//     //step 3:
//     reverse(arr, arr + n);
// }


// int main() {
// 	init_code();


//     int n = 7;
//     int arr[] = {1, 2, 3, 4, 5, 6, 7};
//     int d = 3;

//     cout << "Before rotation:" << endl;
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     cout << endl;

//     leftRotate(arr, n, d);
//     cout << "After rotation:" << endl;
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     cout << endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {

// }


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

// int main() {
// 	init_code();

//     int n;
//     cin >> n;

// 	for(int i= 1; i<=n ; i++){
// 		for(int j=1; j<=i;j++){
// 			cout<<j<<"\t";
// }
// 		for (int j = 1; j <= 2 *n - ( 2* i); j++) {
//             cout << "\t";
//         }

// 		// for(int j=i; j>=1;j--){
// 		// 	 if(j != n || i != n) {
// 		// 	cout<<j<<"\t";
// 		// 	}
// 		// }

// 		for(int j=i; j>=1;j--){
// 			if (j==n)
// 			{
// 				continue;
// 			}
			
// 			cout<<j<<"\t";
// 		}
// 		cout<<endl;
// 	}

// 	return 0;
// }