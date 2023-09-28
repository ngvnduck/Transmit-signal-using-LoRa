//Thêm thư viện LiquitCrystal - nó có sẵn vì vậy bạn không cần cài thêm gì cả
#include <LiquidCrystal.h>
 
//Khởi tạo với các chân
LiquidCrystal lcd(8, 7, 6, 5, 4, 3);
 
void setup() {
  //Thông báo đây là LCD 1602
  lcd.begin(16, 2);
  //In ra màn hình lcd dòng chữ Toi yeu Arduino
  lcd.print("CAPYBARA");
}
 
void loop() {
  // đặt con trỏ vào cột 0, dòng 1
  // Lưu ý: dòng 1 là dòng thứ 2, lòng 0 là dòng thứ 1. Nôm na, nó đếm từ 0 từ không phải từ 1
  lcd.setCursor(0, 1);
  // In ra dong chu
  lcd.print("   SLAY!");
}