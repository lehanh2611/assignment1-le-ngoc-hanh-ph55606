#include <stdio.h>
#include <stdlib.h>

int main() {
    char input[100]; // Định một mảng để lưu chuỗi đầu vào
    printf("Nhập các số nguyên cách nhau bằng dấu cách: ");
    scanf("%[^\n]",
          input); // Đọc chuỗi đầu vào đến khi gặp ký tự xuống dòng (\n)

    // Sử dụng sscanf để phân tách các số từ chuỗi và lưu vào mảng
    int numbers[100];
    int count = 0;                    // Đếm số lượng số đã nhập
    char* token = strtok(input, " "); // Phân tách chuỗi bằng dấu cách
    while (token != NULL) {
        numbers[count++] =
            atoi(token); // Chuyển chuỗi thành số nguyên và lưu vào mảng
        token = strtok(NULL, " ");
    }

    printf("Các số bạn đã nhập là:\n");
    for (int i = 0; i < count; i++) {
        printf("%d\n", numbers[i]);
    }

    return 0;
}