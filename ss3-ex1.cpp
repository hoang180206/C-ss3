#include <stdio.h>
 
int main() {
    char name[200]; // Khai báo mang ký tu de chia tên nguoi dùng

    // Yêu cau nguoi dùng nhap tên
    printf("Nhap ten cua ban: ");
    fgets(name, sizeof(name), stdin); // Dùng fgets d? d?c tên, có th? ch?a kho?ng tr?ng

    // In ra loi chào voi tên nguoi dùng
    printf("Xin chào %s", name);

    return 0;
}
