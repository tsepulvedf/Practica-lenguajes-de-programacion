#include <iostream>
#include <fstream>
#include "TrianguloDePascal.h"
using namespace std;

int TrianguloDePascal::imprimirArchivo(){
  ifstream archivo2("TrianguloDePascal.casm");
  cout << archivo2.rdbuf();
  return 0;  
}


int TrianguloDePascal::ejecutarArchivo(){
  system("java -jar JCoCo.jar TrianguloDePascal.casm");
  return 0;
}

TrianguloDePascal::TrianguloDePascal(){
  
}
