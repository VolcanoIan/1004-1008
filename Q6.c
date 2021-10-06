#include <stdio.h>

int main(void) {
    int mon, day;
    scanf("%d%d", &mon, &day);

    if ((mon == 1) && (day >= 1 || day <= 20)) {
        printf("%s", "Capricorn\n");
    }
    else if (((mon == 1) && (day >= 21 || day <= 31)) || ((mon == 2) && (day >= 1 || day <= 18))) {
        printf("%s", "Aquarius\n");
    }
    else if (((mon == 2) && (day >= 19 || day <= 28)) || ((mon == 3) && (day >= 1 || day <= 20))) {
        printf("%s", "Pisces\n");
    }
    else if (((mon == 3) && (day >= 21 || day <= 31)) || ((mon == 4) && (day >= 1 || day <= 20))) {
        printf("%s", "Aries\n");
    }
    else if (((mon == 4) && (day >= 21 || day <= 30)) || ((mon == 5) && (day >= 1 || day <= 21))) {
        printf("%s", "Taurus\n");
    }
    else if (((mon == 5) && (day >= 22 || day <= 31)) || ((mon == 6) && (day >= 1 || day <= 21))) {
        printf("%s", "Gemini\n");
    }
    else if (((mon == 6) && (day >= 22 || day <= 30)) || ((mon == 7) && (day >= 1 || day <= 22))) {
        printf("%s", "Cancer\n");
    }
    else if (((mon == 7) && (day >= 23 || day <= 31)) || ((mon == 8) && (day >= 1 || day <= 23))) {
        printf("%s", "Leo\n");
    }
    else if (((mon == 8) && (day >= 24 || day <= 31)) || ((mon == 9) && (day >= 1 || day <= 23))) {
        printf("%s", "Virgo\n");
    }
    else if (((mon == 9) && (day >= 24 || day <= 30)) || ((mon == 10) && (day >= 1 || day <= 23))) {
        printf("%s", "Libra\n");
    }
    else if (((mon == 10) && (day >= 24 || day <= 31)) || ((mon == 11) && (day >= 1 || day <= 22))) {
        printf("%s", "Scorpio\n");
    }
    else if (((mon == 11) && (day >= 23 || day <= 30)) || ((mon == 12) && (day >= 1 || day <= 21))) {
        printf("%s", "Sagittarius\n");
    }
    else if ((mon == 12) && (day >= 22 || day <= 31)) {
        printf("%s", "Capricorn\n");
    }
    
    return 0;
}