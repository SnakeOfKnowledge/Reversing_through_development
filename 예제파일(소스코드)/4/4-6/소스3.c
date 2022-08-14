class BaseClass
{
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
        *(&protected_int + 1) = 3; //private_int = 3
    }
};

int main()
{
    DerivedClass derived_class;
    derived_class.foo();
}