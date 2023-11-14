// Deep copy example with int and char pointers

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Test {
    public:
    int *var;
    char *ptr;

    Test(int num, const char *ptr2) {
        var = new int(num);
        ptr = new char[strlen(ptr2)+1];
        strcpy(ptr, ptr2);
    }
    
    Test(const Test &rhs) {
        var = new int(*(rhs.var));
        ptr = new char[strlen(rhs.ptr)+1];
        strcpy(ptr, rhs.ptr);
    }

    ~Test(){
        cout<< "Destructor called!" <<endl;
        delete var;
        delete[] ptr;
    }
};

int main()
{
    Test t(2, "Hello");
    Test t2 = t;
    cout<< *(t.var)<<" "<< t.ptr<<endl;
    cout<< *(t2.var)<<" "<< t2.ptr<<endl;

    return 0;
}
