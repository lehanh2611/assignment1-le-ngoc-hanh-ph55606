
#include <stdio.h>

int main(int argc, const char* argv[]) {
    char input;

    printf("A. Rút tiền \n");
    printf("B. Xem số dư \n");
    printf("C. Chuyển khoản \n");
    printf("D. Thoát chương chình \n");

    printf("Mời chọn chức năng! \n");
    scanf("%c", &input);

    switch (input) {
    case 'a': {
        printf("A. Rút tiền \n");
        break;
    }

    case 'b': {
        printf("B. Xem số dư \n");
        break;
    }

    case 'c': {
        printf("C. Chuyển khoản \n");
        break;
    }

    case 'd': {
        printf("D. Thoát chương chình \n");
        break;
    }
    default: {
        printf("D. Vui lòng chọn trong (A, B, C, D) \n");
    }
    }
    return 0;
}
