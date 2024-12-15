#include <stdio.h>

// Ham in tat ca phan tu trong mang su dung con tro
void print_array(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("Phan tu %d: %d\n", i, *(arr + i));  
    }
}

int main() {
    // Khai bao va gan gia tri cho mang
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);  

    // Goi ham de in tat ca phan tu trong mang
    printf("Cac phan tu trong mang:\n");
    print_array(arr, size);

    return 0;
}

