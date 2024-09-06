#include <bits/stdc++.h>
using namespace std;
void pattern1(int N){

    for(int i=0; i<N; i++){
        for(int j=0; j<N-i; j++){
            cout<<"*";
        }
        cout<<endl;
    }


}
void pattern2(int N){
    for(int i=0; i<N; i++){
        //for printing spaces
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        //for printing stars
        for(int k=0; k<N-i; k++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern3(int N){
    for(int i=N-1; i>=0; i--){
        // for printing stars
        for(int j=0; j<N-i; j++){
            cout<<"*";
        }
        // printing spaces
        for(int k=0; k<2*i; k++){
            cout<<" ";
        }
        // printing stars
        for(int l=0; l<N-i; l++){
            cout<<"*";
        }
        cout<<endl;

    }
}
void pattern4(int N){
    for(int i=0; i<N; i++){
        // for printing spaces
        for(int j=0; j<N-i; j++){
            cout<<"*";
        }
        // for printing spaces
        for(int k=0; k<2*i; k++){
            cout<<" ";
        }
        for(int l=0; l<N-i; l++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern5(int N){
    for(int i=0; i<N; i++){
        // for printing spaces
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        // for printing stars
        for(int k=0; k<N; k++){
            cout<<"*";
        }
        // for printing spaces
        for(int l=0; l<N-i-1; l++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern6(int N){
    for(int i=0; i<N; i++){
        // for printing spaces
        for(int j=0; j<N-i-1; j++){
            cout<<" ";
        }
        // for printing stars
        for(int k=0; k<N; k++){
            cout<<"*";
        }
        // for printing spaces
        for(int l=0; l<i; l++){
            cout<<" ";
        }
        cout<<endl;

    }
}


int main() {
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif

	cout<<"Pattern 1 :-"<<endl;
    pattern1(5);
     cout<<"Pattern 2 :-"<<endl;
    pattern2(5);
    cout<<"Pattern 3 :-"<<endl;
    pattern3(5);
    cout<<"Pattern 4 :-"<<endl;
    pattern4(5);
    cout<<"Pattern 5 :-"<<endl;
    pattern5(5);
    cout<<"Pattern 6 :-"<<endl;
    pattern6(5);
}
