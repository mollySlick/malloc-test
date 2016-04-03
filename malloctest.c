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
	int i = 0;
	char* block = malloc(count);

	for (i; i < count; i++)
	{
		printf("%02x\r\n", block[i]);
	}

	free(block);
	return 0;
}
