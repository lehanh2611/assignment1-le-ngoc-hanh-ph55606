
#include <stdbool.h>
#include <stdio.h>

void renderMenu() {
    printf("A. Rút tiền \n");
    printf("B. Xem số dư \n");
    printf("C. Chuyển khoản \n");
    printf("D. Thoát chương chình \n");
};

int main(int argc, const char* argv[]) {
    char input;
    bool isReinput = false;

    printf("Mời chọn chức năng \n");
    printf("=> Nhập:");

    do {
        renderMenu();
        printf("=> Nhập:");
        scanf(" %c", &input);
        switch (input) {
        case 'a': {
            printf("=> Bạn đã chọn Rút tiền \n");
            break;
        }

        case 'b': {
            printf("=> Bạn đã chọn Xem số dư \n");
            break;
        }

        case 'c': {
            printf("=> Bạn đã chọn Chuyển khoản \n");
            break;
        }

        case 'd': {
            printf("=> Bạn đã chọn Thoát chương chình \n");
            break;
        }
        default: {
            isReinput = true printf("=> Vui lòng chọn trong (A, B, C, D) \n");
        }
        }
    } while (!isValidInput);

    return 0;
}