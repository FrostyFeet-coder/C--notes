
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
// // 	init_code();

// // 	// int n;
// // 	// cin>>n;
// // 	// for (int i = 0; i < n; ++i)
// // 	// {
// // 		// cin>>arr[i];
// // 	// }
// // 	int arr[5]={10,20,30,10,20};
// // 	int trr;
// // 	cin>>trr;

// // 	int count = 0;

// // 	for (int i = 5; i > -1; --i)
// // 	{
// // 		if (arr[i]==trr)
// // 		{
// // 			cout<<"target find at an index"<< i;
// // 			count++;
// // 		}

// // 	}

// // 	if (count==0)
// // 	{
// // 		cout<<"-1";
// // 	}
// // 	return 0;
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

// int main() {
// 	init_code();

// 	int n ;
// 	cin>>n;
// 	n = sizeof(arr)/sizeof(int)
// 	int arr[n];
// 	int i=0;
// 	int j=n-1;

// 	for (int i = 0; i < n; ++i)
// 	{
// 		cin>>arr[i];
// 	}
	
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cout<<arr[i];
// 	}

// 	for (int i = 0; i < n/2; ++i)
// 	{
// 		swap(arr[i],arr[j]);
// 		i++;
// 		j--;
// 	}
// 	return 0;
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

// int main() {
// 	

//  	int arr[] ={10,20,30,40,50,60,70};	
//  	int n = sizeof(arr)/sizeof(int);
// 	int temp = arr[0];

// 	// for (int i = n-1; i >=1; --i)
// 	// {
// 	// 	swap(arr[i],arr[i-1]);
// 	// }

// 	// arr[0] = arr[temp];

// 	for (int i = ; i < n; ++i)
// 	{	
// 	}
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cout<<arr[i];
// 	}
// 	return 0;
// }















// A C++ program to find a maximum product of a
// triplet in array of integers
#include <bits/stdc++.h>
using namespace std;

/* Function to find a maximum product of a triplet
   in array of integers of size n */
int maxProduct(int arr[], int n)
{
    // if size is less than 3, no triplet exists
    if (n < 3)
        return -1;

    // Sort the array in ascending order
    sort(arr, arr + n);

    // Return the maximum of product of last three
    // elements and product of first two elements
    // and last element
    return max(arr[0] * arr[1] * arr[n - 1],
               arr[n - 1] * arr[n - 2] * arr[n - 3]);
}

// Driver program to test above functions
int main()
{
	init_code();
    int arr[] = { -10, 1, 2, 3, -20 };
    int n = sizeof(arr) / sizeof(arr[0]);

    int max = maxProduct(arr, n);

    if (max == -1)
        cout << "No Triplet Exists";
    else
        cout << "Maximum product is " << max;

    return 0;
}





















