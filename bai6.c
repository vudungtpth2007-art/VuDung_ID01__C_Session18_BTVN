#include <stdio.h>

int timKiem(int *arr, int size, int giaTri) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == giaTri) {
            return i + 1;
        }
    }
    return 0; 
}

int main() {
    int a[6] = {1, 2, 4, 5, 6, 7};

    int giaTriCanTim = 7;
    int viTri = timKiem(a, 6, giaTriCanTim);

    printf("%d\n", viTri);

    return 0;
}
 
