#ifndef INC_220504031_MEHMETZEKIOZKAPLAN_ODEV1_AFET_YARDIM_SISTEMI_H
#define INC_220504031_MEHMETZEKIOZKAPLAN_ODEV1_AFET_YARDIM_SISTEMI_H
//Kullanilacak fonksiyonlar ;
void afetzede_ekle(char *ad, char *soyad, char *telefon, char *adres);

void afetzede_guncelle(int id, char *ad, char *soyad, char *telefon, char *adres);

void afetzede_sil(int id);

void afetzede_ara(int id);

void afetzede_listele();

void yardim_talebi_kaydet(int id, char *aciklama);

void yardim_talepleri_listele();

void menu_goster();

void hata_mesaji();
//INC_220504031_MEHMETZEKIOZKAPLAN_ODEV1_AFET_YARDIM_SISTEMI_H
#endif 