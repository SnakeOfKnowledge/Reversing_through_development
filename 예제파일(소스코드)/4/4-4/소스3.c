#include <stdio.h>

class Test {
private:
	int var;
public:
	int Getvar()
	{
		return var;
	}
	void Setvar(int num)
	{
		var = num;
	}
	void print()
	{
		printf("%d\n", var);
	}
};
int main()
{
	Test test_var;
	int num;

	num = test_var.Getvar();
	test_var.print();

	test_var.Setvar(100);
	num = test_var.Getvar();
	test_var.print();
}