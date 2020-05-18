
#include "test.h"




//int main()
//{
//	printf("%d\n", g_val);
//
//	printf("%d\n", MyAdd(10, 20));
//	printf("%d\n", MyDiv(20, 10));
//	return 0;
//}



int main()
{
	int A = 16;
	int B = 24;
	scanf("%d%d", &A, &B);
//	int temp = 0;
	int i = 0;

	//if (A < B)
	//{
	//	temp = B;
	//	B = A;
	//	A = temp;
	//}
	i = A > B ? A : B;
	int start1 = GetTickCount();
	while (i)
	{
		if (0 == i % A && 0 == i % B)
		{
			printf("%d\n", i);
			break;
		}
		i++;
	}
	int end1 = GetTickCount();
	printf("%d\n", end1 - start1);

	i = A;
	int start2 = GetTickCount();
	for (; i <= A * B; i++)
	{
		if (0 == i % A && 0 == i % B)
		{
			printf("%d\n", i);
			break;
		}
	}
	int end2 = GetTickCount();
	printf("%d\n", end2 - start2);

	return 0;
}