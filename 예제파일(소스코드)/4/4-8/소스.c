#include <stdio.h>

class BaseClass
{
public:
    virtual void print_Hello()
    {
        printf("Hello_World_BaseClass\n");
    }
};

class BaseClass2
{
public:
    virtual void print_Hello2()
    {
        printf("Hello_World_BaseClass2\n");
    }
};

class DerivedClass : public BaseClass, BaseClass2
{
public:
    void foo()
    {
        print_Hello();
        print_Hello2();
    }
};

int main()
{
    DerivedClass derived_class;
    derived_class.foo();
}