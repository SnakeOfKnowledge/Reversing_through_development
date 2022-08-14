int main()
{
	int a = 1;
	int& b = a;
	int&& c = b + b;
	b = 100;
	c = 200;
}