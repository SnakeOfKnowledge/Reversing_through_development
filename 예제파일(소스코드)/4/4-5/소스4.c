int main()
{
	int a = 1;
	int* b = &a;
	int d;
	d = *b + *b;
	int* c = &d;
	*b = 100;
	*c = 200;
}