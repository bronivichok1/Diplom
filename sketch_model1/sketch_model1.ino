
const int16_t int_data PROGMEM = 2023;
void setup() {
  Serial.begin(9600);
Serial.println(pgm_read_word(&int_data));  // выведет 64882
  Serial.println((int16_t)pgm_read_word(&int_data));  // выведет -654

}
void loop() {
  // put your main code here, to run repeatedly:

}
