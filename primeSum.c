#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Project Euler - problem 10
//0 = false, n = true
int isPrime (int n)
{
	if(n == 1) return 0;
	for(int i = 2; i <= sqrt(n); i++)
	{
		int rem = n % i;
		if(rem == 0) return 0;
	}
	return n;
}


int main()
{
	long sum = 0;
	int i = 1;
	for(; i < 2000000; i++)
	{
		sum += isPrime(i);
	}
	printf("%ld", sum);


}
