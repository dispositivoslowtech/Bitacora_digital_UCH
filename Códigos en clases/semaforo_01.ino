
// CURSO DE SENSORES LOW-TECH UCH
// Ejercicio de Semáforo
// 1. Definir los pines donde está conectado cada LED
#define LED_ROJO 2
#define LED_VERDE 3
#define LED_AMARILLO 4

// 2. EL "void setup" ejecuta UNA SOLA VEZ cuando encendemos o reiniciamos Arduino
void setup() {

  // Configuramos cada pin como SALIDA 
  pinMode(LED_ROJO, OUTPUT);
  pinMode(LED_VERDE, OUTPUT);
  pinMode(LED_AMARILLO, OUTPUT);
}
// 3. El "void loop" se repite continuamente mientras Arduino esté encendido
void loop() {
  // HIGH = encender
  digitalWrite(LED_ROJO, HIGH);
  // Esperar 1000 milisegundos = 1 segundo
  delay(1000);
  // LOW = apagar
  digitalWrite(LED_ROJO, LOW);
  // Lo mismo con cada led 
  digitalWrite(LED_VERDE, HIGH);
  delay(1000);
  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_AMARILLO, HIGH);
  delay(1000);
  digitalWrite(LED_AMARILLO, LOW);
  // Al terminar, Arduino vuelve automáticamente al comienzo de void loop()
}