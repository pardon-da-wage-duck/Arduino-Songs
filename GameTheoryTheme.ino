// Song Name: 
// 1/10/24 - 1/10/24

#include <toneAC.h>

//these variables identify the frequency of each note in a c major scale
int c5 = 523, d5 = 587, e5 = 659, f5 = 698, g5 = 784, a5 = 880, b5 = 988;
int c6 = 1047, d6 = 1175, e6 = 1319, f6 = 1397, g6 = 1568, a6 = 1760, b6 = 1976, c7 = 2093;
int rest = 0;

//array to hold the notes we want the buzzer to play
//notice that the array type is int, because each variable is holding an integer
int melody1[] = {a5, a5, g5, g5, a5, 
                a5, c6, a5, d6, e6, d6, e6, f6,
                g6, a6, b6, c7, b6, a6, g6, a5, a6,
                g5, a6, g6, e6, g6, e6, d6, c6,
                a5, a5, g5, g5, a5,
                a5, c6, a5, d6, e6, d6, e6, f6,
                g6, a6, b6, c7, b6, a6, g6, a5, a6,
                c7, rest, b6, rest, a6, rest, g6, rest,
                e6, rest};
int delay1[] = {250, 250, 125, 250, 125, 
               125, 125, 125, 125, 125, 125, 125, 125,
               125, 125, 125, 125, 125, 125, 125, 125,
               125, 125, 125, 125, 125, 125, 125, 125,
               250, 250, 125, 250, 125,
               125, 125, 125, 125, 125, 125, 125, 125,
               125, 125, 125, 125, 125, 125, 125, 125,
               250, 50, 250, 50, 250, 50, 250, 50,
               250, 50};

void setup() {}

void loop() {
  for(int i = 0; i < 60; i++){  //length 46
    playNote(melody1[i], delay1[i]);
  }
}

void playNote(int frequency, int delay1){
  toneAC(frequency, 2);
  delay(delay1);
  noToneAC();
}
