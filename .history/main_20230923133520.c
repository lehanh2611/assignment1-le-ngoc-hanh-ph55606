#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// int program1() {
//     int printQuantity = 10;
//     int number;

//     printf("\nChào mừng đến với chương trình 1!\n");

//     printf("Mời nhập số:");

//     if (scanf(" %d", &number) != 1) {
//         printf("Vui lòng nhập số!\n");
//         return 0;
//     }

//     printf("Mời nhập số lượng kết quả:");
//     scanf(" %d", &printQuantity);

//     printf("Các số lẻ <= số bạn đã nhập:\n");

//     for (int i = 1; i <= printQuantity; i++) {
//         if (number % 2 == 0) {
//             number--;
//         }

//         printf("%d \n", number);
//         number--;
//     };
//     return 0;
// }

// void program2() {
//     float number;
//     bool isLoop = true;

//     printf("\nChào mừng đến với chương trình 2!\n");
//     printf("Mời nhập số:");

//     do {
//         if (scanf(" %f", &number) == 1) {
//             printf("\nSố bạn đã nhập là: %f \n", number);
//             isLoop = false;
//             break;
//         } else {
//             printf("Vui lòng nhập số:");
//         }

//         while (getchar() == "/n")
//             ;

//     } while (isLoop);
// }

// void program3() {
//     int number;

//     printf("\nChào mừng đến với chương trình 3!\n");
//     printf("Mời nhập số:");

//     if (scanf(" %d", &number) == 1) {
//         printf("Bảng nhân %d\n", number);

//         for (int i = 1; i <= 10; i++) {
//             printf("%d x %d = %d\n", number, i, number * i);
//         }
//     } else {
//         printf("Vui lòng nhập số:");
//     }
// }

// int main() {
//     int input;
//     printf("///Menu\\\\\\\n");

//     printf("1. Chương trình 1 \n");
//     printf("2. Chương trình 2 \n");
//     printf("3. Chương trình 3 \n");

//     printf("Chọn chương trình:");
//     scanf("%d", &input);

//     switch (input) {
//     case 1: {
//         program1();
//         break;
//     }
//     case 2: {
//         program2();
//         break;
//     }
//     case 3: {
//         program3();
//         break;
//     }
//     default:
//         printf("Không có lựa chọn này!\n");
//         break;
//     }

//     return 0;
// }
struct ProgramStruct {
    char* nameProgram;
    void (*program)(void);
};

void checkIntegerProgram() { printf("checkIntegerProgram\n"); }

void commonNumbersProgram() { printf("CommonNumbersProgram\n"); }

struct ProgramProviderStruct {
    int quantityProgram;
    struct ProgramStruct* programProvider[2];
};

struct ProgramProviderStruct* initializationPrograms() {
    const int quantityProgram = 2;

    // Cấp phát bộ nhớ cho một đối tượng ProgramProviderStruct
    struct ProgramProviderStruct* programProvider =
        (struct ProgramProviderStruct*)malloc(
            sizeof(struct ProgramProviderStruct));

    if (!programProvider) {
        printf("Lỗi: Không thể cấp phát bộ nhớ cho programProvider.\n");
        return NULL; // Trả về NULL nếu không thể cấp phát bộ nhớ
    }

    struct ProgramStruct checkInteger;
    struct ProgramStruct commonNumbers;

    checkInteger.program = &checkIntegerProgram;
    commonNumbers.program = &commonNumbersProgram;

    programProvider->quantityProgram = quantityProgram;
    programProvider->programProvider[0] = &checkInteger;
    programProvider->programProvider[1] = &commonNumbers;

    return programProvider;
}

int main() {
    struct ProgramProviderStruct* programProvider = initializationPrograms();

    if (!programProvider) {
        return 1; // Thoát chương trình nếu có lỗi trong quá trình khởi tạo
    }

    for (int i = 0; i < programProvider->quantityProgram; i++) {
        programProvider->programProvider[i]->program();
    }

    // Giải phóng bộ nhớ khi không cần thiết
    free(programProvider);

    return 0;
}
