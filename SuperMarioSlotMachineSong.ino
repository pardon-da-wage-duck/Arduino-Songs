// Kyle Jiang
// Period 8/9 Even
// Tutorial 2.07 Passive Buzzer
// Learn to play songs on a passive buzzer.
// 1/10/24 - 1/10/24

#include <toneAC.h>

//these variables identify the frequency of each note in a c major scale
int c5 = 523, d5 = 587, e5 = 659, f5 = 698, g5 = 784, a5 = 880, b5 = 988;
int c6 = 1047, d6 = 1175, e6 = 1319, f6 = 1397, g6 = 1568, a6 = 1760, b6 = 1976, c7 = 2093;
int rest = 0;
int note = 0;
int volume = 3;

//array to hold the notes we want the buzzer to play
//notice that the array type is int, because each variable is holding an integer
int melody1[] = {d5, d5,  rest, d5, rest, d5,  rest, d5, d5, d5,  rest, d5,  rest, d5,  rest, d5, d5, d5,  rest, d5,  rest, d5,  rest, d5,  rest, f5, e5
                };
unsigned long delay1[] = {125, 125, 62, 62, 62, 62, 62, 62, 125, 125, 62, 62, 62, 62, 62, 62,125, 125, 62, 62, 62, 62, 62, 62, 125, 125
};

void setup() {}

void loop() {
  if(note >= 26) note = 0;
  playNote(melody1[note], delay1[note]);
  note++;
}

void playNote(int frequency, int delay1){
  toneAC(frequency, volume);
  delay(delay1);
  noToneAC();
  delay(delay1);
}