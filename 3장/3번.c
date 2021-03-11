#include <stdio.h>

int main()
{
	unsigned int SunToMars = 117900000;
	unsigned int SunToSkyKingStar = 2871000000;

	printf("MarsToSkyKingStar = %u\n", SunToSkyKingStar - SunToMars);
	return 0;
}