#include <stdio.h>
#define MAX_SIZE 10

int xoaPhanTu(int arr[], int size, int viTri) {
    if (viTri < 0 || viTri >= size) {
        printf("Vi tri xoa khong hop le!\n");
        return size;
    }

    for (int i = viTri; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    return size - 1; 
}

void inMang(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int a[MAX_SIZE] = {10, 20, 30, 40, 50};
    int size = 5;

    printf("Mang ban dau: ");
    inMang(a, size);

    size = xoaPhanTu(a, size, 2);

    printf("Mang sau khi xoa: ");
    inMang(a, size);

    return 0;
}

