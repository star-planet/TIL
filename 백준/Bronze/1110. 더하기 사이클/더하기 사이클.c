#include <stdio.h>

int main()
{
    int N, newN = 0, cnt = 0;
    scanf("%d", &N);
    newN = N;
    while (1)
    {
        N = ((N % 10) * 10) + (((N / 10) + (N % 10)) % 10);
        cnt++;
        if (newN == N) break;
    }
    printf("%d", cnt);
    return 0;
}