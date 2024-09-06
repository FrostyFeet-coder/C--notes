#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
#include <vector>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;

void init_code(){
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}

int main() {
	init_code();
	string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
	cars[0] = "Opel";
	cout << cars[0];
	cout << sort(cars);
  	int x;
	cin>> x ;
	cout << x <<endl;

	return 0;
}