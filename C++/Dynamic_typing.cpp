// A void* pointer is a generic pointer that can point to objects of any data type. They can be used to store a reference to any type of object without knowing the specific type of the object.

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
