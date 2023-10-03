#include <stdio.h>

void program1() {
    int printQuantity = 10;
    int number;

    printf("%d printQuantity", printQuantity--);
    printf("%d printQuantity", printQuantity);

    printf("Chào mừng đến với chương trình 1\n");

    printf("Mời nhập số:\n");
    if (!scanf(" %d", &number)) {
        printf("Chương trình chỉ hỗ trợ số nguyên!:\n");
    }

    printf("Mời nhập số lượng kết quả:\n");
    scanf(" %d", &printQuantity);

    printf("Các số lẻ <= số bạn đã nhập:\n");

    for (int i = 1; i <= printQuantity; i++) {
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