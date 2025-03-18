# 트리 출력 코드 (tree_pattern.c)

## 코드 개요
이 코드는 사용자 입력을 받아 원하는 높이의 트리를 출력하는 프로그램입니다.

**반복문**을 사용해 코드의 간결성과 확장성을 고려하였습니다.
[트리 출력 코드](https://github.com/ahngeo1/C_programming_study/blob/main/%ED%8A%B8%EB%A6%AC%20%EC%9E%85%EB%A0%A5%20%EB%B0%9B%EC%95%84%EC%84%9C%20%EC%B6%9C%EB%A0%A5%20%EC%BD%94%EB%93%9C.c)

## 코드 동작 방식
1. **입력**
   - 사용자로부터 트리의 높이(height)를 입력받음.
2. **반복구조**
   - for 반복문을 이용해 공백과 *을 조합하여 트리 형태 출력.
3. **출력**
   - 입력된 높이에 맞는 트리 출력.
  
## 코드
```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int y, z, k; // 반복문에 활용할 변수 선언
	int height; // 트리의 높이를 저장할 변수 선언

	// 사용자로부터 트리의 높이를 입력 받음
	printf("트리의 높이를 입력하시오 : ");
	scanf("%d", &height);

 	//트리의 높이에 맞는 너비의 제목 출력
	printf("*");
	for (y = 1; y < height - 2; y++)
		printf(" ");
	printf("Tree");
	for (y = 1; y < height - 2; y++)
		printf(" ");
	printf("*\n");

 	// 1부터 입력된 높이까지 반복
	for (y = 1; y < height + 1; y++)
	{

 		// 트리의 모양에 맞춰 공백 출력
		for (z = height - 1; y - 1 < z; z--)
			printf(" ");
   
   		// 층에 맞는 개수의 별 출력
		for(k = 1; k < y + 1; k++)
			printf("* ");

   		// 한 층 출력 후 줄바꿈
		printf("\n");
	}

 	// 트리의 기둥 출력 (중앙을 맞춰 공백 출력)
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
- 입력값 검증 기능 추가 (음수 등 예외 처리)
- 함수로 기능 분리하여 가독성 향상 가
