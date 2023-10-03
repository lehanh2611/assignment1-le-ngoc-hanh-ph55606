
#include <stdbool.h>
#include <stdio.h>

void renderMenu() {
    printf("A. Rút tiền \n");
    printf("B. Xem số dư \n");
    printf("C. Chuyển khoản \n");
    printf("D. Thoát chương chình \n");
};

void withdraw() { printf("=> Chức năng: Rút tiền \n"); }

void checkBlance() { printf("=> Chức năng: Xem số dư \n"); }

void transfer() { printf("=> Chức năng: Chuyển khoản \n"); }

int main(int argc, const char* argv[]) {
    char input;
    bool isReInput = false;

    printf("Mời chọn chức năng \n");

    do {
        isReInput = false;
        renderMenu();
        printf("=> Nhập: \n");
        scanf(" %c", &input);
        switch (input) {
        case 'a': {
            withdraw();
            break;
        }

        case 'b': {

            break;
        }

        case 'c': {

            break;
        }

        case 'd': {
            printf("=> Chức năng: Thoát chương chình \n");
            break;
        }
        default: {
            isReInput = true;
            printf("\n=> Vui lòng chọn trong (A, B, C, D) \n");
        }
        }
    } while (isReInput);

    return 0;
}
