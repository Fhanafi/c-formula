#include <stdio.h>
int calculate() {
    char opt;
    int pertama,kedua;
    printf("pilih operator aritmatika (+,*,/,-) : ");
    scanf("%c",&opt);
    printf("masukan angka pertama yang akan di jumlah : ");
    scanf("%d",&pertama);
    printf("masukan angka kedua yang akan di jumlah : ");
    scanf("%d",&kedua);
    switch(opt) {
        case '+':
        printf("hasil dari %d + %d = %d", pertama,kedua, pertama + kedua);
        break;
        case '-':
        printf("hasil dari %d - %d = %d", pertama,kedua, pertama - kedua);
        break;
        case '*':
        printf("hasil dari %d * %d = %d", pertama,kedua, pertama * kedua);
        break;
        case '/':
        printf("hasil dari %d / %d = %d", pertama,kedua, pertama / kedua);
        break;
        
        
        //jika salah memasukkan operator
        default:
        printf("\n operator yang kamu masukan salah");
    }
}


void pilihCalculat() {
  calculate();
}
