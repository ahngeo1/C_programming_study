#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	int sel, a, b, i;
	int ans;
	printf("============================\n");
	printf("��Ģ���� ���α׷�\n");
	printf("============================\n\n");

	printf("1. + ����\n");
	printf("2. - ����\n");
	printf("3. + ����\n");
	printf("4. + ������\n");
	printf("5. ����\n");
	printf("6. �ŵ�����\n");
	printf("0. ����\n");

	printf("��ȣ ���� : ");
	scanf("%d", &sel);
	while (sel != 0)
	{
		if (sel == 1)
		{
			printf("������ �մϴ�. �� ������ �Է��Ͻÿ� : ");
			scanf("%d %d", &a, &b);
			printf("%d + %d = %d\n", a, b, a + b);
		}
		else if (sel == 2)
		{
			printf("������ �մϴ�. �� ������ �Է��Ͻÿ� : ");
			scanf("%d %d", &a, &b);
			printf("%d - %d = %d\n", a, b, a - b);
		}
		else if (sel == 3)
		{
			printf("������ �մϴ�. �� ������ �Է��Ͻÿ� : ");
			scanf("%d %d", &a, &b);
			printf("%d x %d = %d\n", a, b, a * b);
		}
		else if (sel == 4)
		{
			printf("�������� �մϴ�. �� ������ �Է��Ͻÿ� : ");
			scanf("%d %d", &a, &b);
			if (b != 0)
			{
				printf("%d / %d = %.5f\n", a, b, (float)a / b);
			}
			else
			{
				printf("0���� ���� �� �����ϴ�.\n");
			}
			
		}
		else if (sel == 5)
		{
			printf("������ �մϴ�. ������ �Է��Ͻÿ� : ");
			scanf("%d", &a);
			printf("%d x %d = %d\n", a, a, a * a);
		}
		else if (sel == 6)
		{
			printf("�ŵ������� �մϴ�. �� ������ �Է��Ͻÿ� : ");
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
			printf("�߸��� ��ȣ�Դϴ�. ��ȣ�� �ٽ� �Է����ּ���.\n");
		}
		printf("��ȣ ���� : ");
		scanf("%d", &sel);
	}
	printf("���α׷��� �����մϴ�.\n");
	printf("============================\n");
	return 0;
}