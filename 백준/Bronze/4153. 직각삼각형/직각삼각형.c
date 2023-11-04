#include <stdio.h>
#include <math.h>

int main()
{
    int edge[3], temp;
    while (1)
    {
        scanf("%d %d %d", &edge[0], &edge[1], &edge[2]);
        if (edge[0] + edge[1] + edge[2] == 0) break;
        for (int i = 0; i < 3; i++)
        {
            for (int j = i; j < 3; j++)
            {
                if (edge[j] < edge[i])
                {
                    temp = edge[i];
                    edge[i] = edge[j];
                    edge[j] = temp;
                }
            }
        }
        pow(edge[0], 2) + pow(edge[1], 2) == pow(edge[2], 2) ? printf("right\n") : printf("wrong\n");
    }
}