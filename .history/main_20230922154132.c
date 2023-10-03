#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void programPrintOddNumber() {
    char* token;
    const int maxLeng = 100;
    char input[maxLeng] = "";

    printf("Chào mừng đến chương trình nhận diện số lẻ \n");
    printf("Hãy nhập các số lẻ\n");

    token = strtok(input, " ");

    fgets(&input, maxLeng, stdin);
    while (token != NULL) {
        // printf("Phan: %s\n", token);
        if (aio(token) - strtod(token, NULL) == 0) {
            printf("Is Int: %s\n", token);
        } else {
            if (strtod(token, NULL) - strtod(token, NULL) == 0) {
                printf("Is float: %s\n", token);
            } else {
                printf("??: %s\n");
            }
        }
        token = strtok(NULL, ",");
    }

    printf("%s\n", input);
}

int main(int argc, char* argv[]) {
    programPrintOddNumber();
    return 0;
}
