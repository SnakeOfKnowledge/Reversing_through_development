#include <stdio.h>

class Test {
private:
	int var = 1;
	int var2 = 2;
public:
	int Getvar() { return var; }
	void Setvar(int num) { var = num; }
	int Getvar2() { return var2; }
	void Setvar2(int num) { var2 = num; }
	void print_all() { printf("%d %d\n", var, var2); }
	void print_var() { printf("%d\n", var); }
	void print_var2() { printf("%d\n", var2); }
};

int main()
{
	Test test_var;
	int num;

	test_var.print_all();
	test_var.print_var();
	test_var.print_var2();
	test_var.Setvar(100);
	test_var.print_var();
	test_var.Setvar2(200);
	test_var.print_var2();

	num = test_var.Getvar();
}