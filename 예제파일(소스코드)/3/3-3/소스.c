__declspec(thread) int tls_i = 1;
__declspec(thread) int tls_i2 = 1;
int main()
{
	tls_i = 100;
	tls_i2 = 200;
}