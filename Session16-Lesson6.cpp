#include <stdio.h>

// Ham tim kiem phan tu trong mang
int search_element(int *arr, int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            return i;  
        }
    }
    return -1;  
}

int main() {
    // Khai bao va gan gia tri cho mang
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);  

    // Gia tri muon tim kiem
    int value = 30;

    // Goi ham de tim kiem phan tu
    int position = search_element(arr, size, value);

    // In ket qua
    if (position != -1) {
        printf("Phan tu %d tim thay tai vi tri: %d\n", value, position);
    } else {
        printf("Phan tu %d khong tim thay trong mang.\n", value);
    }

    return 0;
}

