
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
    bool isReInput = false;

    printf("Mời chọn chức năng \n");

    do {
        renderMenu();
        printf("=> Nhập: \n");
        scanf(" %c", &input);
        switch (input) {
        case 'a': {
            printf("=> Chức năng: Rút tiền \n");
            break;
        }

        case 'b': {
            printf("=> Chức năng: Xem số dư \n");
            break;
        }

        case 'c': {
            printf("=> Chức năng: Chuyển khoản \n");
            break;
        }

        case 'd': {
            printf("=> Chức năng: Thoát chương chình \n");
            break;
        }
        default: {
            isReInput = true;
            printf("=> Vui lòng chọn trong (A, B, C, D) \n");
        }
        }
    } while (isReInput);

    return 0;
}
