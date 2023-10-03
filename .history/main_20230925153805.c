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

//     while (isLoop) {
//         if (scanf(" %f", &number) == 1) {
//             printf("\nSố bạn đã nhập là: %f \n", number);
//             isLoop = false;
//             break;
//         } else {
//             printf("Vui lòng nhập số:");
//         }

//         while (getchar() == "/n")
//             ;
//     };
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

// void sayHello(char name[]) {
//     printf("Xin chào %s! \n", name);

//     // do {
//     // } while (false);
// }

// int main() {
//     char name[] = "Hải Trần";
//     sayHello(name);

//     return 0;
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
    int quantity;
    struct ProgramStruct* programs[5]
};

struct ProgramStruct {
    char* name;
    void (*program)(void);
};

void checkIntegerProgram() { printf("checkIntegerProgram"); }
void commonNumbersProgram() { printf("CommonNumbersProgram"); }
void billingKaraokeProgram() { printf("billingKaraokeProgram"); }
void calculateElectricityProgram() { printf("calculateElectricityProgram"); }
void moneyExchangeProgram() { printf("moneyExchangeProgram"); }
void calculateLoanInterestProgram() { printf("calculateLoanInterestProgram"); }
void borrowMoneyBuyCarProgram() { printf("borrowMoneyBuyCarProgram"); }
void studentPlacementProgram() { printf("studentPlacementProgram"); }
void studentPlacementProgram() { printf("studentPlacementProgram"); }
void gameFPOLY - LOTTProgram() { printf("studentPlacementProgram"); }

struct ProgramProviderStruct* initializationPrograms() {
    const int quantity = 5;
    struct ProgramProviderStruct* programProvider =
        malloc(sizeof(struct ProgramProviderStruct));

    struct ProgramStruct* CheckInteger = malloc(sizeof(struct ProgramStruct));
    struct ProgramStruct* CommonNumbers = malloc(sizeof(struct ProgramStruct));
    struct ProgramStruct* BillingKaraoke = malloc(sizeof(struct ProgramStruct));
    struct ProgramStruct* CalculateElectricityProgram =
        malloc(sizeof(struct ProgramStruct));
    struct ProgramStruct* MoneyExchangeProgram =
        malloc(sizeof(struct ProgramStruct));
    struct ProgramStruct* CalculateLoanInterest =
        malloc(sizeof(struct ProgramStruct));
    struct ProgramStruct* BorrowMoneyBuyCarProgram =
        malloc(sizeof(struct ProgramStruct));
    struct ProgramStruct* StudentPlacementProgram =
        malloc(sizeof(struct ProgramStruct));

    CheckInteger->name = "Kiểm Tra Số Nguyên";
    CheckInteger->program = &checkIntegerProgram;

    CommonNumbers->name = "Tìm Ước Số Chung Và Bội Số Chung Của 2 Số";
    CommonNumbers->program = &commonNumbersProgram;

    BillingKaraoke->name = "Tính Tiền Cho Quán Karaoke";
    BillingKaraoke->program = &billingKaraokeProgram;

    CalculateElectricityProgram->name = "Tính Tiền Điện";
    CalculateElectricityProgram->program = &calculateElectricityProgram;

    MoneyExchangeProgram->name = "Đổi Tiền";
    MoneyExchangeProgram->program = &moneyExchangeProgram;

    CalculateLoanInterest->name = "Tính Lãi Suất Vay Ngân Hàng Vay Trả Góp";
    CalculateLoanInterest->program = &calculateLoanInterestProgram;

    BorrowMoneyBuyCarProgram->name = "Vay Tiền Mua Xe";
    BorrowMoneyBuyCarProgram->program = &borrowMoneyBuyCarProgram;

    StudentPlacementProgram->name = "Vay Tiền Mua Xe";
    StudentPlacementProgram->program = &studentPlacementProgram;

    programProvider->quantity = quantity;
    programProvider->programs[0] = CheckInteger;
    programProvider->programs[1] = CommonNumbers;
    programProvider->programs[2] = BillingKaraoke;
    programProvider->programs[3] = CalculateElectricityProgram;
    programProvider->programs[4] = MoneyExchangeProgram;
    programProvider->programs[5] = CalculateLoanInterest;
    programProvider->programs[6] = BorrowMoneyBuyCarProgram;
    programProvider->programs[7] = StudentPlacementProgram;

    return programProvider;
}

int main() {
    const struct ProgramProviderStruct* programProvider =
        initializationPrograms();

    for (int i = 0; i < programProvider->quantity; i++) {
        printf("%s \n", programProvider->programs[i]->name);
        programProvider->programs[i]->program();
        printf("\n");
    }

    return 0;
};
