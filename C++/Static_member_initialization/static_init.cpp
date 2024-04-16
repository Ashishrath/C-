#include <iostream>

class Demo {
    public:
    static int a;   // static int a = 1 ERROR: Static member variables need to be defined outside the class in one source file.

    void inc() {
        a++;
    }
    
    void print() {
        std::cout << a << std::endl;
    }
};

// Defining static data member 
int Demo::a = 1;

int main()
{
    Demo d;
    Demo d2;
    
    d.print();
    d2.print();
    
    d.inc();
    
    d.print();
    d2.print();
    
    d.inc();
    d2.inc();
    
    d.print();
    d2.print();

    return 0;
}
