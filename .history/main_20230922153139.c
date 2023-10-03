#include <stdio.h>
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
        printf("Phan: %s\n", token);
        if (atoi(token)) {
        }
        token = strtok(NULL, ",");
    }

    printf("%s\n", input);
}

int main(int argc, char* argv[]) {
    programPrintOddNumber();
    return 0;
}
