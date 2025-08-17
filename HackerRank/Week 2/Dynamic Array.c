#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    long long *data;
    int size;
    int capacity;
} Node;

void append(Node *arr, long long value){
    if(arr->size == arr->capacity){
        arr->capacity = (arr->capacity == 0) ? 2: arr->capacity*2;
        arr->data = realloc(arr->data, arr->capacity*sizeof(long long));
    }
    arr->data[arr->size++] = value;
}

int main(){
    int n, q;
    scanf("%d %d", &n, &q);
    Node *arr = calloc(n, sizeof(Node));
    long long lastAnswer = 0;
    
    for(int i = 0; i<q; i++){
        int type;
        long long x,y;
        scanf("%d %lld %lld", &type, &x, &y);
        int idx = (x^lastAnswer)%n;
        if(type==1){
            append(&arr[idx],y);
        } else if(type == 2){
            lastAnswer = arr[idx].data[y % arr[idx].size];
            printf("%lld\n", lastAnswer);
        }
    }
    for(int i = 0; i<n; i++){
        free(arr[i].data);
    }
    free(arr);
    return 0;
}
