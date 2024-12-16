#include <stdio.h>

int main(){
    int n;
    printf("Nhập vào n: ");
    scanf("%d", &n);
    if (n = 0){
        printf("Số %d không phải nguyên âm hay nguyên dương", n);
    }
    else if (n > 0)
    {
        printf("Số %d là số nguyên dương", n);
    }
    else
    {
        printf("Số %d là số nguyên âm", n);
    }
    
}