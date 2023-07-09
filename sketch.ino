/*
by Fajar Julyana
*/
#include <LiquidCrystal.h>
#include <OneWire.h>
#include <DallasTemperature.h>

// Inisialisasi pin LCD
LiquidCrystal lcd(12, 11, 10, 9, 8, 7);

// Inisialisasi sensor suhu DS18B20
#define ONE_WIRE_BUS 2
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

// Variabel untuk menyimpan pilihan menu
int pilihanMenu = 0;
int pilihanSubMenu = 0;

// Pin untuk tombol
const int pinTombolUp = 3;
const int pinTombolDown = 4;
const int pinTombolEnter = 5;

// Jumlah menu dan sub-menu
const int jumlahMenu = 5;
const int jumlahSubMenu = 3;

// Nama menu dan sub-menu
String menu[jumlahMenu] = {"Temperatur", "Menu 2", "Menu 3", "Menu 4", "Menu 5"};
String subMenu[jumlahSubMenu] = {"Sub Menu 1", "Sub Menu 2", "Sub Menu 3"};

void setup() {
  // Inisialisasi LCD
  lcd.begin(16, 2);

  // Inisialisasi sensor suhu
  sensors.begin();

  // Tampilkan pesan selamat datang di LCD
  lcd.print("Pilih Menu:");
  lcd.setCursor(0, 1);
  lcd.print("> ");
  lcd.print(menu[pilihanMenu]);
  
  // Set pin tombol sebagai input
  pinMode(pinTombolUp, INPUT_PULLUP);
  pinMode(pinTombolDown, INPUT_PULLUP);
  pinMode(pinTombolEnter, INPUT_PULLUP);
}

void loop() {
  // Baca input tombol dan atur pilihan menu atau sub-menu
  
  if (digitalRead(pinTombolUp) == LOW) {
    // Tombol Up ditekan
    if (pilihanMenu > 0) {
      pilihanMenu--;
    } else {
      pilihanMenu = jumlahMenu - 1;
    }
    tampilkanMenu();
    delay(200); // Delay untuk menghindari bouncing tombol
  }

  if (digitalRead(pinTombolDown) == LOW) {
    // Tombol Down ditekan
    if (pilihanMenu < jumlahMenu - 1) {
      pilihanMenu++;
    } else {
      pilihanMenu = 0;
    }
    tampilkanMenu();
    delay(200); // Delay untuk menghindari bouncing tombol
  }

  if (digitalRead(pinTombolEnter) == LOW) {
    // Tombol Enter ditekan
    if (pilihanMenu == 0) {
      // Menu Temperatur
      lcd.clear();
      lcd.print("Temperatur:");
      lcd.setCursor(0, 1);
      lcd.print(bacaSuhu());
      lcd.print("C");
    } else if (pilihanMenu == 1) {
      // Menu 2
      tampilkanSubMenu();
      while (true) {
        if (digitalRead(pinTombolUp) == LOW) {
          // Tombol Up ditekan di dalam sub-menu
          if (pilihanSubMenu > 0) {
            pilihanSubMenu--;
          } else {
            pilihanSubMenu = jumlahSubMenu - 1;
          }
          tampilkanSubMenu();
          delay(200); // Delay untuk menghindari bouncing tombol
        }

        if (digitalRead(pinTombolDown) == LOW) {
          // Tombol Down ditekan di dalam sub-menu
          if (pilihanSubMenu < jumlahSubMenu - 1) {
            pilihanSubMenu++;
          } else {
            pilihanSubMenu = 0;
          }
          tampilkanSubMenu();
          delay(200); // Delay untuk menghindari bouncing tombol
        }

        if (digitalRead(pinTombolEnter) == LOW) {
          // Tombol Enter ditekan di dalam sub-menu
          // Lakukan aksi sesuai dengan pilihan sub-menu
          lcd.clear();
          lcd.print("Aksi: ");
          lcd.print(subMenu[pilihanSubMenu]);
          delay(2000); // Delay untuk menampilkan aksi
          tampilkanMenu();
          break;
        }
      }
    } else {
      // Menu lainnya
      lcd.clear();
      lcd.print("Aksi: ");
      lcd.print(menu[pilihanMenu]);
      delay(2000); // Delay untuk menampilkan aksi
      tampilkanMenu();
    }
    delay(200); // Delay untuk menghindari bouncing tombol
  }
}

void tampilkanMenu() {
  lcd.clear();
  lcd.print("Pilih Menu:");
  lcd.setCursor(0, 1);
  lcd.print("> ");
  lcd.print(menu[pilihanMenu]);
}

void tampilkanSubMenu() {
  lcd.clear();
  lcd.print("Pilih Sub Menu:");
  lcd.setCursor(0, 1);
  lcd.print("> ");
  lcd.print(subMenu[pilihanSubMenu]);
}

float bacaSuhu() {
  sensors.requestTemperatures();
  return sensors.getTempCByIndex(0);
}
