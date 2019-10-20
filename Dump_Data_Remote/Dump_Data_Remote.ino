#include <IRremote.h>
int RECV_PIN = 11; // PIN 11

IRrecv irrecv(RECV_PIN);
decode_results results;

void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn();
}
void loop() {
  if (irrecv.decode(&results)) {
    Serial.println(results.value);
    dump(&results);
    irrecv.resume(); // 
}
