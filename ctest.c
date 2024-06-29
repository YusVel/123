#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint8_t var = 0;
uint16_t result = 0;

extern int asmfunc();

int main()
{
	printf("Enter x: ");
	int rc = scanf("%hhd", &var);
	result = asmfunc();
	printf("res = %hu (%d)\n", result, var);
	return 0;
}
