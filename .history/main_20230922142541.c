#include <stdio.h>

void programPrintOddNumber() {
    char input[10] = "";
    printf("Chào mừng đến chương trình nhận diện số lẻ \n");
    printf("Hãy nhập các số lẻ\n");

    scanf("%s", &input);

    printf("%s\n", input);
}

int main(int argc, char* argv[]) {
    programPrintOddNumber();
    return 0;
}
