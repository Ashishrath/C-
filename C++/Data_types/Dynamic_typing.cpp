// 1. void* pointer: A void* pointer is a generic pointer that can point to objects of any data type. They can be used to store a reference to any type of object without knowing the specific type of the object.

#include <iostream>

int main() {
    int num = 2;
    float float_num = 2.8f;
    std::string str = "Hey there!";

    void* vptr;
    vptr = &num;
    std::cout<<"value = "<<*(static_cast<int*>(vptr))<<std::endl;

    vptr = &float_num;
    std::cout<<"value = "<<*(static_cast<float*>(vptr))<<std::endl;

    vptr = &str;
    std::cout<<"value = "<<*(static_cast<std::string*>(vptr))<<std::endl;

    return 0;
}

// 2. any_cast: C++17 introduced the std::any class which represents a generalized type-safe container for single values of any type.

#include <iostream>
#include <any>      // header file for any_cast

int main() {
    std::any any_value;

    any_value = 2;
    std::cout<<"value = "<<std::any_cast<int>(any_value)<<std::endl;

    any_value = 2.8;
    std::cout<<"value = "<<std::any_cast<double>(any_value)<<std::endl;

    any_value = std::string("Hey There!");      // any_value = "Hey There!"; this will give error: bad_any_cast
    std::cout<<"value = "<<std::any_cast<std::string>(any_value)<<std::endl;

    return 0;
}
