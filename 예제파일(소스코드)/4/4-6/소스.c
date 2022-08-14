class BaseClass
{
public:
    void PublicFunc() {}
protected:
    void ProtectedFunc() {}
};

class DerivedClass1 : public BaseClass
{
public:
    void foo()
    {
        PublicFunc();
        ProtectedFunc();
    }
private:
    void PrivateFunc() {}
};

class DerivedClass2 : private BaseClass
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
    DerivedClass1 derived_class1;
    DerivedClass2 derived_class2;
    derived_class1.foo();
    derived_class2.foo();
    derived_class1.PublicFunc();
    derived_class1.ProtectedFunc(); //Error
    derived_class1.PrivateFunc();   //Error
    derived_class2.PublicFunc();    //Eroor
}