#include <iostream>
#include <fstream>
#include "OperacionesBasicas.h"
using namespace std;

int OperacionesBasicas::imprimirArchivo(){
  ifstream archivo1("OperacionesBasicas.casm");
  cout << archivo1.rdbuf();
  return 0;  
}


int OperacionesBasicas::ejecutarArchivo(){
  system("java -jar JCoCo.jar OperacionesBasicas.casm");
  return 0;
}

OperacionesBasicas::OperacionesBasicas(){
  
}
