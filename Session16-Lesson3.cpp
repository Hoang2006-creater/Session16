#include <stdio.h>

// Ham tinh tong hai so nguyen va luu ket qua vao bien ket qua
void calculate_sum(int *a, int *b, int *result) {
    *result = *a + *b;  // Tinh tong va luu vao bien ket qua
}

int main() {
    // Khai bao va gan gia tri cho hai bien so nguyen va mot bien ket qua
    int x = 5, y = 10;  
    int sum = 0;         

    // In gia tri ban dau cua x va y
    printf("Gia tri ban dau:\n");
    printf("x = %d, y = %d\n", x, y);

    // Goi ham de tinh tong va luu ket qua vao bien sum
    calculate_sum(&x, &y, &sum);

    // In ket qua tinh tong
    printf("\nKet qua tinh tong:\n");
    printf("Tong cua x va y la: %d\n", sum);

    return 0;
}

