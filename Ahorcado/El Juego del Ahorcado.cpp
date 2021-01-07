#include<string>
#include<iostream>

using namespace std;


int Menu();
void Instrucciones();
void AgregarPalabra();

class jugador{
    string nombre;
    int victorias;
public:
    jugador();
    void mod_nombre();
    void ganar(bool v);
    void imprimir();
};

jugador::jugador()
{
    victorias=0;
}

void jugador::mod_nombre()
{
    cout<<endl<<"Nombre del jugador: " ;
    fflush(stdin);
    getline(cin,nombre);
    
    for(int i=0; nombre[i]; i++)
    {
         nombre[i]= toupper(nombre[i]);
    }
}

void jugador::ganar(bool v)
{
    if (v)
    {
       victorias++;
    }
    cout<<endl <<"\t\t" <<nombre <<" tienes " <<victorias <<" victorias." <<endl;
}

void jugador::imprimir()
{
cout<<nombre;
}


class palabra{
    string frase;
    string categoria;
public:
    palabra();
    void elegir_palabra();
    void escribir_palabra();
    bool comprobar();
};

palabra::palabra()
{
}

void palabra::elegir_palabra()
{
    srand(time(NULL));
    int N;
    int Filas=0;
    int opc;
    char palabra[200][50];
    char *Archivos[]={"","Colores.txt","Animales.txt","Escuela.txt","Deportes.txt","Casa.txt","Otros.txt"};
    char *Categorias[]={"","Colores","Animales","Escuela","Deportes","Casa","Otros"};
    FILE *datos;
        
    do{
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
           <<"\t6. Otros\n"
           <<"\t\tOpcion: ";
       cin>>opc;
    }while(!(opc<=6&&opc>=0));
    
    if(opc<=6&&opc>=1)
    {
        categoria=Categorias[opc];

        //Lectura de linea por linea del archivo:
        datos=fopen(Archivos[opc],"r");
        if (datos!=NULL)
        {
            while(!feof(datos))
            {
                fgets(palabra[Filas],50,datos);
                fflush(stdin);
                if(!feof(datos)){palabra[Filas][strlen(palabra[Filas])-1]='\0';}
                Filas++;
            }
            fclose(datos);     
            N=rand()%(Filas+1);    //Eleccion aleatoria de una palabra
            frase=palabra[N];
        }
        else 
        {
            cout<<"Error al abrir el archivo" <<endl;
        }  
    }
}

void palabra::escribir_palabra()
{
    cout<<endl<<" Introduce la(s) palabra(s) que se va a adivinar: ";
    fflush(stdin);
    getline(cin,frase);   
 
    for(int i=0; frase[i]; i++)
    {
         frase[i]= toupper(frase[i]);
    }
}

bool palabra::comprobar()
{
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
  
        cout<<"\t Introduce una letra para adivinar la palabra: ";
        do{
	        letra=toupper(getchar());    
	       }while(!isalpha(letra)); 
	       
    }while(chance > 1);


    if(gano) 
    {
        cout<<endl<<"\tFelicitaciones adivinaste la palabra!!!... :)"<<endl;    
    }
    else 
    {
        cout<<endl<<"\t Has perdido :( mejor suerte para la proxima, la palabra era "<<frase<<endl;
    }

return gano;
}



