#include <stdio.h>
#define PI 3.14159  // �inh nghia hang so PI

int main() {
    float r, chuVi, dienTich;

    // Y�u cau nguoi d�ng nhap b�n k�nh h�nh tr�n
    printf("Nhap ban kinh hinh tron: ");
    scanf("%f", &r);

    // T�nh chu vi v� dien t�ch
    chuVi = 2 * PI * r;
    dienTich = PI * r * r;

    // Hien thi ket qua voi 2 chu so thap ph�n
    printf("Chu vi hinh tron la: %.2f\n", chuVi);
    printf("Dien tich hinh tron la: %.2f\n", dienTich);

    return 0;
}
