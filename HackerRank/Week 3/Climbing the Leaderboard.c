#include <stdio.h>
int main(){
    int n, m;
    scanf("%d", &n);
    int scores[n];
    for(int i = 0; i<n; i++) scanf("%d", &scores[i]);
    
    scanf("%d", &m);
    int alice[m];
    for(int i = 0; i<m; i++) scanf("%d", &alice[i]);
    
    int rank[n], r = 1;
    rank[0] = 1;
    for (int i = 1; i<n; i++){
        if(scores[i] == scores[i-1])rank[i] = r;
        else rank[i] = ++r;
    }
    int j = n-1;
    for(int i = 0; i<m; i++){
        while(j >= 0 && alice[i] >= scores[j]) j--;
        if(j<0) printf("1\n");
        else printf("%d\n", rank[j] + 1);
    }
    return 0;
}