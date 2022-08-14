#include <stdio.h>

class BaseClass
{
public:
    volatile int public_int;
protected:
    volatile int protected_int;
private:
    volatile int private_int;
public:
    void print() {
        printf("%d %d %d\n", public_int, protected_int, private_int);
    }
};

class DerivedClass : public BaseClass
{
public:
    void foo()
    {
        public_int = 1;
        protected_int = 2;
        *(&protected_int + 1) = 3; //private_int = 3
        print();
    }
};

DerivedClass derived_class;
void _declspec(naked) main()
{
    derived_class.foo();
    __asm ret
}