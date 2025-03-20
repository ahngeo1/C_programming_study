#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	int sel, a, b, i;
	int ans;
	printf("============================\n");
	printf("사칙연산 프로그램\n");
	printf("============================\n\n");

	printf("1. + 덧셈\n");
	printf("2. - 뺄셈\n");
	printf("3. + 곱셈\n");
	printf("4. + 나눗셈\n");
	printf("5. 제곱\n");
	printf("6. 거듭제곱\n");
	printf("0. 종료\n");

	printf("번호 선택 : ");
	scanf("%d", &sel);
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
			printf("%d x %d = %d\n", a, b, a * b);
		}
		else if (sel == 4)
		{
			printf("나눗셈을 합니다. 두 정수를 입력하시오 : ");
			scanf("%d %d", &a, &b);
			if (b != 0)
			{
				printf("%d / %d = %.5f\n", a, b, (float)a / b);
			}
			else
			{
				printf("0으로 나눌 수 없습니다.\n");
			}
			
		}
		else if (sel == 5)
		{
			printf("제곱을 합니다. 정수를 입력하시오 : ");
			scanf("%d", &a);
			printf("%d x %d = %d\n", a, a, a * a);
		}
		else if (sel == 6)
		{
			printf("거듭제곱을 합니다. 두 정수를 입력하시오 : ");
			scanf("%d %d", &a, &b);
			ans = 1;
			if (b >= 0)
			{
				for (i = 1; i < b + 1; i++)
				{
					ans = ans * a;
				}
				printf("%d ^ %d = %d\n", a, b, ans);
			}
			else
			{
				for (i = 1; i < -b + 1; i++)
				{
					ans = ans * a;
				}
				printf("%d ^ %d = %.5f\n", a, b, (float)1/ans);
			}

		}
		else
		{
			printf("잘못된 번호입니다. 번호를 다시 입력해주세요.\n");
		}
		printf("번호 선택 : ");
		scanf("%d", &sel);
	}
	printf("프로그램을 종료합니다.\n");
	printf("============================\n");
	return 0;
}
