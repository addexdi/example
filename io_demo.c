#include <stdio.h>

int main(void)
{
	char f,m,l;
	int age;

	printf("Enter you intials, followed by your age: ");
	scanf("%c %c %c %d", &f, &m, &l, &age);
	printf("My intials are: %c%c%c and my age is %d.\n", f, m, l, age);
	return(0);
}
