#include <stdio.h>
#include <string.h>

#define MAX 201
int R, C, N;
char grid[MAX][MAX], g1[MAX][MAX], g2[MAX][MAX];

void fill_bombs(char g[MAX][MAX]) {
    for (int i=0;i<R;i++)
        for (int j=0;j<C;j++)
            g[i][j] = 'O';
}

void explode(char in[MAX][MAX], char out[MAX][MAX]) {
    fill_bombs(out);
    for (int i=0;i<R;i++)
        for (int j=0;j<C;j++)
            if (in[i][j]=='O') {
                out[i][j]='.';
                if (i>0) out[i-1][j]='.';
                if (i<R-1) out[i+1][j]='.';
                if (j>0) out[i][j-1]='.';
                if (j<C-1) out[i][j+1]='.';
            }
}

int main() {
    scanf("%d %d %d",&R,&C,&N);
    for (int i=0;i<R;i++) scanf("%s",grid[i]);

    if (N==1) {
        for (int i=0;i<R;i++) puts(grid[i]);
    } else if (N%2==0) {
        for (int i=0;i<R;i++) {
            for (int j=0;j<C;j++) putchar('O');
            putchar('\n');
        }
    } else {
        explode(grid,g1);
        explode(g1,g2);
        char (*ans)[MAX] = (N%4==3)? g1:g2;
        for (int i=0;i<R;i++){ ans[i][C]='\0'; puts(ans[i]); }
    }
    return 0;
}