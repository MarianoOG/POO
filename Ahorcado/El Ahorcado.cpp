#include<string>
#include<iostream>
using namespace std;
   
   
   
char *PColores[]={  "ROJO","VERDE","AMARILLO","MAGENTA","VIOLETA",
                    "BERMELLON","LILA","NEGRO","CAFE","AZUL CIELO",
                    "VERDE","MORADO","PLATEADO","BLANCO","ANARANJADO",
                    "ROSA MEXICANO","GRIS","BEIGE","DORADO","PURPURA",
                    "AZUL REY","ROSA","GUINDA","VERDE LIMON","AMARILLO HUEVO"};
                    
char *PAnimales[]={ "CABALLO","PERRO","LEON MARINO","ELEFANTE","OVEJA",
                    "VACA","IGREGO","AGUILA","ARDILLA","OSO POLAR",
                    "CAMELLO","MORSA","DROMEDARIO","LAGARTO","HIPOPOTAMO",
                    "GALLINA","POLLUELO","COLIBRI","TIBURON","ORNITORRINCO",
                    "BALLENA JOROBADA","JIRAFA","CUERVO","GUAJOLOTE","AVESTRUZ"};
                    
char *PDeportes[]={ "FUTBOL","BASQUETBOL","VOLEIBOL","WATERPOLO","NATACION",
                    "BOXING","BEISBOL","FUTBOL AMERICANO","MINI GOLF","HOCKEY",
                    "TENIS","BADMINTON","ATLETISMO","CICLISMO","EQUITACION",
                    "ESQUI","REMO","BALONCESTO","PING PONG","GIMNASIA",
                    "PATINAJE","SKATING","SQUASH","RAQUETBOL","ALPINISMO"};
                    
char *PCasa[]={     "REFRIGERADOR","TELEVISOR","ESTUFA","REPRODUCTOR DVD","RADIO",
                    "COMPUTADOR","MESA","SILLA","PUERTA","VENTANA",
                    "TEJADO","SOTANO","RECAMARA","COMEDOR","SALA",
                    "SOFA","CORTINA","MANTEL","SABANA","ROPERO",
                    "VITRINA","ALACENA","INODORO","CAMA","LIBRERO"};
                    
char *PEscuela[]={  "LIBRO","MATEMATICAS","ALUMNO","ESTUDIANTE","DIRECTOR",
                    "PLANTEL","CUADERNO","BOLIGRAFO","EXAMEN","LAPIZ",
                    "SACAPUNTAS","CONSERJE","PREFECTO","PROFESOR","BORRADOR",
                    "PIZARRON","ESCRITORIO","PUPITRE","EJERCICIO","ASIGNATURA",
                    "CLASE","AULA","ESCUELA PRIMARIA","ESCUELA SECUNDARIA","IPN"};

int opcion;
string frase;
string categoria;
char rep[100];      // Cadena de caracteres para almacenar si existen caracteres repetidos
char temporal[100]; // Cadena para almacenar temporalmente las letras que va introduciendo el usuario
char letra;         // Letra que introduce el usuario tratando de adivinar
int longitud;
int i,j;
int acertado=0;
int temp=0;
int chance=7;       // Numero de oportunidades que tiene el usuario para acertar una palabra
bool repetido=false;
bool gano=false; 
string nombre1, nombre2;





int Menu();
void UnJugador();
void DosJugadores();
void Instrucciones();

   
int Menu()
{
   
    system("cls");  system("color 1F") ;
    
    cout<<"\n\t\t\t==== EL JUEGO DEL AHORCADO =====\n\n";
    cout<<"\t1. Un jugador"<<endl;
    cout<<"\t2. Dos jugadores"<<endl;
    cout<<"\t3. Instrucciones"<<endl;
    cout<<"\t4. Salir"<<endl;
    cout<<"\t\tOpcion: ";
    cin>>opcion;
    return opcion;
}

void UnJugador()
{
    srand(time(NULL));
    int N=rand()%20+1;
        
    int opc;
    
    #ifndef PANTALLA
    #define PANTALLA
    system("cls");
    #endif
    cout<<endl<<"\n===== Categorias =====\n\n " ;
    cout<<"\t1. Colores\n"
        <<"\t2. Animales\n"
        <<"\t3. Escuela-Educacion\n"
        <<"\t4. Deportes\n"
        <<"\t5. Casa\n"
        <<"\t\tOpcion o pulse 0 para salir: ";
    cin>>opc;
    
    switch(opc)
    {
        case 1:
            frase=PColores[N];
            categoria="COLORES";
            break;
        case 2:
            frase=PAnimales[N]; 
            categoria="ANIMALES";
            break;
        case 3:
            frase=PEscuela[N];
            categoria="ESCUELA";
            break;
        case 4:
            frase=PDeportes[N];
            categoria="DEPORTES";
            break;
        case 5:
            frase=PCasa[N];
            categoria="CASA";
            break;
        case 0:
             exit(1);
            break;
            default: cout<<"Opcion invalida!...\n"; break;
    }       
        
    cout<<endl<<"Nombre del jugador: " ;
    fflush(stdin);
    getline(cin,nombre1);
    
    for(int i=0; nombre1[i]; i++)
    {
         nombre1[i]= toupper(nombre1[i]);
    }
    
    
}

