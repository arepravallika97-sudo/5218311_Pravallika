#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define ALPHABET_COUNT 26

const char* pangrams(const char *s) {
    int letters[ALPHABET_COUNT] = {0};
    int count = 0;
    
    for (int i = 0; s[i] != '\0'; i++){
        if(isalpha(s[i])) {
            char lower = tolower(s[i]);
            int index = lower - 'a';
            if(letters[index] == 0) {
                letters[index] = 1;
                count++;
            }
        }
    }
    
    if (count == ALPHABET_COUNT){
        return "pangram";
    } else {
        return "not pangram";
    }
}

int main() {
    char s[1050];
    
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    
    printf("%s\n", pangrams(s));
    return 0;
}
