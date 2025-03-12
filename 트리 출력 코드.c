#include <stdio.h>

int main(void) {
	int y, z, k;
	printf("*   Tree   *\n");
	for (y = 1; y < 7; y++)
	{
		for (z = 5; y-1 < z; z--)
			printf(" ");
		for(k=1;k<y+1;k++)
			printf("* ");
		printf("\n");
	}
	printf("     *\n");
	printf("     *");
	return 0;
}