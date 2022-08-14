#include <cstdio>

struct A1
{
	A1()
	{
		printf("A1 持失切\n");
	}
	~A1()
	{
		printf("A1 社瑚切\n");
	}
};

int main()
{
	A1 a;
}