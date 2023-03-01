// assigning variables to the digital pins on the arduino board
const int RELAY_1 = 27;
const int RELAY_2 = 14;
const int RELAY_3 = 12;
const unsigned long ONTIME = 2100;
const unsigned long OFFTIME = 700;
const unsigned long MEANINGOFLIFE = 42;

// ESP32
// 3 pcs ThermoTech 200mm x 100 mm (P_max = 200 W each)
// ONTIME and OFFTTIME are activated for one module at a time and in a continuous loop: Heating Pad 1, Heating Pad 2, Heating Pad 3, Heating Pad 1, etc

// P = 200 W ONTIME = 2000 OFFTIME = 0
// P = 150 W ONTIME = 2100 OFFTIME = 700
// P = 100 W ONTIME = 2000 OFFTIME = 2000
//e.g.: ONTIME = 2100 ms and OFFTIME =  700 ms will lead to an average overall P = ONTIME/(ONTIME+OFFTIME)*P_max = 150 W

void setup() {
  // initialize digital pins as an output.
  pinMode(RELAY_1, OUTPUT);
  pinMode(RELAY_2, OUTPUT);
  pinMode(RELAY_3, OUTPUT);
}

void loop() {

  // heating pad 1
  digitalWrite(RELAY_3, LOW);
  digitalWrite(RELAY_1, HIGH);
  delay(ONTIME);
  digitalWrite(RELAY_1, LOW);
    delay(OFFTIME);

  // heating pad 2
  digitalWrite(RELAY_1, LOW);
  digitalWrite(RELAY_2, HIGH);
  delay(ONTIME);
    delay(OFFTIME);

  // heating pad 3
  digitalWrite(RELAY_2, LOW);
  digitalWrite(RELAY_3, HIGH);
  delay(ONTIME);
     digitalWrite(RELAY_3, LOW);
     delay(OFFTIME);
}

// sources used: https://arduinogetstarted.com/tutorials/arduino-relay
