// Amanda Rosado Rosado
// Num. Est: 801-23-8238
// Tarea 2, Suma de dos fracciones

#include<iostream>
#include<cmath>
using namespace std;


int main(){

  //Doy a saber el proposito del programa
  cout << "Este programa suma dos fracciones elegidas por el usuario." << endl;


  //El usuario empieza a poner sus digitos
  cout << "Entre las fracciones: " << endl;

  int numerador1;
  cout << "Entre el numerador de su primera fraccion: " << endl;
  cin >> numerador1;
  

  int denominador1;
  cout << "Entre el denominador de su primera fraccion: " << endl;
  cin >> denominador1;


  int numerador2;
  cout << "Entre el numerador de su segunda fraccion: " << endl;
  cin >> numerador2;
  

  int denominador2;
  cout << "Entre el denominador de su segunda fraccion: " << endl;
  cin >> denominador2;



  //Formula para el numerador en la suma de fracciones
  int numerador_final = (numerador1 * denominador2) + (numerador2 * denominador1);

  //Formula del denominador en la suma de fracciones
  int denominador_final = denominador1 * denominador2;


  //El resultado de la suma de fracciones sin simplificar
  cout << "Este seria su resultado (sin simplificar): " << numerador_final << "/" << denominador_final << endl;




  return 0;
}
