#ifndef _sonidos_h_
#define _sonidos_h_

#include <Windows.h>
#include <stdio.h>

//******************************************************************************************************************************************//
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

//******************************************************************************************************************************************//

//Duracion de notas:
#define d2 20 //corchea
#define d3 30 //tresillo 
#define d4 40 //semicorchea
#define d8 80 //fusa
#define d16 160 //semifusa
#define p1 15

//******************************************************************************************************************************************//

//Funciones:
void nota(int nota,int tempo,int duracion){
if(duracion==d2|duracion==d3|duracion==d4|duracion==d8|duracion==d16){Beep(nota,(600000/(tempo*duracion)));}
else{
if(duracion==p1){Beep(nota,(6000/tempo)*duracion);}
else{Beep(nota,(60000/tempo)*duracion);}
}
}

void nota(int nota){Beep(nota,200);}

void silencio(int tempo,int duracion){
if(duracion==d2|duracion==d3|duracion==d4|duracion==d8|duracion==d16){Sleep(600000/(tempo*duracion));}
else{
if(duracion==p1){Sleep((6000*duracion)/tempo);}
else{Sleep((60000/tempo)*duracion);}
}
}

//******************************************************************************************************************************************//

void petit_chien(){
int tempo=220,i=0;
//Compás 1:
nota(Ab4,tempo,1);
nota(G5,tempo,d2);
nota(Ab5,tempo,d2);
nota(C6,tempo,d2);
nota(Bb5,tempo,d2);
//Compás 2:
nota(G5,tempo,d2);
nota(Ab5,tempo,d2);
nota(Bb5,tempo,d2);
nota(Ab5,tempo,d2);
nota(C6,tempo,d2);
nota(Bb5,tempo,d2);
//Compás 3:
nota(G5,tempo,d2);
nota(Ab5,tempo,d2);
nota(C6,tempo,d2);
nota(Bb5,tempo,d2);
nota(G5,tempo,d2);
nota(Ab5,tempo,d2);
//Compás 4:
nota(C6,tempo,d2);
nota(Bb5,tempo,d2);
nota(G5,tempo,d2);
nota(Ab5,tempo,d2);
nota(C6,tempo,d2);
nota(Bb5,tempo,d2);
//Compás 5:
nota(G5,tempo,d2);
nota(Ab5,tempo,d2);
nota(C6,tempo,d2);
nota(Bb5,tempo,d2);
nota(G5,tempo,d2);
nota(Ab5,tempo,d2);
//Compás 6:
/*nota(C6,tempo,d2);
nota(Bb5,tempo,d2);
nota(G5,tempo,d2);
nota(Ab5,tempo,d2);
nota(C6,tempo,d2);
nota(Bb5,tempo,d2);
//Compás 7:
nota(G5,tempo,d2);
nota(Ab5,tempo,d2);
nota(C6,tempo,d2);
nota(Bb5,tempo,d2);
nota(G5,tempo,d2);
nota(Ab5,tempo,d2);*/
//Compás 8:
nota(Bb5,tempo,d2);
nota(C6,tempo,d2);
nota(Db6,tempo,d2);
nota(Eb6,tempo,d2);
nota(F6,tempo,d2);
nota(Gb6,tempo,d2);
//Compás 9:
nota(Bb6,tempo,p1);
nota(Ab6,tempo,d2);
nota(Gb6,tempo,d2);
nota(F6,tempo,d2);
//Compás 10:
nota(F6,tempo,d2);
nota(Eb6,tempo,d2);
nota(Eb6,tempo,d2);
nota(D6,tempo,d2);
nota(Eb6,tempo,1);
//Compás 11:
nota(Bb6,tempo,p1);
nota(Ab6,tempo,d2);
nota(Gb6,tempo,d2);
nota(F6,tempo,d2);
//Compás 12:
nota(F6,tempo,d2);
nota(Eb6,tempo,d2);
nota(D6,tempo,d2);
nota(Eb6,tempo,d2);
nota(F6,tempo,d2);
nota(Bb5,tempo,d2);
//Compás 13:
nota(G5,tempo,d2);
nota(Ab5,tempo,d2);
nota(C6,tempo,d2);
nota(Bb5,tempo,d2);
nota(G5,tempo,d2);
nota(Ab5,tempo,d2);
//Compás 14:
nota(C6,tempo,d2);
nota(Bb5,tempo,d2);
nota(G5,tempo,d2);
nota(Ab5,tempo,d2);
nota(C6,tempo,d2);
nota(Bb5,tempo,d2);
//Compás 15:
nota(G5,tempo,d2);
nota(Ab5,tempo,d2);
nota(C6,tempo,d2);
nota(Bb5,tempo,d2);
nota(G5,tempo,d2);
nota(Ab5,tempo,d2);
//Compás 16:
nota(Bb5,tempo,d2);
nota(C6,tempo,d2);
nota(Db6,tempo,d2);
nota(Eb6,tempo,d2);
nota(F6,tempo,d2);
nota(Gb6,tempo,d2);
//Compás 17:
nota(Bb6,tempo,p1);
nota(Ab6,tempo,d2);
nota(Gb6,tempo,d2);
nota(F6,tempo,d2);
//Compás 18:
nota(F6,tempo,d2);
nota(Eb6,tempo,d2);
nota(Eb6,tempo,d2);
nota(D6,tempo,d2);
nota(Eb6,tempo,1);
//Compás 19:
nota(Bb6,tempo,p1);
nota(Ab6,tempo,d2);
nota(Gb6,tempo,d2);
nota(F6,tempo,d2);
//Compás 20:
nota(Eb6,tempo,d2);
nota(F6,tempo,d2);
nota(Eb6,tempo,d2);
nota(D6,tempo,d2);
nota(Eb6,tempo,d2);
nota(E6,tempo,d2);

while(1){
//Compás 21:
nota(F6,tempo,d3);
nota(Gb6,tempo,d3);
nota(F6,tempo,d3);
nota(E6,tempo,d2);
nota(F6,tempo,d2);
nota(Ab6,tempo,d2);
nota(Gb6,tempo,d2);
//Compás 22:
nota(F6,tempo,d2);
nota(Gb6,tempo,d2);
nota(F6,tempo,d2);
nota(E6,tempo,d2);
nota(F6,tempo,d2);
nota(Bb6,tempo,d2);
//Compás 23:
nota(Ab6,tempo,d3);
nota(Bb6,tempo,d3);
nota(Ab6,tempo,d3);
nota(G6,tempo,d2);
nota(Ab6,tempo,d2);
nota(C7,tempo,d2);
nota(Bb6,tempo,d2);
//Compás 24:                
nota(Ab6,tempo,d2);
nota(Bb6,tempo,d2);
nota(Ab6,tempo,d2);
nota(G6,tempo,d2);
nota(Ab6,tempo,d2);
nota(Db7,tempo,d2);
//Compás 25:
nota(C7,tempo,d2);
nota(Bb6,tempo,d2);
nota(Ab6,tempo,d2);
nota(Gb6,tempo,d2);
nota(F6,tempo,d2);
nota(Eb6,tempo,d2);
//Compás 26:
nota(Db6,tempo,d2);
nota(C6,tempo,d2);
nota(Bb5,tempo,d2);
nota(Ab5,tempo,d2);
nota(Gb5,tempo,d2);
nota(F5,tempo,d2);
//Compás 27:
nota(Eb5,tempo,d2);
nota(Db5,tempo,d2);
nota(C5,tempo,d2);
nota(Eb5,tempo,d2);
nota(Bb5,tempo,d2);
nota(Ab5,tempo,d2);
//Compás 28:
nota(G5,tempo,d2);
nota(Ab5,tempo,d2);
nota(Bb5,tempo,d2);
nota(C6,tempo,d2);
nota(Db6,tempo,d2);
nota(Eb6,tempo,d2);
//Compás 29:
nota(F6,tempo,d3);
nota(Gb6,tempo,d3);
nota(F6,tempo,d3);
nota(E6,tempo,d2);
nota(F6,tempo,d2);
nota(Ab6,tempo,d2);
nota(Gb6,tempo,d2);
//Compás 30:
nota(F6,tempo,d2);
nota(Gb6,tempo,d2);
nota(F6,tempo,d2);
nota(E6,tempo,d2);
nota(F6,tempo,d2);
nota(Bb6,tempo,d2);
//Compás 31:
nota(Ab6,tempo,d3);
nota(Bb6,tempo,d3);
nota(Ab6,tempo,d3);
nota(G6,tempo,d2);
nota(Ab6,tempo,d2);
nota(C7,tempo,d2);
nota(Bb6,tempo,d2);
//Compás 32:
nota(Ab6,tempo,d2);
nota(Bb6,tempo,d2);
nota(Ab6,tempo,d2);
nota(G6,tempo,d2);
nota(Ab6,tempo,d2);
nota(F7,tempo,d2);
//Compás 33:
nota(Eb7,tempo,d2);
nota(Db7,tempo,d2);
nota(C7,tempo,d2);
nota(Bb6,tempo,d2);
nota(Ab6,tempo,d2);
nota(Gb6,tempo,d2);
//Compás 34:
nota(F6,tempo,d2);
nota(Eb6,tempo,d2);
nota(Db6,tempo,d2);
nota(C6,tempo,d2);
nota(Bb5,tempo,d2);
nota(Ab5,tempo,d2);
//Compás 35:
nota(A5,tempo,d2);
nota(C6,tempo,d2);
nota(Bb5,tempo,d2);
nota(F5,tempo,d2);
nota(Gb5,tempo,d2);
nota(C5,tempo,d2);
if(i){break;}
//Compás 36-1:
nota(Db5,tempo,1);
silencio(tempo,1);
nota(F5,tempo,1);
i=1;
};
//Compás 36-2:
nota(Db5,tempo,3);
}

//******************************************************************************************************************************************//

void fiesta_de_cumpleanos(){
int tempo=120;
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
}

//******************************************************************************************************************************************//



//******************************************************************************************************************************************//
#endif
