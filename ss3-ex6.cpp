#include <stdio.h>

int main() {
    float canhDay, chieuCao, dienTich;

    // Y�u cau nguoi d�ng nhap v�o do d�i canh d�y v� chieu cao cua tam gi�c
    printf("Nhap do dai canh day cua tam giac: ");
    scanf("%f", &canhDay);
    printf("Nhap do cao cua tam giac: ");
    scanf("%f", &chieuCao);

    // T�nh dien t�ch cua tam gi�c
    dienTich = 0.5 * canhDay * chieuCao;

    // In ket qua dien t�ch ra m�n h�nh
    printf("Dien tich tam giac la: %.2f\n", dienTich);

    return 0;
}
