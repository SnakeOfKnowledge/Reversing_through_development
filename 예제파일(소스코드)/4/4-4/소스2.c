class Test {
private:
	int var = 0;
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