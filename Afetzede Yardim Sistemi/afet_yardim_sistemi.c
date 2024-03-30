// #define Sabitleri
#include <stdlib.h>
#include <string.h>
//define sabitlerine deger atama
#define MAX_AFETZEDE_SAYISI 100
#define MAX_ISIM_UZUNLUK 50
#define MAX_TELEFON_UZUNLUK 11
#define MAX_ADRES_UZUNLUK 100
#define MAX_TALEP_UZUNLUK 100
#define MAX_TALEP_SAYISI 100

// Global Degiskenler
char afetzede_isimleri[MAX_AFETZEDE_SAYISI][MAX_ISIM_UZUNLUK];
char afetzede_soyisimleri[MAX_AFETZEDE_SAYISI][MAX_ISIM_UZUNLUK];
char afetzede_telefonlari[MAX_AFETZEDE_SAYISI][MAX_TELEFON_UZUNLUK];
char afetzede_adresleri[MAX_AFETZEDE_SAYISI][MAX_ADRES_UZUNLUK];
int afetzede_sayisi;
char talep_aciklamalari[MAX_TALEP_SAYISI][MAX_TALEP_UZUNLUK];
int talep_afetzede_idleri[MAX_TALEP_SAYISI];
int talep_sayisi;

//Olusturulan fonksiyonların icerisnde deger tutulabilmesi icin"strcpy" Fonksiyonunu kullan !

void afetzede_ekle(char *ad, char *soyad, char *telefon, char *adres) 
{
    if (afetzede_sayisi < MAX_AFETZEDE_SAYISI) {
        strcpy(afetzede_isimleri[afetzede_sayisi], ad);
        strcpy(afetzede_soyisimleri[afetzede_sayisi], soyad);
        strcpy(afetzede_telefonlari[afetzede_sayisi], telefon);
        strcpy(afetzede_adresleri[afetzede_sayisi], adres);
        afetzede_sayisi++;
        printf("Afetzede basariyla eklendi.\n");
    } else {
        printf("Afetzede eklemek icin maksimum kapasiteye ulasildi.\n");
    }
}
//verilen id'yi yeniden olustur
void afetzede_guncelle(int id, char *ad, char *soyad, char *telefon, char *adres)
{
    if (id >= 0 && id < afetzede_sayisi) {
        strcpy(afetzede_isimleri[id], ad);
        strcpy(afetzede_soyisimleri[id], soyad);
        strcpy(afetzede_telefonlari[id], telefon);
        strcpy(afetzede_adresleri[id], adres);
        printf("Afetzede bilgileri basariyla guncellendi.\n");
    } else {
        printf("Gecerli bir afetzede ID'si girin.\n");
    }
}
//id'si verilen veriyi cikar 
void afetzede_sil(int id) 
{
    if (id >= 0 && id < afetzede_sayisi) {
        for (int i = id; i < afetzede_sayisi - 1; i++) {
            strcpy(afetzede_isimleri[i], afetzede_isimleri[i + 1]);
            strcpy(afetzede_soyisimleri[i], afetzede_soyisimleri[i + 1]);
            strcpy(afetzede_telefonlari[i], afetzede_telefonlari[i + 1]);
            strcpy(afetzede_adresleri[i], afetzede_adresleri[i + 1]);
        }
        afetzede_sayisi--;
        printf("Afetzede basariyla silindi.\n");
    } else {
        printf("Gecerli bir afetzede ID'si girin.\n");
    }
}
//id'ye gore verileri getir 
void afetzede_ara(int id) 
{
    if (id >= 0 && id < afetzede_sayisi) {
        printf("Afetzede Bilgileri:\n");
        printf("ID: %d\n", id);
        printf("Ad: %s\n", afetzede_isimleri[id]);
        printf("Soyad: %s\n", afetzede_soyisimleri[id]);
        printf("Telefon: %s\n", afetzede_telefonlari[id]);
        printf("Adres: %s\n", afetzede_adresleri[id]);
    } else {
        printf("Gecerli bir afetzede ID'si girin.\n");
    }
}
//afretzede_ekle fonksiyonundaki kaydedilen verileri cagir
void afetzede_listele() 
{
    printf("Afetzede Listesi:\n");
    for (int i = 0; i < afetzede_sayisi; i++) {
        printf("ID: %d\n", i);
        printf("Ad: %s\n", afetzede_isimleri[i]);
        printf("Soyad: %s\n", afetzede_soyisimleri[i]);
        printf("Telefon: %s\n", afetzede_telefonlari[i]);
        printf("Adres: %s\n", afetzede_adresleri[i]);
        printf("-------------------\n");
    }
}
//Verilerin belirli id uzerine kaydet
void yardim_talebi_kaydet(int id, char *aciklama) 
{
    if (id >= 0 && id < afetzede_sayisi) {
        if (talep_sayisi < MAX_TALEP_SAYISI) {
            talep_afetzede_idleri[talep_sayisi] = id;
            strcpy(talep_aciklamalari[talep_sayisi], aciklama);
            talep_sayisi++;
            printf("Yardım talebi başarıyla kaydedildi.\n");
        } else {
            printf("Yardım talepleri için maksimum kapasiteye ulaşıldı.\n");
        }
    } else {
        printf("Geçerli bir afetzede ID'si girin.\n");
    }
}

//Verilerin İdlerinden yardim alarak talep listeleme fonsiyonunu calistir .
void yardim_talepleri_listele() 
{
    printf("Yardım Talepleri:\n");
    for (int i = 0; i < talep_sayisi; i++) {
        int afetzede_id = talep_afetzede_idleri[i];
        printf("Talep ID: %d\n", i);
        printf("Afetzede ID: %d\n", afetzede_id);
        printf("Afetzede Ad: %s\n", afetzede_isimleri[afetzede_id]);
        printf("Afetzede Soyad: %s\n", afetzede_soyisimleri[afetzede_id]);
        printf("Açıklama: %s\n", talep_aciklamalari[i]);
    }
}

//Kullanicinin anlayabilecegi bir arayuz olustur.
void menu_goster() {
    system("COLOR 4");
    printf("|------ AFET YARDIM SISTEMI ------|\n");
    printf("|1. Afetzede Ekle                 |\n");
    printf("|2. Afetzede Güncelle             |\n");
    printf("|3. Afetzede Sil                  |\n");
    printf("|4. Afetzede Ara                  |\n");
    printf("|5. Yardım Talebi Kaydet          | \n");
    printf("|6. Afetzede Listele              |\n");
    printf("|7. Afetzede Arama                |\n");
    printf("|8. Yardım Talepleri Listele      |\n");
    printf("|----------------------------------|\n");
}
//Kullaniciyi hata yaptiginda bilgilendir.
void hata_mesaji()
{
    printf("Geçersiz bir seçim yaptınız. Tekrar deneyin.\n");
}