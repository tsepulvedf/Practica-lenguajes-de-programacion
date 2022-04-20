#include <iostream>
#include <fstream>
#include "FactorialJCoCo.h"
using namespace std;

int FactorialJCoCo::imprimirArchivo(){
  ifstream archivo("FactorialJCoCo.casm");
  cout << archivo.rdbuf();
  return 0;  
}


int FactorialJCoCo::ejecutarArchivo(){
  system("java -jar JCoCo.jar FactorialJCoCo.casm");
  return 0;
}

FactorialJCoCo::FactorialJCoCo(){
  
}
