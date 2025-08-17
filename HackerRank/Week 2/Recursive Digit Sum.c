#include <stdio.h>
#include <string.h>

long long digitSum(char *n){
    long long sum = 0;
    for(int i = 0; n[i] != '\0'; i++){
        sum += (n[i] - '0');
    }
    return sum;
}
long long superDigit(long long n){
    if(n < 10){
        return n;
    }
    long long sum = 0;
    while(n>0){
        sum += n%10;
        n /= 10;
    }
    return superDigit(sum);
}
int main(){
    char n[100001];
    int k;
    scanf("%s %d", n, &k);
    long long initialSum = digitSum(n);
    long long totalSum = initialSum *k;
    printf("%lld\n", superDigit(totalSum));
    return 0;
}
