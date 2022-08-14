#include <stdio.h>

class BaseClass
{
public:
    virtual void print_Hello()
    {
        printf("Hello_World_BaseClass\n");
    }
    void foo()
    {
        print_Hello();
    }
};

class DerivedClass : public BaseClass
{
public:
    virtual void print_Hello() override
    {
        printf("Hello_World_DerivedClass\n");
    }
    void foo()
    {
        print_Hello();
    }
};

int main()
{
    BaseClass base_class;
    DerivedClass derived_class;
    base_class.print_Hello();
    derived_class.print_Hello();
    base_class.foo();
    derived_class.foo();
}