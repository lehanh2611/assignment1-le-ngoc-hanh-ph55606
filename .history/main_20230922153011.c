#include <stdio.h>
#include <string.h>

void programPrintOddNumber() {
    char* token;
    const int maxLeng = 100;
    char input[maxLeng] = "";

    printf("Chào mừng đến chương trình nhận diện số lẻ \n");
    printf("Hãy nhập các số lẻ\n");

    token = strtok(input, " ");

    fgets(&input, maxLeng, stdin);
    while (token != NULL) {
        // Xử lý phần tử hiện tại ở đây
        printf("Phan: %s\n", token);

        // Gọi strtok(NULL, ",") để tiếp tục tách từ vị trí hiện tại
        token = strtok(NULL, ",");
    }

    printf("%s\n", input);
}

int main(int argc, char* argv[]) {
    programPrintOddNumber();
    return 0;
}
