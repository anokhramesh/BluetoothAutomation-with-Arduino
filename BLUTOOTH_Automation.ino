// initilize relay pins
int relay_1 = 12; // connect relay1 to pin 12 of arduino
int relay_2 = 11; // connect relay2 to pin 11 of arduino
int relay_3 = 10; // connect relay3 to pin 10 of arduino
int relay_4 = 9; // connect relay4 to pin 9 of arduino
char inputByte;// declare a char variable name  'inputByte'
void setup() {
  Serial.begin(9600);// set baud rate
  pinMode(relay_1, OUTPUT); // set relay_1 as an output
  pinMode(relay_2, OUTPUT); // set relay_2 as an output
  pinMode(relay_3, OUTPUT); // set relay_3 as an output
  pinMode(relay_4, OUTPUT); // set relay_4 as an output
}
void loop() {
  while (Serial.available() > 0) // checking any data is available on serial terminal
  {
    inputByte = Serial.read(); //
    Serial.println(inputByte);//'inputByte' will hold the data from bluetooth
    if (inputByte == '0') // condition checing -if serial data is 0
    {
      digitalWrite(relay_1, HIGH); //Turn ON the relay 1
    }
    else if (inputByte == '1') // condition checing -if serial data is 1

    {
      digitalWrite(relay_1, LOW); //Turn OFF the relay 1
    }
    if (inputByte == '2') // condition checing -if serial data is 2
    {
      digitalWrite(relay_2, HIGH); //Turn ON the relay 2
    }
    else if (inputByte == '3') // condition checing -if serial data is 3
    {
      digitalWrite(relay_2, LOW); //Turn OFF the relay 2
    }
    if (inputByte == '4') // condition checing -if serial data is 4
    {
      digitalWrite(relay_3, HIGH); //Turn ON the relay 3
    }
    else if (inputByte == '5') // condition checing -if serial data is 5
    {
      digitalWrite(relay_3, LOW); //Turn OFF the relay 3
    }
    if (inputByte == '6') // condition checing -if serial data is 6
    {
      digitalWrite(relay_4, HIGH); //Turn ON the relay 4
    }
    else if (inputByte == '7') // condition checing -if serial data is 7
    {
      digitalWrite(relay_4, LOW); //Turn OFF the relay 4
    }
  }
}
