//#ifndef _sonidos_h_
//#define _sonidos_h_

#include <Windows.h>
#include <stdio.h>

//FRECUENCIAS DE LAS NOTAS:
#define C2 65
#define Cs2 69
#define Db2 69
#define D2 73
#define Ds2 78
#define Eb2 78
#define E2 82
#define F2 87
#define Fs2 92
#define Gb2 92
#define G2 98
#define Gs2 104
#define Ab2 104
#define A2 110
#define As2 117
#define Bb2 117
#define B2 123
#define C3 131
#define Cs3 139
#define Db3 139
#define D3 147
#define Ds3 156
#define Eb3 156
#define E3 165
#define F3 175
#define Fs3 185
#define Gb3 185
#define G3 196
#define Gs3 208
#define Ab3 208
#define A3 220
#define As3 233
#define Bb3 233
#define B3 247
#define C4 262
#define Cs4 277
#define Db4 277
#define D4 294
#define Ds4 311
#define Eb4 311
#define E4 330
#define F4 349
#define Fs4 370
#define Gb4 370
#define G4 392
#define Gs4 415
#define Ab4 415
#define A4 440
#define As4 466
#define Bb4 466
#define B4 494
#define C5 523
#define Cs5 554
#define Db5 554
#define D5 587
#define Ds5 622
#define Eb5 622
#define E5 659
#define F5 698
#define Fs5 740
#define Gb5 740
#define G5 784
#define Gs5 831
#define Ab5 831
#define A5 880
#define As5 932
#define Bb5 932
#define B5 988
#define C6 1047
#define Cs6 1109
#define Db6 1109
#define D6 1175
#define Ds6 1245
#define Eb6 1245
#define E6 1319
#define F6 1397
#define Fs6 1480
#define Gb6 1480
#define G6 1568
#define Gs6 1661
#define Ab6 1661
#define A6 1760
#define As6 1865
#define Bb6 1865
#define B6 1976
#define C7 2093
#define Cs7 2217
#define Db7 2217
#define D7 2349
#define Ds7 2489
#define Eb7 2489
#define E7 2637
#define F7 2794
#define Fs7 2960
#define Gb7 2960
#define G7 3136
#define Gs7 3322
#define Ab7 3322
#define A7 3520
#define As7 3729
#define Bb7 3729
#define B7 3951
#define C8 4186
#define Cs8 4435
#define Db8 4435
#define D8 4699
#define Ds8 4978
#define Eb8 4978
#define E8 5274
#define F8 5588
#define Fs8 5920
#define Gb8 5920
#define G8 6272
#define Gs8 6645
#define Ab8 6645
#define A8 7040
#define As8 7459
#define Bb8 7459
#define B8 7902
#define C9 8372

void nota(int nota,int tempo,int duracion){
Beep(nota,(60000/tempo)*duracion);
}

int main(){
int tempo;
tempo=120;

nota(C4,tempo,1);
nota(D4,tempo,1);
nota(E4,tempo,2);
nota(C4,tempo,1);
nota(D4,tempo,1);
nota(E4,tempo,2);
nota(D4,tempo,1);
nota(C4,tempo,1);
nota(D4,tempo,1);
nota(E4,tempo,1);
nota(C4,tempo,2);
nota(C4,tempo,2);

system("Pause");
return 0;}

//Beep(Frecuencia(Hz),Duracion(ms));

//#endif
