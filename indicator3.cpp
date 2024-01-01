#include<stdio.h>
#include<string.h>

int main()
{
	char str[50] = "abcd";

	printf("The given string is = %s\n", str);

	printf("After reversing the string is = %s", strrev(str));

	return 0;
}
