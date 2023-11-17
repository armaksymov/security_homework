#include <stdio.h>


void process_string(char *src)
{
	char dest[32];

	for(int i=0; src[i] && (i<=sizeof(dest)); i++)
		dest[i] = src[i];
	printf("%s\n", dest);
}

int main()
{
	process_string("The quick brown fox jumped over the lazy dog");
}
