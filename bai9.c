#include <stdio.h>

#define MAX_SIZE 10  

int themPhanTu(int arr[], int size, int giaTriMoi, int viTri) {
    if (size >= MAX_SIZE) {
        printf("Khong the them phan tu, mang da day!\n");
        return size;
    }
    if (viTri < 0 || viTri > size) {
        printf("Vi tri them khong hop le!\n");
        return size;
    }
    for (int i = size; i > viTri; i--) {
        arr[i] = arr[i - 1];
    }

    arr[viTri] = giaTriMoi;

    return size + 1; 
}

void inMang(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int a[MAX_SIZE] = {1, 2, 4, 5, 6};
    int size = 5;

    printf("Mang ban dau: ");
    inMang(a, size);

    size = themPhanTu(a, size, 100, 2);

    printf("Mang sau khi them: ");
    inMang(a, size);

    return 0;
}

