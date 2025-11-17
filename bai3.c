#include <stdio.h>

void sum(int a, int b, int *result) {
    *result = a + b;   
}

int main() {
    int x = 7;
    int y = 12;
    int ketQua;   

    sum(x, y, &ketQua);

    printf("Tong cua %d va %d la: %d\n", x, y, ketQua);

    return 0;
}

