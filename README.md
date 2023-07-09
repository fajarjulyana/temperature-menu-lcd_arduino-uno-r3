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

## Persiapan Perangkat Lunak
1. Pasang Arduino IDE pada komputer Anda (versi terbaru dapat diunduh dari [situs resmi Arduino](https://www.arduino.cc/en/software)).
2. Buka Arduino IDE dan buka file proyek yang berisi kode untuk membaca suhu menggunakan sensor LM35.
3. Sambungkan Arduino Uno R3 ke komputer menggunakan kabel USB.
4. Pilih papan Arduino Uno R3 dan port yang sesuai dari menu *Tools* di Arduino IDE.
5. Unggah kode ke Arduino Uno R3 dengan menekan tombol *Upload* di Arduino IDE.

Setelah mengikuti langkah-langkah di atas, Anda siap untuk menggunakan proyek ini dengan persiapan alat dan bahan yang sudah dilakukan.
