# Disaster Relief System

This project is written in the C programming language to manage information of individuals in need during disasters, including adding, updating, deleting, and managing help requests.

## Contents
- [Overview](#overview)
- [Installation](#installation)
- [Usage](#usage)
- [Functions](#functions)
- [Sample Output](#sample-output)
- [Contributing](#contributing)
- [License](#license)

## Overview

The project consists of three main source files:
- `main.c`: Contains the user interface and the main program loop.
- `afet_yardim_sistemi.h`: Contains the function declarations.
- `afet_yardim_sistemi.c`: Contains the function implementations.

## Installation

To run the project on your own computer, follow these steps:

1. Download or clone the project files:
    
       https://github.com/MehmetZekii/Afetzede-Yard-m-Sistemi

       cd Afetzede-Yard-m-Sistemi

3. Compile the project:
    
       gcc -o afet_yardim_sistemi main.c afet_yardim_sistemi.c

## Usage

After compiling, run the program with the following command:

    ./afet_yardim_sistemi

When the program runs, the user can perform the following operations:

  Add a disaster victim
  Update a disaster victim's information
  Delete a disaster victim
  Search for a disaster victim
  Record a help request
  List disaster victims
  List help requests

The user selects the desired operation from the menu and enters the necessary information.

## Functions
afet_yardim_sistemi.h

  void afetzede_ekle(char *ad, char *soyad, char *telefon, char *adres);
  void afetzede_guncelle(int id, char *ad, char *soyad, char *telefon, char *adres);
  void afetzede_sil(int id);
  void afetzede_ara(int id);
  void afetzede_listele();
  void yardim_talebi_kaydet(int id, char *aciklama);
  void yardim_talepleri_listele();
  void menu_goster();
  void hata_mesaji();

afet_yardim_sistemi.c

This file contains the implementations of the above functions. The functions manage adding, updating, deleting, searching, and listing disaster victims and help requests.

## Sample Output

Below is the menu and some operations that the program provides when executed:

    |------ AFET YARDIM SISTEMI ------|
    |1. Afetzede Ekle                 |
    |2. Afetzede Güncelle             |
    |3. Afetzede Sil                  |
    |4. Afetzede Ara                  |
    |5. Yardım Talebi Kaydet          |
    |6. Afetzede Listele              |
    |7. Afetzede Arama                |
    |8. Yardım Talepleri Listele      |
    |----------------------------------|
    Lütfen Yapmak İstediğiniz İşlemi Seçin : 1
    Ad: Ahmet
    Soyad: Yılmaz
    Telefon: 5551234567
    Adres: İstanbul
    Afetzede başarıyla eklendi.

    |------ AFET YARDIM SISTEMI ------|
    |1. Afetzede Ekle                 |
    |2. Afetzede Güncelle             |
    |3. Afetzede Sil                  |
    |4. Afetzede Ara                  |
    |5. Yardım Talebi Kaydet          |
    |6. Afetzede Listele              |
    |7. Afetzede Arama                |
    |8. Yardım Talepleri Listele      |
    |----------------------------------|
    Lütfen Yapmak İstediğiniz İşlemi Seçin : 6
    Afetzede Listesi:
    ID: 0
    Ad: Ahmet
    Soyad: Yılmaz
    Telefon: 5551234567
    Adres: İstanbul
    -------------------

    |------ AFET YARDIM SISTEMI ------|
    |1. Afetzede Ekle                 |
    |2. Afetzede Güncelle             |
    |3. Afetzede Sil                  |
    |4. Afetzede Ara                  |
    |5. Yardım Talebi Kaydet          |
    |6. Afetzede Listele              |
    |7. Afetzede Arama                |
    |8. Yardım Talepleri Listele      |
    |----------------------------------|
    Lütfen Yapmak İstediğiniz İşlemi Seçin : 0

## Contributing

If you want to contribute, please create a pull request or open an issue. Any contributions and feedback are welcome.

## License

This project is licensed under the MIT License. For more information, see the LICENSE file.
