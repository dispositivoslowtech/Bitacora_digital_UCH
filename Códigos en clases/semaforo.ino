#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#define LED_AMARILLO 2

LiquidCrystal_I2C lcd(0x27, 16, 2); // Pantalla LCD (usa 0x3F si no se ve)
int sensor = A0; // Pin del sensor de luz (LDR)

void setup() {
  pinMode(LED_AMARILLO, OUTPUT);
  lcd.init();        // Inicia la pantalla
  lcd.backlight();   // Enciende la luz de fondo
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Sensor de Luz");
}

void loop() {
 
  digitalWrite(LED_AMARILLO, HIGH);
  delay(1000); // Esperar un segundo
  digitalWrite(LED_AMARILLO, LOW);
  
  int valor = analogRead(sensor);  // Lee el valor del sensor (0 a 1023)

  lcd.setCursor(0, 1);             // Segunda línea
  lcd.print("Valor: ");
  lcd.print(valor);                // Muestra el número
  lcd.print("    ");               // Borra restos de números anteriores

  delay(300);                      // Espera un poquito
}