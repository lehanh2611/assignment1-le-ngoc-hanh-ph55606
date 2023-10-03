
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
    bool isValidInput = false;

    printf("Mời chọn chức năng \n");
    renderMenu();

    scanf(" %c", &input);

    do {

    } while (!isValidInput);

    return 0;
}
