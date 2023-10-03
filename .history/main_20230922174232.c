#include <stdio.h>

void program1() {
    int inputNumber;
    printf("Chào mừng đến với chương trình 1\n");
    printf("Mời nhập số:\n");
    scanf(" %d", &inputNumber);

    printf("Các số lẻ <= số bạn đã nhập:\n");

    for (int i = 0; i < 3; i++) {
        if (inputNumber % 2 == 0) {
            --inputNumber;
        }

        printf("%d \n", inputNumber);
    };
}
int main() {
    program1();

    return 0;
}