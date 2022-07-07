#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

void processInput(int* running, char* input) {
    char upperInput = toupper(*input);

    if (upperInput == 'X') {
        *running = 0;
    }
}

int main() {
    system("clear");
    printf("\n  \033[1;34mCALCULATING THE PI\033[0;m\n\n");
    printf("    \033[0;36mCalculate the value of PI\n    by using Nilakantha's Series\n\n");
    printf("    Instructions:\n");
    printf("    - Press <ENTER> to continue to the next iteration.\n");
    printf("    - Press  x  then <ENTER> to terminate the program. (or <Ctrl-c>)\033[0m\n\n");

    char input;
    double PI = 3.0;
    int running = 1;
    int sign = 1;
    int n = 1;

    while (running) {
        PI += sign * (4.0 / ((2*n) * (2*n+1) * (2*n+2)));
        sign *= -1;
        printf("    \033[0;35m%-7d \033[0;33m%.14f\033[0m", n, PI);
        
        scanf("%c", &input);
        n++;

        processInput(&running, &input);
    }

    return 0;
}
