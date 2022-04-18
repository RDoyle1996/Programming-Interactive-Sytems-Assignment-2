int LDRValue;
int VRx = A1;
int VRy = A2;
int fsrreading; //Variable to store FSR value

int xPosition = 0;
int yPosition = 0;
int mapX = 0;
int mapY = 0;

int val[6];


void setup() {
  Serial.begin(9600);
  pinMode(VRx, INPUT);
  pinMode(VRy, INPUT);
}

void loop() {
  LDRValue = analogRead(0);
  xPosition = analogRead(VRx);
  yPosition = analogRead(VRy);
  fsrreading = analogRead(A3);
 
  Serial.print(xPosition);
  Serial.print(" ");
  Serial.print(yPosition);
  Serial.print(" ");
  Serial.print(fsrreading);
  Serial.print(" ");
  Serial.println(LDRValue);
  delay(200);
}
