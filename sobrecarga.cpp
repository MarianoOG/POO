#include <iostream>
using namespace std;
//definicion de la clase Numero
class Numero
{
  friend ostream& operator<<(ostream&salida , const Numero&a);
  friend istream& operator>>(istream&salida, Numero &a);
  friend Numero operator+(const Numero &a,const Numero &b);
  friend Numero operator-(const Numero &a,const Numero &b);
  friend Numero operator/(const Numero &a,const Numero &b);
  friend Numero operator*(const Numero &a,const Numero &b);
 public:
  Numero(double x = 0);
  void establecer(double x);
 private:
  double x;
};

//Constructor
Numero::Numero(double b)
{establecer( b );}
void Numero::establecer(double a)
{x = a;}


//Sobrecarga de operadores, mediante funciones friend
Numero operator+(const Numero &a ,const Numero &b) {
  Numero temporal;
  temporal.x = a.x + b.x;
  return temporal;
}
Numero operator-(const Numero &a ,const Numero &b) {
  Numero temporal;
  temporal.x = a.x - b.x;
  return temporal;
}
Numero operator/(const Numero &a ,const Numero &b) {
  if (b.x == 0){
    cout << "error de division por 0. Detiene ejecucion." << endl;
    exit(1);
  }
  Numero temporal;
  temporal.x = a.x / b.x;
  return temporal;
}

Numero operator*(const Numero &a ,const Numero &b) {
  Numero temporal;
  temporal.x = a.x * b.x;
  return temporal;
}
ostream &operator<<(ostream& salida , const Numero& a){
  salida << a.x ;
  return salida;
}
istream &operator>>(istream& entrada, Numero & a){
  entrada >> a.x;
  return entrada;
}

//Probamos la clase.
int main()
{
  cout << "Tres numeros porfa: " << endl;
  Numero A;
  cin >> A;
  Numero B;
  cin >> B;
  Numero C;
  cin >> C;
  cout << "A = " << A << ", B = " << B << ", C = " << C << endl;
  Numero resultado;
  resultado = A - B + C;
  cout << "Resultado = A - B + C = " << resultado << endl;
  resultado = A / B ;
  cout << "Resultado = A / B = " << resultado << endl;
  resultado = A * resultado;
  cout << "Resultado = A * resultado = " << resultado << endl;
  resultado = B * resultado / A;
  cout << "Resultado = B * resultado / A = " << resultado << endl;
  system("pause");
  return 0;
}
