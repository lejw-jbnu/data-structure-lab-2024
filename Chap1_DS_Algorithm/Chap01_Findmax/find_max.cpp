#include <cstdio>

int findArrayMax(int score[], int n) // �־��� �迭 �ӿ��� �ִ밪 ã�� �Լ�
{
	int tmp = score[0];
	for (int i = 1; i < n;i++)
	{
		if (score[i] > tmp)
		{
			tmp = score[i];
		}
	}
	return tmp;
}

void main()
{
	int score[5] = { 1,10,2,4,5 };
	int out;
	out = findArrayMax(score, 5);
	printf("result=%d",out);
}