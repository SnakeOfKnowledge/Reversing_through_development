class BaseClass
{
    friend class DerivedClass;
    friend int main();
public:
    int public_int;
protected:
    int protected_int;
private:
    int private_int;
};

class DerivedClass : public BaseClass
{
public:
    void foo()
    {
        public_int = 1;
        protected_int = 2;
        private_int = 3;
    }
};

int main()
{
    DerivedClass derived_class;
    derived_class.foo();
    derived_class.protected_int = 4;
    derived_class.private_int = 5;
}