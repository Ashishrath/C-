#include <iostream>
#include <memory>   // Header file for smart pointers

using namespace std;

int main() {
    // ************** CREATING A UNIQUE POINTER *******************

    // unique_ptr<data_type> ptr_var_name(new data_type(value));
    unique_ptr<int> p1(new int(2));     // Initialize with pointer to a new integer.

    // unique_ptr<data_type> ptr_var_name = make_unique<data_type>(value);
    unique_ptr<int> p2 = make_unique<int>(8);       // Preferred method (c++14 onwards).

    cout<<*p1<<' '<<*p2<<endl;      // 2 8

    // ************** TRANSFERING OWNERSHIP *******************

    unique_ptr<int> p3 = make_unique<int>(5);

    unique_ptr<int> p4 = move(p3);      //Ownership is transfered from p3 to p4.

    // cout<<"Value of p3 after transfering ownership: "<<*p3<<endl; This line will generate a Segmentation fault as the ownership is transferred.

    if(p3) {
        cout<<"p3 is the owner."<<endl;
    } else if(p4) {
        cout<<"p4 is the owner."<<endl;     // This line will print.
    }

    return 0;
}
