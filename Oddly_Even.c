#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	int a = 0, b = 0, i = 0, n;
	char num[100];
	
	printf("Enter the number:");
	scanf("%s",num);
	n = strlen(num);
	while(n>0)
	{
		if(i==0)
		{
			a+=num[n-1]-48;
			n--;
			i=1;
		}
		else
		{
			b+=num[n-1]-48;
			n--;
			i=0;
		}
	}
	printf("%d",abs(a-b));
	return 0;
}
