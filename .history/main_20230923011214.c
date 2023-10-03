#include <stdbool.h>
#include <stdio.h>

void program1() {
    int printQuantity = 10;
    int number;

    printf("Chào mừng đến với chương trình 1!\n");

    printf("Mời nhập số:");

    printf("Mời nhập số lượng kết quả:");
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
    float number;
    bool isLoop = true;

    printf("Chào mừng đến với chương trình 2!\n");
    printf("Mời nhập số:");

    do {
        if (scanf(" %f", &number) == 1) {
            printf("%f \n", number);
            isLoop = false;
            break;
        }
        printf("Vui lòng nhập số:");

        while (getchar() == "/n")
            ;

    } while (isLoop);
}

void program3() {
    int number;
    printf("Chào mừng đến với chương trình 3!\n");
    printf("Mời nhập số:");
    scanf("%d", &number);
    if (scanf(" %f", &number) == 1) {
        printf("%f \n", number);
        for (int i = 0; i < 10; i++) {
            printf("&d x &d", number, i);
        }
    }
}

int main() {
    program2();

    return 0;
}