int main()
{
    int opcion;
    int salir=1;
    int regresar=1;
    bool vic;
    palabra p;
    jugador uno;
    jugador dos;
    
    do
    {
        opcion=Menu();
        switch(opcion)
        {
            case 1:
                uno.mod_nombre();
                do{
                p.elegir_palabra();
                uno.ganar(p.comprobar());
                cout<<endl <<"Desea volver a jugar 1/0? ";
                cin>>regresar;
                }while(regresar);
                break;
            case 2:
                cout<<endl <<"\tJUGADOR 1: "<<endl;
                uno.mod_nombre();
                cout<<endl <<"\tJUGADOR 2: "<<endl;
                dos.mod_nombre();
                do{
                system("cls");
                cout<<endl<<endl<<"\t";
                uno.imprimir();
                cout<<" escribe la palabra y ";
                dos.imprimir();
                cout<<" adivina." <<endl;
                p.escribir_palabra();
                vic=p.comprobar();
                uno.ganar(vic);
                dos.ganar(!vic);
                cout<<endl<<endl<<"\t";
                dos.imprimir();
                cout<<" escribe la palabra y ";
                uno.imprimir();
                cout<<" adivina." <<endl;
                p.escribir_palabra();
                vic=p.comprobar();
                dos.ganar(vic);
                uno.ganar(!vic);
                cout<<endl <<"Desea jugar otra ronda 1/0? ";
                cin>>regresar;
                }while(regresar); 
                break;
            case 3:
                Instrucciones();
                break;
            case 4:
                AgregarPalabra();
                break;
            case 5: 
                salir=0;
                break;
            default: cout<<"Opcion invalida!...\n"; break;
        }
    }while(salir);

}



int Menu()
{
    int o;
    system("cls"); system("color 1F");    
    cout<<"\n\t\t\t==== EL JUEGO DEL AHORCADO =====\n\n";
    cout<<"\t1. Un jugador"<<endl;
    cout<<"\t2. Dos jugadores"<<endl;
    cout<<"\t3. Instrucciones"<<endl;
    cout<<"\t4. Agregar palabra" <<endl;
    cout<<"\t5. Salir"<<endl;
    cout<<"\t\tOpcion: ";
    cin>>o;
    return o;
}

void AgregarPalabra()
{
    int op;
    string lexico;
    char temp[50];
    bool confirmar;
    char *Archivos[]={"","Colores.txt","Animales.txt","Escuela.txt","Deportes.txt","Casa.txt","Otros.txt"};
    char *Categorias[]={"","Colores","Animales","Escuela","Deportes","Casa","Otros"};
    FILE *datos;

    do{
    system("cls");       
    cout<<endl<<"\n===== Agregar Palabra A La Categoria =====\n\n " ;
    cout<<"\t1. Colores\n"
        <<"\t2. Animales\n"
        <<"\t3. Escuela-Educacion\n"
        <<"\t4. Deportes\n"
        <<"\t5. Casa\n"
        <<"\t6. Otros\n"
        <<"\t\tOpcion o pulse 0 para salir: ";

    cin>>op;
    }while(!(op>=0&&op<=6));
    
    if(op>=1&&op<=6)
    {
       cout<<endl<<" Introduce la(s) palabra(s) que quieres guardar: ";
       fflush(stdin);
       getline(cin,lexico);   
 
       for(int i=0; lexico[i]; i++)
       {
            lexico[i]= toupper(lexico[i]);
       }
       
       cout<<endl<<"\tCategoria:";
       puts(Categorias[op]);
       cout<<endl<<"\tDeseas guardar la palabra " <<lexico <<" en dicha categoria (0/1)? ";
       cin>>confirmar;
       
       for(int i=0; lexico[i]; i++)
       {
           temp[i]=lexico[i];
       }

       temp[strlen(temp)-1]='\0';
       
       if(confirmar)
       {
            //Escritura del la palabra al final del archivo:
            datos=fopen(Archivos[op],"w");
            if (datos!=NULL)
            {
               cout<<"Sirvio:" <<fseek(datos,1,SEEK_END);
               fprintf(datos,"\n%s",temp);
               fclose(datos);
               cout<<endl<<"\t\t"<<lexico <<" ha sido guardada exitosamente." <<endl;
               cout<<endl<<"\t\t";
               system("pause");
            }
            else 
            {
               cout<<"Error al abrir el archivo" <<endl;
            }  
       }
       
    }

}

void Instrucciones()
{
    system("cls");
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

