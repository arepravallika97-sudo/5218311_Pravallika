#include <stdio.h>
int main(){
    unsigned long long n;
    scanf("%llu", &n);
    int zeroBits = 0;
    
    unsigned long long temp = n;
    while(temp > 0 ){
        if((temp & 1ULL) == 0){
            zeroBits++;
        }
        temp >>= 1;
    }
    
    unsigned long long result = 1ULL << zeroBits;
    printf("%llu\n", result);
    return 0;
}
