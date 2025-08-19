#include <stdio.h>
#include <string.h>

#define MAX 26
void isValidString(char *s){
    int freq[MAX] = {0};
    int len = strlen(s);
    
    for(int i = 0; i<len; i++){
        freq[s[i] - 'a']++;
    }
    int freqCount[MAX],k = 0;
    for(int i = 0 ; i <MAX; i++){
        if(freq[i] > 0){
            freqCount[k++] = freq[i];
        }
    }
    int min =freqCount[0], max = freqCount[0];
    for(int i = 1; i<k; i++){
        if(freqCount[i] < min)min =freqCount[i];
        if(freqCount[i] > max)max = freqCount[i];
    }
    int minCount = 0 ,maxCount = 0;
    for(int i =0; i<k; i++){
        if(freqCount[i] == min)minCount++;
        if(freqCount[i] == max)maxCount++;
    }
    if(min == max){
        printf("YES\n");
        return;
    }
    if(min == 1 && minCount == 1 && maxCount == k-1){
        printf("YES\n");
        return;
    }
    if((max - min == 1)&& maxCount == 1 && minCount == k-1){
        printf("YES\n");
        return;
    }
    printf("NO\n");
}
int main(){
    char s[100005];
    scanf("%s", s);
    isValidString(s);
    return 0;
}