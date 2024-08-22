/*
 * --------------------------------------------------------------------------------------------------------------------
 * Example sketch/program showing how to read new NUID from a PICC to serial.
 * --------------------------------------------------------------------------------------------------------------------
 * This is a MFRC522 library example; for further details and other examples see: https://github.com/miguelbalboa/rfid
 * 
 * Example sketch/program showing how to the read data from a PICC (that is: a RFID Tag or Card) using a MFRC522 based RFID
 * Reader on the Arduino SPI interface.
 * 
 * When the Arduino and the MFRC522 module are connected (see the pin layout below), load this sketch into Arduino IDE
 * then verify/compile and upload it. To see the output: use Tools, Serial Monitor of the IDE (hit Ctrl+Shft+M). When
 * you present a PICC (that is: a RFID Tag or Card) at reading distance of the MFRC522 Reader/PCD, the serial output
 * will show the type, and the NUID if a new card has been detected. Note: you may see "Timeout in communication" messages
 * when removing the PICC from reading distance too early.
 * 
 * @license Released into the public domain.
 * 
 * Typical pin layout used:
 * -----------------------------------------------------------------------------------------
 *             MFRC522      Arduino       Arduino   Arduino    Arduino          Arduino
 *             Reader/PCD   Uno/101       Mega      Nano v3    Leonardo/Micro   Pro Micro
 * Signal      Pin          Pin           Pin       Pin        Pin              Pin
 * -----------------------------------------------------------------------------------------
 * RST/Reset   RST          9             5         D9         RESET/ICSP-5     RST
 * SPI SS      SDA(SS)      10            53        D10        10               10
 * SPI MOSI    MOSI         11 / ICSP-4   51        D11        ICSP-4           16
 * SPI MISO    MISO         12 / ICSP-1   50        D12        ICSP-1           14
 * SPI SCK     SCK          13 / ICSP-3   52        D13        ICSP-3           15
 *
 * More pin layouts for other boards can be found here: https://github.com/miguelbalboa/rfid#pin-layout
 */

#include <Wire.h>//i2c 
#include <LiquidCrystal_I2C.h>
// #define green 6
// #define red 7
 
// // #define water 3
// #define bazzer 2

// int readvalue=0;
// #define valve 7
// #define pumb 6
// #define soile_sensor A0
// #define water_sensor 8
// #define power12 12



LiquidCrystal_I2C lcd(0x27,16,2); 

void setup() { 
  
  Serial.begin(9600);//UART protocol start
  
    lcd.init(); // initialize the lcd 
// pinMode(valve,OUTPUT);
// pinMode(power12,OUTPUT);
// pinMode(pumb,OUTPUT);
// pinMode(soile_sensor,INPUT);
// pinMode(water_sensor,INPUT);
// digitalWrite(power12,HIGH);

  //------------pins difnation-------------
  // pinMode(green,OUTPUT);
  // // pinMode(water,INPUT);
  // pinMode(red,OUTPUT);
  // // pinMode(motionPin,INPUT);
  // pinMode(bazzer,OUTPUT);
}
 
void loop() {
//   int w=digitalRead(water_sensor);
//   delay(2);
//   int s=analogRead(soile_sensor);
  
//  Serial.print("water =");
//  Serial.println(w);
//  delay(200);
//  Serial.print("soil =");
//  Serial.println(s);
//  delay(200);

  //----------------
    lcd.backlight();
  
 
  // if (s<300){
    lcd.print(" VLAVE:OFF");
  //  digitalWrite(valve,HIGH);
//  }
//  else{
//   lcd.print(" VLAVE:ON");
//   digitalWrite(valve,LOW);
//  }
//   lcd.print("                  ");
//   lcd.setCursor(0,0);
  
//  if(w==1){
//   lcd.print("PUMB:OFF");
//   digitalWrite(pumb,HIGH);
//  }
//  else{
//   lcd.print("PUMB:ON");
//    digitalWrite(pumb,LOW);
//  }
//   lcd.print(" SV=");
//   lcd.print(s);
//  lcd.print("                     ");
}


