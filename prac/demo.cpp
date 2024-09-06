#include<iostream>

using namespace std;


int main() {
	// init_code();
	// int ucase=0;
	// int lcase=0;
	// int special=0;
	// int digit=0;
	int count=0;
	char n;
	n = cin.get();
	while(true){
		if (n=='$')
		{
			break;
		}
		else{
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}