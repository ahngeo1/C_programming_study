#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int y, z, k;
	int height;
	printf("트리의 높이를 입력하시오 : ");
	scanf("%d", &height);
	printf("*");
	for (y = 1; y < height - 2; y++)
		printf(" ");
	printf("Tree");
	for (y = 1; y < height - 2; y++)
		printf(" ");
	printf("*\n");
	for (y = 1; y < height + 1; y++)
	{
		for (z = height - 1; y - 1 < z; z--)
			printf(" ");
		for(k = 1; k < y + 1; k++)
			printf("* ");
		printf("\n");
	}
	for (y = 1; y < height; y++)
		printf(" ");
	printf("*\n");
	for (y = 1; y < height; y++)
		printf(" ");
	printf("*");
	
	return 0;
}
