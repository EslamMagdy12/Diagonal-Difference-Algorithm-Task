#include <stdio.h>
#include <math.h>
int diagonalDifference(int n, int arr[][n]) {
    int primaryDiagonal = 0, secondaryDiagonal = 0;
    for(int i = 0; i <= n - 1; i++) {
        for(int j = 0; j <= n - 1; j++) {
            if(i == j) {
                primaryDiagonal = primaryDiagonal + arr[i][j];
            }
            if(i == n - j - 1) {
                secondaryDiagonal = secondaryDiagonal + arr[i][j];
            }
        }
    }
    return abs(primaryDiagonal - secondaryDiagonal);
}
int main() {
    int n;
    scanf("%d", &n);
    int arr[n][n];
    for(int i = 0; i <= n - 1; i++) {
        for(int j = 0; j <= n - 1; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("%d", diagonalDifference(n, arr));
}
