#include<stdio.h>
#include <windows.h>
int main(int argc, char *argv[])

{
														system("color b");
	int i, num, p = 0;
	printf("Please enter a number : ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			p++;
		}
	}
														system("color a");
	if(p==2)
	{
		printf("Entered number is %d"\
		"and it is a prime number.",num);
	}
	else
														system("color c");
	{
		printf("Entered number is %d "\
		"and it is not a prime number",num);
	}
	return 0;
	
}
