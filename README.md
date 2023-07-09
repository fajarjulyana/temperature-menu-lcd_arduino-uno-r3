# Proyek Temperature Menu dengan LCD 1602 pada Arduino Uno R3
# Persiapan Alat dan Bahan

Ini adalah panduan untuk persiapan alat dan bahan yang diperlukan sebelum menggunakan proyek ini.

## Alat yang Diperlukan
- Arduino Uno R3
- LCD 16x2
- Sensor suhu LM35
- Potensiometer 10K Ohm
- Breadboard
- Kabel jumper

## Persiapan Perangkat Keras
tabel koneksi pin ke arduinonya:

| Komponen             | Pin Arduino Uno R3 | Pin LCD 16x2 | Pin Sensor Suhu LM35 |
|----------------------|--------------------|--------------|----------------------|
| RS (Register Select) | 12                 | 4            | -                    |
| Enable               | 11                 | 6            | -                    |
| D4                   | 5                  | 11           | -                    |
| D5                   | 4                  | 12           | -                    |
| D6                   | 3                  | 13           | -                    |
| D7                   | 2                  | 14           | -                    |
| VO (Contrast)        | -                  | 3            | -                    |
| GND                  | GND                | 1            | GND                  |
| VCC                  | 5V                 | 2            | VCC (5V)             |
| OUT (Analog Input)   | A0                 | -            | OUT                  |
1. Hubungkan pin LCD ke pin Arduino Uno R3 menggunakan kabel jumper:
   - RS pin LCD ke pin 12 Arduino
   - Enable pin LCD ke pin 11 Arduino
   - D4 pin LCD ke pin 5 Arduino
   - D5 pin LCD ke pin 4 Arduino
   - D6 pin LCD ke pin 3 Arduino
   - D7 pin LCD ke pin 2 Arduino
2. Hubungkan pin sensor suhu LM35 ke pin Arduino Uno R3 menggunakan kabel jumper:
   - Pin VCC sensor suhu ke pin 5V Arduino
   - Pin OUT sensor suhu ke pin A0 Arduino
   - Pin GND sensor suhu ke pin GND Arduino
3. Hubungkan potensiometer 10K Ohm ke pin LCD:
   - Terminal tengah potensiometer ke pin VO (contrast) LCD
   - Terminal kiri potensiometer ke pin GND Arduino
   - Terminal kanan potensiometer ke pin 5V Arduino
4. Pasang LCD dan sensor suhu pada breadboard.
5. Hubungkan Arduino Uno R3 ke sumber daya (komputer atau adaptor) menggunakan kabel USB.
## Code
Berikut adalah library yang digunakan dalam proyek ini beserta link unduhnya:

1. Library LiquidCrystal untuk mengontrol LCD 16x2:
   - Nama library: LiquidCrystal
   - Link unduh: [LiquidCrystal Library](https://www.arduino.cc/en/Reference/LiquidCrystal)
   - Cara menginstal: Buka Arduino IDE, lalu pilih menu "Sketch" -> "Include Library" -> "Manage Libraries". Cari "LiquidCrystal" dan klik "Install".

2. Library OneWire dan DallasTemperature untuk sensor suhu DS18B20:
   - Nama library: OneWire
   - Link unduh: [OneWire Library](https://www.pjrc.com/teensy/td_libs_OneWire.html)
   - Cara menginstal: Unduh library dari link di atas, lalu ekstrak ke dalam folder "libraries" di direktori instalasi Arduino IDE.

   - Nama library: DallasTemperature
   - Link unduh: [DallasTemperature Library](https://www.pjrc.com/teensy/td_libs_DallasTemperature.html)
   - Cara menginstal: Unduh library dari link di atas, lalu ekstrak ke dalam folder "libraries" di direktori instalasi Arduino IDE.

Pastikan untuk menginstal library yang diperlukan sebelum mengunggah kode ke Arduino Uno R3. Ikuti langkah-langkah yang disebutkan untuk menginstal library LiquidCrystal dan library OneWire beserta DallasTemperature. Dengan menginstal library-library ini, Anda akan memiliki akses ke fungsi dan fitur yang diperlukan dalam proyek ini.
## Persiapan Perangkat Lunak
1. Pasang Arduino IDE pada komputer Anda (versi terbaru dapat diunduh dari [situs resmi Arduino](https://www.arduino.cc/en/software)).
2. Buka Arduino IDE dan buka file proyek yang berisi kode untuk membaca suhu menggunakan sensor LM35.
3. Sambungkan Arduino Uno R3 ke komputer menggunakan kabel USB.
4. Pilih papan Arduino Uno R3 dan port yang sesuai dari menu *Tools* di Arduino IDE.
5. Unggah kode ke Arduino Uno R3 dengan menekan tombol *Upload* di Arduino IDE.

Setelah mengikuti langkah-langkah di atas, Anda siap untuk menggunakan proyek ini dengan persiapan alat dan bahan yang sudah dilakukan.
