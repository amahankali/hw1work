#include <stdio.h>
#include <stdlib.h>

int main () {

	//a + b + c = 1000
	//a + b = (1000 - c)
	//a^2 + b^2 + 2ab = 1000^2 + c^2 - 2000c
	//c^2 + 2ab = c^2 + 1000^2 - 2000c
	//2ab = 1000^2 - 2000c

	int ansA, ansB, ansC;
	ansA = ansB = ansC = -1;

	int a = 1;
	for(; a < 1000; a++)
	{
		int b = a + 1;
		int breakFlag = 0;
		for(; b < 1000; b++)
		{
			int product = 2 * a * b;
			if(product % 2000 != 0) continue;
			int c = (1000 * 1000 - product) / 2000;

			//check if currentC works
			if(c <= b) continue;

			int c1 = (a * a + b * b == c * c);
			int c2 = (a + b + c == 1000);
			if(c1 && c2)
			{
				ansA = a;
				ansB = b;
				ansC = c;
				breakFlag = 1;
				break;
			}
		}
		if(breakFlag) break;
	}
	printf("%d", ansA * ansB * ansC);

}