#include <iostream>

using namespace std;

template<typename T>

void print(T t) {
    cout<<t<<endl;      \\ For the last argument now only one argument is there so this version is called.
}
template<typename T, typename... Args>

void print(T t, Args... args) {
    cout<<t<<endl;      \\ First argument will come here.
    
    print(args...);     \\ Remaining arguments will be copied in args and recursive call is made.
}

int main()
{
    print(2, 2.8, "Ashish");

    return 0;
}
