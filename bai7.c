#include <stdio.h>

void sapXepTangDan(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
             
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void inMang(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int a[6] = {5, 2, 7, 1, 4, 3};

    printf("Mang ban dau: ");
    inMang(a, 6);

    sapXepTangDan(a, 6);

    printf("Mang sau khi sap xep: ");
    inMang(a,6);

    return 0;
}