void DosJugadores()
{
     // Obtenemos el nombredejugador 1 y lo convertimos a mayusculas
    cout<<endl<<"Nombre del jugador 1: " ;
    fflush(stdin);getline(cin,nombre2);
    
    for(int i=0; nombre2[i]; i++)
    {
         nombre2[i]= toupper(nombre2[i]);
    }
    
    cout<<endl<<"Nombre del jugador 2: " ;
    fflush(stdin);getline(cin,nombre1);
    for(int i=0; nombre1[i]; i++)
    {
         nombre1[i]= toupper(nombre1[i]);
    }
       
    cout<<endl<<nombre2<<" introduce la(s) palabra(s) que "<<nombre1<<" va a adivinar: ";
    getline(cin,frase);   
     
    for(int i=0; frase[i]; i++)
    {
         frase[i]= toupper(frase[i]);
    }
   
     
} 
void Instrucciones()
{
    cout<<"\n\n===== INSTRUCCIONES DEL JUEGO =====\n\n"
        <<"Para elegir el modo de 1 jugador, presionar 1 y despues <ENTER>\n"
        <<"y para elegir el modo de 2 jugadores presionar el numero 2 y <ENTER>\n"
        <<"\nEn el modo de un solo jugador, el participante debe elegir\n"
        <<"Una de las caategorias de palabras que se muestran y presionar\n"
        <<"<ENTER>, despues se mostraran unas lineas, el jugador debe escribir\n"
        <<"la letra que desea adivinar en la palabra de la categoria que eligio,\n"
        <<"se mostraran las cantidad de intentos que quedan para adivinar, 6 al inicio\n"
        <<"las letras adivinadas se iran descubriendo, el objetivo es adivinar la\n" 
        <<"palabra en menos de 6 intentos.\n\n" 
        <<"E el caso de 2 jugadores, uno propone una palabra y el otro debe adivinarla\n" 
        <<"Si el jugador adivina la palabra gana y pierde el otro, si no la adivina\n"
        <<"Perde y gana su compañero\n"  
        ;
        system("pause");
        
    }


   
   
   

  
int main() 
{
    
    do
    {
        opcion=Menu();
        switch(opcion)
        {
            case 1: 
                UnJugador();
                break;
            case 2:
                DosJugadores();
                break;
            case 3:
                Instrucciones();
                break;
            case 4: 
                exit(1);
                break;
        }
    
    longitud = 0;
    j = 0;    
    rep[0] = ' ';
    rep[1] = '\0';

            for(i=0;i<frase.size();i++) 
            {
                if(frase[i] == ' ') 
                {
                    temporal[i] = ' ';
                    longitud++;
                }
                else 
                {
                    temporal[i] = '_';	
                    longitud++;
                }
            }
    do{
	    system("cls");
        temp=0;
               

        temporal[longitud] = '\0';

        for(i=0;i<strlen(rep);i++) 
        {
            if(rep[i] == letra) 
            {
                repetido = true;
                break;
            } 
            else 
            {
                repetido = false;
            }
        }

        if(repetido == false) 
        {
            for(i=0;i<frase.size();i++) 
            {
	           if(frase[i] == letra) 
                {
	               temporal[i] = letra;
	               acertado++;
	               temp = 1;
	            } 
            }
            
            if(temp == 0) 
                chance = chance - 1;
        }
        if(opcion==1 ||opcion==2)
        { 
        cout<<endl;
        cout<<"\t\t=== CATEGORIA: "<<categoria<<" ===\n\n\t";

        for(i=0;i<strlen(temporal);i++) 
        {
            cout<<" "<<temporal[i]<<" ";
        }

        cout<<endl<<endl;

        if(frase.compare(temporal) == 0)   
        {
	       gano = true;
	       break;
        }

        cout<<"\tLetras Acertadas: "<<acertado<<endl;
        cout<<"\tOportunidades Restantes: "<<chance<<endl;
        
        rep[j] = letra;
        j++;
  
        cout<<"\t"<<nombre1<<" Introduce una letra para adivinar la palabra: ";
        do{
	        letra=toupper(getchar());    
	       }while(!isalpha(letra)); 
    }
    }while(chance > 1);
     if(opcion==1 ||opcion==2)
        {   
    if(gano) 
    {
    cout<<endl<<"\tFelicitaciones "<<nombre1<<" adivinaste la palabra!!!... :)"<<endl;
    
    if(opcion==2)
    {
        cout<<endl<<"\t"<<nombre2<<" has perdido! :( ... "<<endl<<endl;
    }
    
    }
    else 
    {
        cout<<"\t"<<endl <<nombre1<<" has perdido :( mejor suerte para la proxima, la palabra era "<<frase<<endl;
        if(opcion==2)
        {
            cout<<endl<<"\t"<<nombre2<<" gano :)"<<endl<<endl;
        }
    }
    }
    system("pause");   
        
    }while(opcion=!4);
    
    return 0;

}

 /*
void AbrirArchivo()
{
    ifstream entrada("Palabras.txt");
    ifstream input;
    char c;
    input.open("Palabras.txt");
    if (entrada.good())
    cout << "El archivo Hola.txt fue abierto correctamente";
    else
    cout << "El archivo Hola.txt no pudo ser abierto correctamente";
    cout << endl;
    
    entrada >> c;
    entrada.close();
    input.close() 
     
    // Fichero original, se abre para lectura pasando parámetros en la declaración de la variable 
   ifstream f("fichero.txt", ifstream::in);

   // Fichero nuevo para copiar, se abre después de declararlo, llamando a open() 
   ofstream f2;
   f2.open("fichero2.txt", ofstream::out);
    
    
} 
 /*
void EscribirArchivo(string palabra)
{
    ofstream salida("Palabras.txt");
    ofstream output;
    output.open("Palabras.txt");
    salida << palabra;
    salida.close();
    output.close();
} */
