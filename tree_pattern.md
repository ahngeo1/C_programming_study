# 트리 출력 코드 (tree_pattern.c)

## 코드 개요
이 코드는 사용자 입력을 받아 원하는 높이의 트리를 출력하는 프로그램입니다.
**반복문**을 사용해 코드의 간결성과 확장성을 고려하였습니다.

## 코드 동작 방식
1. **입력**
   - 사용자로부터 트리의 높이(height)를 입력받음.
2. **반복구조**
   - for 반복문을 이용해 공백과 *을 조합하여 트리 형태 출력.
3. **출력**
   - 입력된 높이에 맞는 트리 출력.
  
## 코드
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
