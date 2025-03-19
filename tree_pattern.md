# 트리 출력 코드 (tree_pattern.c)

[GitHub 소스 코드 보기](https://github.com/ahngeo1/C_programming_study/blob/main/tree_pattern.c)

## 코드 개요
이 코드는 사용자 입력을 받아 원하는 높이의 트리를 출력하는 프로그램입니다.

반복문을 사용해 코드의 간결성과 확장성을 고려하였습니다.



## 코드 동작 방식
- 사용자로부터 트리의 높이(height)를 입력받음.
- for 반복문을 이용해 공백과 별(*)을 조합하여 트리 형태 출력.
- 입력된 높이에 맞는 트리 및 기둥 출력.
  
## 코드
```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int y, z, k; // 반복문 변수
	int height; // 트리의 높이 입력 변수

	// 사용자로부터 트리의 높이를 입력 받기
	printf("트리의 높이를 입력하시오 : ");
	scanf("%d", &height);

 	//트리 제목 출력
	printf("*");
	for (y = 1; y < height - 2; y++)
		printf(" ");
	printf("Tree");
	for (y = 1; y < height - 2; y++)
		printf(" ");
	printf("*\n");

 	// 트리 본체 출력
	for (y = 1; y < height + 1; y++)
	{

 		// 공백 출력
		for (z = height - 1; y - 1 < z; z--)
			printf(" ");
   
   		// 별 출력
		for(k = 1; k < y + 1; k++)
			printf("* ");

   		// 줄바꿈
		printf("\n");
	}

 	// 트리 기둥 출력
	for (y = 1; y < height; y++)
		printf(" ");
	printf("*\n");
	for (y = 1; y < height; y++)
		printf(" ");
	printf("*");
	
	return 0; // 프로그램 종료
}
```

## 확장 가능성
- 트리 외 다양한 패턴 출력 기능 추가
- 입력값 검증 기능 추가 (음수, 0 등 예외 처리)
- 기능을 함수로 분리하여 코드 가독성 및 재사용성 향상
- 다른 출력 기호 적용
