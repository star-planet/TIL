#include <stdio.h>

#define minFinder(a, b) a < b ? a : b

int main() {
	char board[50][50];

	int N, M;
	int min = 9999;
	int cntB = 0, cntW = 0;

	scanf("%d %d", &N, &M);

	for (int i = 0; i < N; i++)
	{
		scanf("%s", &board[i]);
	}

	for (int i = 0; i <= N - 8; i++) 
	{
		for (int j = 0; j <= M - 8; j++) 
		{
			cntB = 0;
			cntW = 0;
			for (int a = i; a < i + 8; a++) 
			{
				for (int b = j; b < j + 8; b++) 
				{
					if ((a + b) % 2 == 0) 
					{
						if (board[a][b] == 'B')
							cntW++;
						else
							cntB++;
					}
					else 
					{
						if (board[a][b] == 'B')
							cntB++;
						else
							cntW++;
					}
				}
			}
			min = minFinder(min, cntB);
			min = minFinder(min, cntW);
		}
	}
	printf("%d\n", min);

	return 0;
}