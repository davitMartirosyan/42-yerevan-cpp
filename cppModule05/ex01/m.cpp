#include <iostream>

class A
{
public:
    A (void) {std::cout << "CTOR called" << std::endl;}
    ~A (void) {std::cout << "DTOR called" << std::endl;}
};

int main()
{
    {
        std::cout << "malloc start" << std::endl ;
        A* ptr = (A*)malloc(sizeof(A));
        free(ptr);
        std::cout << "malloc end" << std::endl ;
    }
    {
        std::cout << "new start" << std::endl ;
        A* ptr = new A;
        delete ptr ;
        std::cout << "new end" << std::endl ;
    }
}