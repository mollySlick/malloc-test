/* 
Check the initial values of malloc()

Compile with:
gcc file.c
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int count = 8;
	int i,j = 0;
	int iterations = 1024;

	for (j; j < iterations; j++)
	{
	char* block = malloc(count);

	for (i; i < count; i++)
	{
		if (block[i] != 0)
		{
			printf("malloc does not set initial values to zero.");
		}
	}

	free(block);
	}
	return 0;
}
