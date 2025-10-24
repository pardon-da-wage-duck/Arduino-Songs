// Song: Seishun complex
// Opening songs to Bocchi the Rock
// 1/10/24 - 1/10/24

#include <toneAC.h>

//these variables identify the frequency of each note in a c major scale
int b3 = 247, a3 = 220, g3 = 196, f3 = 175, e3 = 165, d3 = 147, c3 = 131 ;
int c4 = 262, d4 = 294, e4 = 330, f4 = 349;
int g4 = 392, a4 = 440, b4 = 494;
int a5 = 880, b5 = 988, c5 = 523, d5 = 587 ;
int rest = 0;

//array to hold the notes we want the buzzer to play
//notice that the array type is int, because each variable is holding an integer
int melody1[] = {e4, e4, d4, rest, d4, c4, d4, a5, d4, c4, d4, e4, f4, e4, d4, c4, a4, d4, c4, d4, a5, d4, c4, d4, e4, f4, e4,
d4, c4, d4, a5, d4, c4, d4, e4, f4, e4, d4, c4, a4, d4, c4, d4, a5, d4, c4};
int delay1[] = {500, 500, 500, 1000, 125, 125, 125, 125, 500, 500, 500, 75, 75, 125, 125, 125, 125, 125, 125, 125, 125, 75, 75, 75, 32, 32, 250,
125, 125, 125, 125, 500, 500, 500, 75, 75, 125, 125, 125, 125, 125, 125, 125, 125, 75, 75, 75, 32, 32, 250};

void setup() {}

void loop() {
  for(int i = 0; i < 46; i++){  //length 46
    playNote(melody1[i], delay1[i], delay1[i]);
  }
  delay(3000);                  //delay before the song restarts
}

void playNote(int frequency, int delay1, int delay2){
  toneAC(frequency, 3);  //turns the buzzer on at 500hz
  delay(delay1);
  noToneAC();      //stops the buzzer
  delay(delay2);
}
