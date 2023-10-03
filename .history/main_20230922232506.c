#include <stdio.h>

void program1() {
    int printQuantity = 10;
    int number;

    printf("Chào mừng đến với chương trình 1\n");

    printf("Mời nhập số:\n");

    printf("Mời nhập số lượng kết quả:\n");
    scanf(" %d", &printQuantity);

    printf("Các số lẻ <= số bạn đã nhập:\n");

    for (int i = 1; i <= printQuantity; i++) {
        if (number % 2 == 0) {
            number--;
        }

        printf("%d \n", number);
        number--;
    };
}

void program2() {
    int number;

    printf("Chào mừng đến với chương trình 1\n");
    printf("Mời nhập số:\n");
}

int main() {
    program1();

    return 0;
}