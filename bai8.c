#include <stdio.h>
#include <string.h>

int main() {
    char inputString[100];  
    char reverseString[100];  

    printf("Nhap vao mot chuoi: ");
    fgets(inputString, sizeof(inputString), stdin);

    size_t len = strlen(inputString);
    if (inputString[len - 1] == '\n') {
        inputString[len - 1] = '\0';
        len--;
    }

    char *pInput = inputString;
    char *pReverse = reverseString;
    for (int i = len - 1; i >= 0; i--) {
        *(pReverse++) = *(pInput + i);
    }
    *pReverse = '\0';  

    printf("Chuoi ban dau: %s\n", inputString);
    printf("Chuoi dao nguoc: %s\n", reverseString);

    return 0;
}

