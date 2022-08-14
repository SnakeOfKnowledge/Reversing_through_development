#include <stdio.h>

class BaseClass
{
public:
    void PublicFunc() { printf("public\n"); }
protected:
    void ProtectedFunc() { printf("Protected\n"); }
public:
    void foo2()
    {
        ProtectedFunc();
        PublicFunc();
    }
};

class DerivedClass : public BaseClass
{
public:
    void foo()
    {
        PublicFunc();
        ProtectedFunc();
    }
};

int main()
{
    DerivedClass derived_class;
    derived_class.foo();
    derived_class.foo2();
}