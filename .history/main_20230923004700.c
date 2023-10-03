#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

void program1() {
    int printQuantity = 10;
    int number;

    printf("Chào mừng đến với chương trình 1\n");

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
    // float number;
    // bool isLoop = true;
    // int i = 0;

    char input[100]; // Khai báo một mảng để lưu dữ liệu đọc vào

    printf("Nhập chuỗi: ");
    fgets(input, sizeof(input),
          stdin); // Đọc dữ liệu từ luồng đầu vào và lưu vào mảng input

    printf("Chuỗi đã được đọc: %s", input);

    //    printf("Chào mừng đến với chương trình 1\n");
    printf("Mời nhập số %d:", getchar());

    //    do {
    //        scanf("%f", &number);
    //        // printf("%d \n", isdigit("a"));
    //
    //        // if (number - number == 0) {
    //        //     printf("%f \n", number);
    //        //     isLoop = false;
    //        //     break;
    //        // }
    //        printf("Vui lòng nhập lại:");
    //        while (getchar() != '\n')
    //            ;
    //        i++;
    //    } while (i < 10);
}

int main() {
    program2();

    return 0;
}
