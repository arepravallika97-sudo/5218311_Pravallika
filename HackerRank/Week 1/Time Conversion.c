#include <stdio.h>
#include <stdlib.h>

void timeConversion(char time[]) {
    int hour, minute, second;
    char meridiem[3];
    
    sscanf(time, "%d:%d:%d%2s", &hour, &minute, &second, meridiem);
    
    if(strcmp(meridiem, "AM") == 0) {
        if(hour == 12) {
            hour = 0;
        }    
    } else {
        if(hour != 12) {
            hour += 12;
        }
    }
    
    printf("%02d:%02d:%02d\n", hour, minute, second);
    
}
int main() {
    char input[11];
    scanf("%s", input);
    
    timeConversion(input);
    
    return 0;
}
