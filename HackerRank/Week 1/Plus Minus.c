#include <stdio.h>
#include <stdlib.h>

void plusMinus(int arr_count, int* arr) {
    int positive_count = 0, negative_count = 0, zero_count = 0;
    
    for(int i =0; i < arr_count; i++){
        if(arr[i] > 0){
            positive_count++;
        } else if(arr[i] < 0){
            negative_count++;
        } else {
            zero_count++;
        }
    }
    printf("%.6f\n",(float)positive_count/arr_count);
    printf("%.6f\n",(float)negative_count/arr_count);
    printf("%.6f\n",(float)zero_count/arr_count);
}

int main(){
    int n;
    scanf("%d",&n);
    
    int *arr = (int*)malloc(n *sizeof(int));
    for(int i = 0;i < n;i++){
        scanf("%d", &arr[i]);
    }
    
    plusMinus(n, arr);
    
    free(arr);
    return 0;
}
