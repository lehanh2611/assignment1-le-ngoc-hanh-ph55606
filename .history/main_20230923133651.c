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
struct ProgramProviderStruct {
    int quantityProgram;
    struct ProgramStruct* programProvider[2]
};

struct ProgramStruct {
    char* nameProgram;
    void (*program)(void)
};

void checkIntegerProgram() { printf("checkIntegerProgram"); }
void commonNumbersProgram() { printf("CommonNumbersProgram"); }

struct ProgramProviderStruct initializationPrograms() {
    const int quantityProgram = 2;
    struct ProgramProviderStruct programProvider;
    struct ProgramStruct checkInteger;
    struct ProgramStruct CommonNumbers;

    if (!programProvider) {
        printf("CommonNumbersProgram");
    }

    checkInteger.program = &checkIntegerProgram;
    CommonNumbers.program = &commonNumbersProgram;

    programProvider.quantityProgram = quantityProgram;
    programProvider.programProvider[0] = &checkInteger;
    programProvider.programProvider[1] = &CommonNumbers;

    return programProvider;
}

int main() {
    struct ProgramProviderStruct* programProvider = initializationPrograms();

    programProvider.programProvider[0]->program();

    // for (int i = 0; i < 2; i++) {
    //     programProvider.programProvider[i]->program();
    // }
    return 0;
};
