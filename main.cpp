//Programa de pasar números a letras
#include <string>
#include <iostream>

using namespace std;

// Declaración de variables
  int num; 
  int unid;
  int dec;
  int cent; 

int main() //Cadena de string, es una secuencia de  caracteres
{
    string unidades[] = 
    {"cero", "uno", "dos" ,"tres" ,"cuatro" ,"cinco" ,
     "seis" ,"siete" ,"ocho" ,"nueve","diez"};

    string diferentes[] = 
    {"once", "doce","trece","catorce", "quince",
    "diezciseis", "diecisiete", "dieciocho", "diecinueve"};

    string decenas[] = 
    {"veinte", "treinta","cuarenta","cincuenta", "sesenta",
    "setenta", "ochenta", "noventa"};

    string centenas[] = 
    {"cien","ciento", "doscientos","trescientos",     "cuatrocientos", "quinientos","seiscientos", "setecientos", "ochocientos", "novecientos"};
    
    cout << "Ingrese un numero entre 0-999: ";
    int num;
    cin >> num;

    if(num>=0 && num<11)
        cout << endl << unidades[num];
    else if(num<20)
        cout << endl << diferentes[num-11];
    else if(num<100){
        int unid = num % 10;
        int dec = num/10;
        if(unid == 0)
            cout << endl << decenas[dec-2] ;
        else
            cout << endl << decenas[dec-2] <<" y " <<unidades[unid];
      }

    if(num>=0 && num<111)
        cout << endl << decenas[num];
    else if(num<100)
        cout << endl << decenas[num-111];
    else if(num<1000){
        int unid = num % 10;
        int dec = num % 10;
        int cent = num/100;
        if(dec == 0)
            cout << endl << centenas[cent-2] ;
        else
            cout << endl << centenas[cent-2] << " " << decenas[dec-2] <<" y " <<unidades[unid]; 
    }
    else
        cout << "El numero debe ser menor a 1000";

    return 0;
}