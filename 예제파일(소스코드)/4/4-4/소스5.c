#include <stdio.h>

class Test {
private:
	int var = 1;
public:
	int Getvar() { return var; }
	void Setvar(int num) { var = num; }
	void print_var() { printf("%d\n", var); }
};

int main()
{
	Test* test_var = new Test;
	int num;

	test_var->print_var();
	test_var->Setvar(100);
	test_var->print_var();
	num = test_var->Getvar();

	delete test_var;
}