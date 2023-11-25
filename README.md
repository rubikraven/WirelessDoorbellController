# WirelessDoorbellController
Kablosuz Kapı Zili Kontrolü
Bu projede, bir RCSwitch ve bir I2C LCD ekran kullanarak kablosuz bir kapı zilini kontrol edebilirsiniz.

Gereksinimler
Arduino (veya uyumlu bir kart)
RCSwitch kütüphanesi
LiquidCrystal_I2C kütüphanesi
433 MHz RF verici modülü
I2C LCD ekran
Kurulum
RCSwitch ve LiquidCrystal_I2C kütüphanelerini Arduino IDE'ye ekleyin.
Bu repodaki kodu Arduino kartınıza yükleyin.
LCD ekranı ve RF verici modülünü Arduino'ya bağlayın.
Kullanım
Kodu yükledikten sonra, Arduino'yu güç kaynağına bağlayın. LCD ekran üzerinde gönderilen kodu göreceksiniz. Kapı zilinizin bu kodu alması gerekiyor.

Kapı Zilinin Kodunun Alınması
Kapı zilinizi kontrol etmek için gerekli olan kodu alabilmek için RCSwitch kütüphanesinin ReceiveDemo_Advanced örneğini kullanabilirsiniz.

Adımlar:
RCSwitch kütüphanesini Arduino IDE'de yüklediğinizden emin olun.
Arduino IDE'de Dosya > Örnekler > RCSwitch > ReceiveDemo_Advanced yolunu takip ederek örneği açın.
Bir 433 MHz RF alıcı modülü Arduino'ya bağlayın.
Arduino'yu bilgisayarınıza bağlayıp kodu yükleyin.
Seri monitörü açın ve kapı zilinizin düğmesine basın.
Seri monitörde kapı zilinizden gelen kodu göreceksiniz. Bu kodu ana projede kullanmak üzere not edin.


Not
Eğer LCD ekranınız farklı bir I2C adresindeyse, kodun başında belirtilen adresi değiştirmeniz gerekebilir.
Kapı zilinizin alacağı kodu ve diğer ayarları (protokol, pulse length vb.) değiştirmek için kodu düzenleyebilirsiniz.

https://www.instagram.com/p/CwgQLqKoV_V/?hl=tr nasıl çalıştığına bakabilirsiniz.

