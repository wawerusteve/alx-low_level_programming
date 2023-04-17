#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints the name of file it was compiled from
 *
 *Return:(0) - success
 *
 */
int main(void)
{
	printf("%s\n", _FILE_);
	return (0);
}

