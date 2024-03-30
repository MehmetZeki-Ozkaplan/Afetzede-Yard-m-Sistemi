#include <stdio.h>
#include "afet_yardim_sistemi.h"

//Proje "DEVC" editöründe anlaşılmadık sorunlar ile karşılaştığından dolayı diğer editörlerden (Online Compiler vs.) denenmiştir ve çalışmaktadır.

int main()
{
//Kulanicidan alinacak verilerin değişken tanimini yap
    int secim;
    char ad[50], soyad[50], telefon[20], adres[100], aciklama[100], str_id[10];
    int id;
//Kullanici secimini saglayabilmek ve fonksiyonlari calistirabilmek icin "switch-case" ve "do-while" kullan.
//Menu rengini degistir. 
//"afet_yardim_sistemi.c" fonksiyonundaki menu fonksiyonunu cagir.
    do {
        system("COLOR 4");
        menu_goster();
        printf("Lutfen Yapmak Istediginiz Islemi Secin : ");
        scanf("%d", &secim);

        switch (secim) {
            case 1:
            //Kulaniciden ekleyecegi verileri girmesini iste 
                printf("Ad: ");
                scanf("%s", ad);
                printf("Soyad: ");
                scanf("%s", soyad);
                printf("Telefon: ");
                scanf("%s", telefon);
                printf("Adres: ");
                scanf("%s", adres);
                afetzede_ekle(ad, soyad, telefon, adres);
                break;
            case 2:
            //Kulaniciden yeniden yazmak istedigi verileri girmesini iste
                printf("Guncellenecek afetzede ID'si: ");
                scanf("%d", &id);
                printf("Ad: ");
                scanf("%s", ad);
                printf("Soyad: ");
                scanf("%s", soyad);
                printf("Telefon: ");
                scanf("%s", telefon);
                printf("Adres: ");
                scanf("%s", adres);
                afetzede_guncelle(id, ad, soyad, telefon, adres);
                break;
            case 3:
            //Kulaniciden cikarmasini istedigi verileri girmesini iste
                printf("Silinecek afetzede ID'si: ");
                scanf("%d", &id);
                afetzede_sil(id);
                break;
            case 4:
            //Kulaniciden gormek istedigi verilerin id'sini girmesini iste
                printf("Aranacak afetzede ID'si: ");
                scanf("%d", &id);
                afetzede_ara(id);
                break;
            case 5:
            //Kulaniciden talep kaydetmek istedigi verilerin id'sini girmesini iste
                printf("Yardım talebi kaydedilecek afetzede ID'si: ");
                scanf("%d", &id);
                printf("Açıklama: ");
                scanf("%s", aciklama);
                yardim_talebi_kaydet(id, aciklama);
                break;
            case 6:
            //Kulanicinin girdigi verileri goster
                afetzede_listele();
                break;
            case 7:
            //Kulaniciden gormek istedigi verilerin id'sini girmesini iste
                printf("Arama yapılacak afetzede ID'si: ");
                scanf("%d", &id);
                afetzede_ara(id);
                break;
            case 8:
            //Kulanicinin girdigi verileri goster
                yardim_talepleri_listele();
                break;
            default:
            //Kullaniciyi hata yaptiginda uyar !
                hata_mesaji();
                break;
        }
    } while (secim != 0);

    return 0;
}
