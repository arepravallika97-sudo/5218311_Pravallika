#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    int freq[100] = {0};
    
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
    }
    
    for(int i = 0; i < 100; i++){
        printf("%d", freq[i]);
        if(i < 99) {
            printf(" ");
        }
    }
    
    printf("\n");
    return 0;
}
