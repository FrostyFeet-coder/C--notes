
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



// // // class customer
// // // {
// // // public:

// // //     string name;
// // //     int age;
// // //     char gender;
// // //     double credit;       
// // //     void p1(){

// // //     }
// // // };


// // // int main() {
// // //     init_code();

// // //     customer c1;
// // //     // cin>>c1.name;
// // //     // c1.age = 10;
// // //     // c1.gender='M';
// // //     // c1.credit=1000;


// // //     cout<<c1.p1;

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



// // class customer
// // {
// // public:

// //     string name;
// //     int age;
// //     char gender;
// //     double credit;       
// //     customer(string n , int a , char g , double c){
// //         name =n;
// //         age = a;
// //         gender =g;
// //         credit =g;

// //     }

// //     void print(){
// //         cout<<name;
// //     }
// // };


// // int main() {
// //     init_code();

// //     customer c1("bleh" , 32 ,'F',12324);
    

// //     c1.print();

// //     return 0;
// // }









// #include <iostream>
// #include <cmath>
// #include <bits/stdc++.h>
// #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
// #include <vector>

// using namespace std;



// class customer
// {
// public:
//     string name;
//     int age;

//         customer(string n, int a) {
//         name = n;
//         age = a;
//     }



//     int operator*(const customer& c){
//         return age* c.age;
//     }
    
// };




// void init_code(){
//     fast_io;
//     #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//     #endif 
// }

// int main() {
//     init_code();

//     customer c1("meh" , 42);
//     customer c2("bleh" , 12)

    

//     return 0;
// }

#include<iostream>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;

void init_code(){
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}


class customer {

public :

    string name;
    int age;
    char gender;
    double credits;

    customer(string n, int a, char g, double c) {
        name = n;
        age = a;
        gender = g;
        credits = c;
    }

    void print() {
        cout << "name = " << name << endl;
        cout << "age = " << age << endl;
        cout << "gender = " << gender << endl;
        cout << "credits = " << credits << endl << endl;
    }

};

int main() {
    init_code();

    customer c("Ramanujan", 32, 'M', 1729);


    customer* cptr = &c;

    cout << (*cptr).name << " " << cptr->name << endl;
    cout << (*cptr).age << " " << cptr->age << endl;
    cout << (*cptr).gender << " " << cptr->gender << endl;
    cout << (*cptr).credits << " " << cptr->credits << endl;

    (*cptr).print();
    cptr->print();

    return 0;
}
