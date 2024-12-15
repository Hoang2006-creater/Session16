#include <stdio.h>

// Ham cap nhat phan tu trong mang
void update_element(int *arr, int new_value, int position) {
    arr[position] = new_value;  
}

int main() {
    // Khai bao va gan gia tri cho mang
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);  
    // In mang ban dau
    printf("Mang ban dau:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Goi ham de cap nhat phan tu
    int new_value = 99;  
    int position = 2;    
    update_element(arr, new_value, position);

    // In mang sau khi cap nhat
    printf("Mang sau khi cap nhat:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

