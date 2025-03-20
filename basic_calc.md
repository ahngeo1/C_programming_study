# 사칙연산 계산기 프로그램 (basic_calc.c)

[GitHub 소스 코드 보기](https://github.com/ahngeo1/C_programming_study/blob/main/basic_calc.c)

## 코드 개요
C 언어로 작성한 간단한 사칙연산 계산기 프로그램입니다.
사용자가 선택한 연산에 따라 덧셈, 뺄셈, 곱셈, 나눗셈, 제곱, 거듭제곱 연산을 수행할 수 있습니다.
입력값을 받아 조건문을 통해 처리하며, 나눗셈의 경우 0으로 나누기 오류를 예외 처리하고, 거듭곱 연산에서는 음수 지수도 지원합니다.

## 코드 설명
- 메뉴 출력 → 사용자 입력 → 연산 수행 → 반복 구조로 작성
- 조건문(if-else)을 통해 선택된 연산 처리
- while 루프로 0번 입력 전까지 반복 실행
- 나눗셈 연산 시 0으로 나누기 예외 처리
- 거듭제곱 연산에서 음수 지수 입력 시 역수 처리

## 코드
```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	int sel, a, b, i; // 연산자, 숫자, 반복문 변수
	int ans; // 거듭제곱을 위한 변수

	// 제목 출력
	printf("============================\n");
	printf("사칙연산 프로그램\n");
	printf("============================\n\n");


	// 연산자 보기 출력
	printf("1. +  덧셈\n");
	printf("2. -  뺄셈\n");
	printf("3. ×  곱셈\n");
	printf("4. ÷  나눗셈\n");
	printf("5. a² 제곱\n");
	printf("6. aⁿ 거듭제곱\n");
	printf("0. 종료\n");

	// 연산자 선택
	printf("번호 선택 : ");
	scanf("%d", &sel);
	// 0 입력 전까지 반복 실행행
	while (sel != 0)
	{
		if (sel == 1)
		{
			printf("덧셈을 합니다. 두 정수를 입력하시오 : ");
			scanf("%d %d", &a, &b);
			printf("%d + %d = %d\n", a, b, a + b);
		}
		else if (sel == 2)
		{
			printf("뺄셈을 합니다. 두 정수를 입력하시오 : ");
			scanf("%d %d", &a, &b);
			printf("%d - %d = %d\n", a, b, a - b);
		}
		else if (sel == 3)
		{
			printf("곱셈을 합니다. 두 정수를 입력하시오 : ");
			scanf("%d %d", &a, &b);
			printf("%d × %d = %d\n", a, b, a * b);
		}
		else if (sel == 4)
		{
			printf("나눗셈을 합니다. 두 정수를 입력하시오 : ");
			scanf("%d %d", &a, &b);
			if (b != 0)
			{
				printf("%d ÷ %d = %.5f\n", a, b, (float)a / b); // 실수형 출력력
			}
			else // 예외 처리
			{
				printf("0으로 나눌 수 없습니다.\n");
			}
			
		}
		else if (sel == 5)
		{
			printf("제곱을 합니다. 정수를 입력하시오 : ");
			scanf("%d", &a);
			printf("%d² = %d\n", a, a * a);
		}
		else if (sel == 6)
		{
			printf("거듭제곱을 합니다. 두 정수를 입력하시오 : ");
			scanf("%d %d", &a, &b);
			ans = 1;
			// 지수 부호 고려
			if (b >= 0)
			{
				for (i = 1; i <= b; i++)
				{
					ans = ans * a;
				}
				printf("%d ^ %d = %d\n", a, b, ans);
			}
			else
			{
				for (i = 1; i <= -b; i++)
				{
					ans = ans * a;
				}
				printf("%d ^ %d = %.5f\n", a, b, (float)1/ans);
			}

		}
		else // 잘못된 입력 고려
		{
			printf("잘못된 번호입니다. 번호를 다시 입력해주세요.\n");
		}
		printf("번호 선택 : ");
		scanf("%d", &sel);
	}
	// 프로그램 종료
	printf("프로그램을 종료합니다.\n");
	printf("============================\n");
	return 0;
}
```

## 확장 가능성
- while문을 do-while로 바꿔서 가독성 개선
- 함수 분리
- switch-case 문 사용
