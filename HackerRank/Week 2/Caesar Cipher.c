#include <ctype.h>
#include <stdio.h>
#include <string.h>

void caesarCipher(char *s, int k){
    k = k%26;
    for(int i = 0; s[i] != '\0'; i++){
        if(isalpha(s[i])){
            if(islower(s[i])){
                s[i] = ((s[i] - 'a'+k) % 26) + 'a';
            }else if(isupper(s[i])){
                s[i] = ((s[i] - 'A'+k)% 26) + 'A';
            }
        }
    }
}

int main(){
    int n,k;
    char s[105];
    
    scanf("%d", &n);
    scanf("%s", s);
    scanf("%d", &k);
    
    caesarCipher(s, k);
    printf("%s\n", s);
    
    return 0;
}
