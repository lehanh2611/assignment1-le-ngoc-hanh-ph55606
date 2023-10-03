#include <stdio.h>

void programPrintOddNumber() {
    char input[10] = "";
    printf("Chào mừng đến chương trình nhận diện số lẻ \n");
    printf("Hãy nhập các số lẻ\n");

    // scanf("%s", &input);

    printf("%s\n", input);

    for (int i = 0; i < 10; i++) {
        printf("%d\n", i);
    }
}

int main(int argc, char* argv[]) { return 0; }
