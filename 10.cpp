#include <iostream>
#include <cmath>
using namespace std;
 
long long esprimo(long long n) {
	if (n % 2 == 0)
		return 0;
	for (long long i = 3; i <= (pow(n,0.5)); i += 2)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}
 
int main()
{
	unsigned long long suma = 0;
 
	for (int i = 3; i < 2000000; i += 2)
	{
		if (esprimo(i))
		{
			suma += i;
		}
	}
 
	cout << suma + 2;
 
	return 0;
}