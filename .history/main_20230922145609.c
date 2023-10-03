#include <stdio.h>
#include <string.h>

void programPrintOddNumber() {
    const int maxLeng = 100;
    char input[maxLeng] = "";

    printf("Chào mừng đến chương trình nhận diện số lẻ \n");
    printf("Hãy nhập các số lẻ\n");

    fgets(&input, maxLeng, stdin);

    scanf("%s", &input);

    printf("%s\n", input);
}

int main(int argc, char* argv[]) {
    programPrintOddNumber();
    return 0;
}
