#include <stdio.h>
#include <stdlib.h>

int diagonalDifference(int arr[][100], int n) {
    int primarySum = 0;
    int secondarySum = 0;
    
    
    for(int i = 0; i < n; i++){
        primarySum += arr[i][i];
        secondarySum += arr[i][n - 1 - i];
    }
    return abs(primarySum - secondarySum);
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[100][100];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    
    printf("%d\n", diagonalDifference(arr, n));
    return 0;
}
