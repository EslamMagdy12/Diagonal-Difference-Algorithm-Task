#include <stdio.h>
#include <math.h>
int diagonalDifference(int n, int arr[][n], int i)
{
    if (i == n)
    {
        return 0;
    }
    return arr[i][i] - arr[i][n - i - 1] + diagonalDifference(n, arr, i + 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("%d", abs(diagonalDifference(n, arr, 0)));
}