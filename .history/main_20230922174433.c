#include <stdio.h>

void program1() {
    const int printQuantity = 10;
    int number;

    printf("Chào mừng đến với chương trình 1\n");

    printf("Mời nhập số:\n");
    scanf(" %d", &number);

    printf("Các số lẻ <= số bạn đã nhập:\n");

    for (int i = 0; i < 3; i++) {
        if (number % 2 == 0) {
            --number;
        }

        printf("%d \n", number);
        number--;
    };
}
int main() {
    program1();

    return 0;
}