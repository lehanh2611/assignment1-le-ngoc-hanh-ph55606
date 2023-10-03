#include <stdio.h>
#include <string.h>

void programPrintOddNumber() {
    const int maxLeng = 100;
    char input[maxLeng] = "";

    fgets(input, maxLeng, stdin);

    printf("Chào mừng đến chương trình nhận diện số lẻ \n");
    printf("Hãy nhập các số lẻ\n");

    scanf("%s", &input);

    printf("%s\n", input);
}

int main(int argc, char* argv[]) {
    programPrintOddNumber();
    return 0;
}
