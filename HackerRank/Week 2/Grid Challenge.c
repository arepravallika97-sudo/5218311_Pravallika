#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmpfunc(const void *a, const void *b){
    return (*(char*)a-*(char*)b);
}
char* gridChallenge(char grid[][101], int n){
    for(int i =0; i<n; i++){
        qsort(grid[i], strlen(grid[i]), sizeof(char), cmpfunc);
    }
    for(int col = 0; col<n; col++){
        for(int row = 1; row<n; row++){
            if(grid[row][col] < grid[row-1][col]){
                return "NO";
            }
        }
    }
    return "YES";
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        char grid[100][101];
        for(int i = 0; i<n; i++){
            scanf("%s", grid[i]);
        }
        printf("%s\n",gridChallenge(grid,n));
    }
    return 0;
}
