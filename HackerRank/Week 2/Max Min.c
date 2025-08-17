#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    qsort(arr, n, sizeof(int), cmp);

    int minUnfairness = arr[k-1] - arr[0];
    for (int i = 1; i <= n - k; i++) {
        int unfairness = arr[i+k-1] - arr[i];
        if (unfairness < minUnfairness) {
            minUnfairness = unfairness;
        }
    }

    printf("%d\n", minUnfairness);
    return 0;
}
