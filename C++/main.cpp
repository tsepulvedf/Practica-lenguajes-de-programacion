#include <iostream>
#include "FactorialJCoCo.h"
#include "OperacionesBasicas.h"
#include "TrianguloDePascal.h"
#include "Matriz.h"
using namespace std;

int main() {
  bool estado;
  estado = true;
  while(estado==true){
    cout << "Por favor selecciones una de las siguientes opciones: \n";
    cout << "1: Función factorial.\n";
    cout << "2: Operaciones Básicas.\n";
    cout << "3: Triángulo de Pascal.\n";
    cout << "4: Matriz.\n";
    
    int opcion;
    cin >> opcion;
    if(opcion==1){
      FactorialJCoCo factorial = FactorialJCoCo();
      factorial.imprimirArchivo();
      factorial.ejecutarArchivo();
      estado = false;
  }
    else if(opcion==2){
      OperacionesBasicas basicas = OperacionesBasicas();
      basicas.imprimirArchivo();
      basicas.ejecutarArchivo();
      estado = false;
  }
    else if(opcion==3){
      TrianguloDePascal pascal = TrianguloDePascal();
      pascal.imprimirArchivo();
      pascal.ejecutarArchivo();
      estado = false;
  }
    else if(opcion==4){
      Matriz matriz = Matriz();
      matriz.imprimirArchivo();
      matriz.ejecutarArchivo();
      estado = false;
    }
    else{
      cout << "Por favor seleccione una de las 4 opciones.\n";
    }
  }
}
