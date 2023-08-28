#include <RCSwitch.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

RCSwitch mySwitch = RCSwitch();

// I2C adresinizi buraya girin. Genellikle 0x27'dir, fakat bazen 0x3F olabilir.
LiquidCrystal_I2C lcd(0x27, 16, 2);  

void setup() {
  lcd.begin(16, 2);
  lcd.backlight();
  mySwitch.enableTransmit(10);  // Verici modülünün bağlı olduğu pin. Bu örnekte 10
  mySwitch.setProtocol(5);  // Bu örnekte Protokol numarasını 5 olarak belirler.
  mySwitch.setPulseLength(740); // Bu örnekte PulseLength'i 740 olarak belirler.
}

void loop() {
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Gonderilen kod: ");
  lcd.setCursor(0,1);
  lcd.print(123456);  // Bu örnekte Gönderilen kodu LCD'ye yazdır.
  
  // Sinyali bir kere gönderme
  mySwitch.send(123456, 24);  // Bu örnekte İlk parametre gönderilecek veri, ikinci parametre veri boyutu
  delay(100);  // Yüz milisaniye bekleyin
  
  delay(1000);  // 1 saniye bekleyin
}
