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
    struct ProgramStruct* programs[10]
};

struct ProgramStruct {
    char* name;
    void (*program)(void);
};

// #1
void checkIntegerProgram() { printf("checkIntegerProgram"); }

// #2
void commonNumbersProgram() { printf("CommonNumbersProgram"); }

// #3
void billingKaraokeProgram() { printf("billingKaraokeProgram"); }

// #4
void calculateElectricityProgram() { printf("calculateElectricityProgram"); }

// #5
void moneyExchangeProgram() { printf("moneyExchangeProgram"); }

// #6
void calculateLoanInterestProgram() { printf("calculateLoanInterestProgram"); }

// #7
void borrowMoneyBuyCarProgram() { printf("borrowMoneyBuyCarProgram"); }

// #8
void studentPlacementProgram() { printf("studentPlacementProgram"); }

// # 9
void gameFpolyLottProgram() { printf("gameFpolyLottProgram"); }

// # 10
void fractionCalculationProgram() { printf("fractionCalculationProgram"); }
// END
struct ProgramProviderStruct* initializationPrograms() {
    // Khởi tạo đối tượng danh sách chứa các chương trình
    const int quantity = 10;
    struct ProgramProviderStruct* programProvider =
        malloc(sizeof(struct ProgramProviderStruct));

    // Khởi tạo cấu trúc của các chương trình
    // #1
    struct ProgramStruct* CheckInteger = malloc(sizeof(struct ProgramStruct));

    // #2
    struct ProgramStruct* CommonNumbers = malloc(sizeof(struct ProgramStruct));

    // #3
    struct ProgramStruct* BillingKaraoke = malloc(sizeof(struct ProgramStruct));

    // #4
    struct ProgramStruct* CalculateElectricityProgram =
        malloc(sizeof(struct ProgramStruct));

    // #5
    struct ProgramStruct* MoneyExchangeProgram =
        malloc(sizeof(struct ProgramStruct));

    // #6
    struct ProgramStruct* CalculateLoanInterest =
        malloc(sizeof(struct ProgramStruct));

    // #7
    struct ProgramStruct* BorrowMoneyBuyCarProgram =
        malloc(sizeof(struct ProgramStruct));

    // #8
    struct ProgramStruct* StudentPlacementProgram =
        malloc(sizeof(struct ProgramStruct));

    // #9
    struct ProgramStruct* GameFpolyLottProgram =
        malloc(sizeof(struct ProgramStruct));

    // #10
    struct ProgramStruct* FractionCalculationProgram =
        malloc(sizeof(struct ProgramStruct));
    // END

    // Liên kết tên và chức năng cho các chương trình
    // #1
    CheckInteger->name = "Kiểm Tra Số Nguyên";
    CheckInteger->program = &checkIntegerProgram;

    // #2
    CommonNumbers->name = "Tìm Ước Số Chung Và Bội Số Chung Của 2 Số";
    CommonNumbers->program = &commonNumbersProgram;

    // #3
    BillingKaraoke->name = "Tính Tiền Cho Quán Karaoke";
    BillingKaraoke->program = &billingKaraokeProgram;

    // #4
    CalculateElectricityProgram->name = "Tính Tiền Điện";
    CalculateElectricityProgram->program = &calculateElectricityProgram;

    // #5
    MoneyExchangeProgram->name = "Đổi Tiền";
    MoneyExchangeProgram->program = &moneyExchangeProgram;

    // #6
    CalculateLoanInterest->name = "Tính Lãi Suất Vay Ngân Hàng Vay Trả Góp";
    CalculateLoanInterest->program = &calculateLoanInterestProgram;

    // #7
    BorrowMoneyBuyCarProgram->name = "Vay Tiền Mua Xe";
    BorrowMoneyBuyCarProgram->program = &borrowMoneyBuyCarProgram;

    // #8
    StudentPlacementProgram->name = "Sắp Xếp Thông Tin Sinh Viên";
    StudentPlacementProgram->program = &studentPlacementProgram;

    // #9
    GameFpolyLottProgram->name = "Game FPOLY-LOTT";
    GameFpolyLottProgram->program = &gameFpolyLottProgram;

    // #10
    FractionCalculationProgram->name = "Tính Toán Phân Số";
    FractionCalculationProgram->program = &fractionCalculationProgram;
    // END

    // Liên kết chương trình vào danh sách
    programProvider->quantity = quantity;
    programProvider->programs[0] = CheckInteger;
    programProvider->programs[1] = CommonNumbers;
    programProvider->programs[2] = BillingKaraoke;
    programProvider->programs[3] = CalculateElectricityProgram;
    programProvider->programs[4] = MoneyExchangeProgram;
    programProvider->programs[5] = CalculateLoanInterest;
    programProvider->programs[6] = BorrowMoneyBuyCarProgram;
    programProvider->programs[7] = StudentPlacementProgram;
    programProvider->programs[8] = GameFpolyLottProgram;
    programProvider->programs[9] = FractionCalculationProgram;

    // Trả về đối tượng danh sách chứa chương trình
    return programProvider;
}

void mainMenu() {
    int input;
    const struct ProgramProviderStruct* programProvider =
        initializationPrograms();
    const int quantityProgram = programProvider->quantity;

    printf("***/// MENU CÁC TIỆN ÍCH \\\\\\*** \n");

    for (int i = 0; i < quantityProgram; i++) {
        printf("[%d] %s\n", i + 1, programProvider->programs[i]->name);
    }

enterOption:
    printf("=> Hãy nhập số của một chương trình: ");
    if (scanf(" %d", &input) && input > 0 && input < quantityProgram) {
        programProvider->programs[input - 1]->program();
    } else {
        while (getchar() != '\n')
            ;
        goto enterOption;
    }
}

int main() {
    mainMenu();
    return 0;
};
