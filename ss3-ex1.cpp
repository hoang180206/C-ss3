#include <stdio.h>
 
int main() {
    char name[200]; // Khai b�o mang k� tu de chia t�n nguoi d�ng

    // Y�u cau nguoi d�ng nhap t�n
    printf("Nhap ten cua ban: ");
    fgets(name, sizeof(name), stdin); // D�ng fgets d? d?c t�n, c� th? ch?a kho?ng tr?ng

    // In ra loi ch�o voi t�n nguoi d�ng
    printf("Xin ch�o %s", name);

    return 0;
}
