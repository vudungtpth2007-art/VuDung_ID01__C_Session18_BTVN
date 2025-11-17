#include <stdio.h>

void capNhatPhanTu(int *arr, int newValue, int pos) {
    arr[pos] = newValue;  
}

void inMang(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int a[5] = {5, 10, 15, 20, 25};
    capNhatPhanTu(a, 100, 2);

    inMang(a, 5);

    return 0;
}

