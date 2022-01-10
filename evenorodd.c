#include<stdio.h>
void evenorodd(int a)
{
	if (a%2==0)
	printf("%d is a even number",a);
	else 
	printf("%d is a odd number",a);
}
int main(void)
{
	evenorodd(3);
	return 0;
}
