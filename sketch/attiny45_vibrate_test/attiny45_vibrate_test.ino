#define V_ON  40
#define V_OFF 300
#define V_INTERVAL 1500
#define V_COUNT 7
#define V_SLEEP 180

void setup( ) {
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void vibrate_on(int n) {
  for (int i = 0; i < n; i ++) {
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    delay(3);
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    delay(3);
  }
}

void vibrate_off(int s) {
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  delay(s);
}

void vibrate(int n) {
  for (int i = 0; i < n; i ++) {
    vibrate_on(V_ON);
    vibrate_off(V_OFF);
    vibrate_on(V_ON);
    vibrate_off(V_OFF);
    vibrate_on(V_ON);
    vibrate_off(V_OFF);  
    delay(V_INTERVAL);
  }
}

void sleep(int n) {
  for (int i = 0; i < n; i ++) {
    delay(1000);
  }
} 

void loop() {
  vibrate(V_COUNT);
  sleep(V_SLEEP);
}





