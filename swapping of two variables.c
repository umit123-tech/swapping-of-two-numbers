#include<stdio.h>

int main()
{
	int a=10, b=5;
	
	a = a + b;
	b = a - b;
	a = a - b;
	
	printf("after swapping :a =%d,b = %d",a,b);
	return 0;
}
