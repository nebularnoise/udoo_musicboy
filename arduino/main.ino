#define RIGHT_JOYSTICK_SW_PIN 7
#define LEFT_JOYSTICK_SW_PIN 6
#define EXT_SW_PIN 2

#define RIGHT_JOYSTICK_Y_PIN A0
#define RIGHT_JOYSTICK_X_PIN A1
#define LEFT_JOYSTICK_Y_PIN  A2
#define LEFT_JOYSTICK_X_PIN  A3

int rx = 0;
int ry = 0;
bool rsw = false;

int lx = 0;
int ly = 0;
bool lsw = false;

bool esw = false;

void setup()
{
  // DIGITAL INPUTS
  pinMode(RIGHT_JOYSTICK_SW_PIN,  INPUT_PULLUP);
  pinMode(LEFT_JOYSTICK_SW_PIN,   INPUT_PULLUP);
  pinMode(EXT_SW_PIN,             INPUT_PULLUP);

  // ANALOG INPUTS
  pinMode(RIGHT_JOYSTICK_Y_PIN, INPUT);
  pinMode(RIGHT_JOYSTICK_X_PIN, INPUT);
  pinMode(LEFT_JOYSTICK_Y_PIN,  INPUT);
  pinMode(LEFT_JOYSTICK_X_PIN,  INPUT);

  Serial.begin(115200);
}

void loop()
{
  rx  = analogRead(RIGHT_JOYSTICK_X_PIN);
  ry  = analogRead(RIGHT_JOYSTICK_Y_PIN);
  rsw = digitalRead(RIGHT_JOYSTICK_SW_PIN) == LOW;
  Serial.println("RX "  + rx);
  Serial.println("RY "  + ry);
  Serial.println("RSW " + rsw);

  lx  = analogRead(LEFT_JOYSTICK_X_PIN);
  ly  = analogRead(LEFT_JOYSTICK_Y_PIN);
  lsw = digitalRead(LEFT_JOYSTICK_SW_PIN) == LOW;
  Serial.println("LX "  + lx);
  Serial.println("LY "  + ly);
  Serial.println("LSW " + lsw);

  esw = digitalRead(EXT_SW_PIN) == LOW;
  Serial.println("ESW " + esw);

  delay(5); // wait for 5ms
}
