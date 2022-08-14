int add(int x, int y)
{
	return x + y;
}

int main()
{
	void (*function_pointer)() = add;
	function_pointer(1, 2);
}