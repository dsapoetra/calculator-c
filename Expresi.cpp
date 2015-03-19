#include "Expresi.h"


Expresi::Expresi() {
  Expression = "";
  
}

Expresi::Expresi(String E) {
  Expression = E;

}

Expresi::Expresi(const Expresi& E) {
  

}

Expresi::~Expresi(){
  delete Expression;
}


String Expresi::GetExpresi() {
  return Expression;
}

void Expresi::SetExpresi(String E) {
  Expression = E;

}

void  Expresi::InfixProsesor() {
  int size = Expression.size;
  char temp[size] = Expression;
  for (int i = 0; i<Expression.size; i++){
    if (temp[i] = "(") {
      int init = i;
      do {
        i++;     
    } while (temp[i] != ")");
      
   }

}

void  Expresi::PostfixProsesor() {


}

void  Expresi::PrefixProsesor() {

}

String ConvertBilangan() {


}
