#include <stdio.h>

void program1() {
    int inputNumber;
    printf("Chào mừng đến với chương trình 1\n");
    printf("Mời nhập số:\n");
    scanf(" %d", &inputNumber);
    printf("Mời nhập số:\n");

    for (int i = 0; i < 3; i++) {
        if (inputNumber % 2 == 0) {
            --inputNumber
        }
    }
}
int main() {
    program1();

    return 0;
}