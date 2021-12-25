#include <stdio.h>
#include <stdlib.h>

typedef struct{
float alas;
float miring;
float tinggi;
float keliling;
float h_keliling;
float luas;
}nilai;


void main()
{
    nilai jajar_genjang;
    nilai*p_nilai;
    p_nilai=&jajar_genjang;

        int pilih;
        printf("Hitung Luas & Keliling Jajar Genjang\n");
        printf("1. Luas\n");
        printf("2. Keliling\n");
        printf("Pilih 1/2 :");
        scanf("%d",&pilih);

        if(pilih==1){
            printf("Menghitung Luas Jajar Genjang\n");
            printf("Rumus Luas jajar genjang adalah alas x tinggi\n");
            printf("Masukkan alas : ");
            scanf("%f",&jajar_genjang.alas);

            printf("\nMasukkan tinggi : ");
            scanf("%f",&jajar_genjang.tinggi);

            //deklarasi rumus dan output
            (*p_nilai).luas=(*p_nilai).alas * (*p_nilai).tinggi;
            printf("\nLuas Jajar Genjang adalah : %1.f",(*p_nilai).luas);

        }
        else if(pilih==2){
            printf("Menghitung Keliling Jajar Genjang\n");
            printf("Rumus Keliling Jajar Genjang adalah (alas + sisi miring) x 2\n");
            printf("Masukkan alas : ");
            scanf("%f",&jajar_genjang.alas);

            printf("\nMasukkan Sisi Miring : ");
            scanf("%f",&jajar_genjang.miring);

            //deklarasi rumus dan output
            (*p_nilai).keliling=(*p_nilai).alas + (*p_nilai).miring;
            (*p_nilai).h_keliling=(*p_nilai).keliling * 2;
            printf("\nKeliling Jajar Genjang adalah : %1,f",(*p_nilai).h_keliling);

        }
}
