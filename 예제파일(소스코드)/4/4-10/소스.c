#include <cstdio>

struct A1
{
	A1()
	{
		printf("A1 ������\n");
	}
	~A1()
	{
		printf("A1 �Ҹ���\n");
	}
};

int main()
{
	A1 a;
}