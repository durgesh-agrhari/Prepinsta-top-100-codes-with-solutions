#include <stdio.h>

int total(int X[], int K)
{
    int a, b;
    for (a = 0; a < K - 1; a++){
        for (b = 0; b < K - a - 1; b++){
            if (X[b] > X[b + 1])
            {
                int temp = X[b];
                X[b] = X[b + 1];
                X[b + 1] = temp;
            }
        }
    }
}

int total_descending(int X[], int K)
{
    int a, b;
    for (a = 0; a < K; ++a)
    {
        for (b = a + 1; b < K; ++b)
        {
            if (X[a] < X[b])
            {
                int l = X[a];
                X[a] = X[b];
                X[b] = l;
            }
        }
    }
}

int main()
{
    int K;
    scanf("%d", &K);
    int arrayX[K], arrayY[K];
    int a;
    for (a = 0; a < K; a++)
    {
        scanf("%d", &arrayX[a]);
    }
    for (a = 0; a < K; a++)
    {
        scanf("%d", &arrayY[a]);
    }

    total(arrayX, K);
    total_descending(arrayY, K);
    int total = 0;
    for (a = 0; a < K; a++)
    {
        total = total + (arrayX[a] * arrayY[a]);
    }
    printf("%d", total);
    return 0;
}