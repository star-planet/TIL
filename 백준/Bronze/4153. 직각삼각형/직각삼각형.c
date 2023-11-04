#include <stdio.h>

int main()
{
    while (1)
    {
        int edge[3], max = 0, sum = 0;
        scanf("%d %d %d", &edge[0], &edge[1], &edge[2]);
        if (edge[0] + edge[1] + edge[2] == 0) break;
        for (int i = 0; i < 3; i++)
        {
            edge[i] *= edge[i];
            if (max < edge[i]) max = edge[i];
        }
        for (int i = 0; i < 3; i++)
        {
            if (edge[i] != max)
            {
                sum += edge[i];
            }
        }
        sum == max ? printf("right\n") : printf("wrong\n");
    }
    return 0;
}