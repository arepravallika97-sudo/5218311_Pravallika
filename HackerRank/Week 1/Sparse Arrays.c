#include <stdio.h>
#include <string.h>

void matchingStrings(int n, char strings[n][21], int q, char queries[q][21]){
    for (int i = 0; i < q; i++){
        int count = 0;
        for(int j = 0; j < n; j++) { 
            if(strcmp(queries[i], strings[j]) == 0) {
                count++;
            }
        }
        printf("%d\n",count);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    char strings[n][21];
    for(int i = 0; i < n; i++){
        scanf("%s", strings[i]);
    }
    int q;
    scanf("%d", &q);
    char queries[q][21];
    for(int i = 0; i < q; i++){
        scanf("%s", queries[i]);
    }
    matchingStrings(n, strings, q, queries);
    
    return 0;
}
