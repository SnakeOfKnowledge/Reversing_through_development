#include <stdio.h>

class BaseClass
{
public:
    virtual void print_Hello()
    {
        printf("Hello_World_BaseClass\n");
    }
    virtual void print_Hello2()
    {
        printf("Hello_World_BaseClass2\n");
    }
    virtual void print_Hello3()
    {
        printf("Hello_World_BaseClass3\n");
    }
    void foo()
    {
        print_Hello();
        print_Hello2();
        print_Hello3();
    }
};

class DerivedClass : public BaseClass
{
public:
    void print_Hello() override
    {
        printf("Hello_World_DerivedClass\n");
    }
    void print_Hello2() override
    {
        printf("Hello_World_DerivedClass2\n");
    }
    void foo()
    {
        print_Hello();
        print_Hello2();
        print_Hello3();
    }
};

int main()
{
    BaseClass base_class;
    DerivedClass derived_class;
    base_class.foo();
    derived_class.foo();
}