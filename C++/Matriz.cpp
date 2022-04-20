#include <iostream>
#include <fstream>
#include "Matriz.h"
using namespace std;

int Matriz::imprimirArchivo(){
  ifstream archivo3("Matriz.casm");
  cout << archivo3.rdbuf();
  return 0;  
}


int Matriz::ejecutarArchivo(){
  system("java -jar JCoCo.jar Matriz.casm");
  return 0;
}

Matriz::Matriz(){
  
}
