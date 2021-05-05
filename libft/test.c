#include <stdio.h>
#include <string.h>
int main()
{
	char s[] = "abcdf";
	size_t i = 0;
	while (*(s + i) != '\0')
		i++;
	char arr1[] = "abcdefghij";
	int arr2[] = {1, 2, 7};
	printf("%lu\n", strlen(s));
	printf("%zu\n", i);
}
