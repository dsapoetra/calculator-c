#include "ArrayOfExpression.h"
#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;


ArrayOfExpression::ArrayOfExpression() {
  Size = 999;
  Expression = new Ekspresi[Size];
  Position = 0;

}

ArrayOfExpression::ArrayOfExpression(int S){
  Size = S;
  Expression = new Ekspresi[Size];
  Position = 0;
}


ArrayOfExpression::ArrayOfExpression(const ArrayOfExpresion& S) {
  

}

ArrayOfExpression::~ArrayOfExpression() {
  delete Exspression;

}


void ArrayOfExpression::Save() {
  ofstream myfile;
  myfile.open ("example.txt");
  for (i=0; i<Size; i++) {
     myfile << Expression.getEkspresi(i);
  }
  myfile.close();
}

void ArrayOfExpression::Show(){
  for (i=0; i<Size; i++) {
    cout << i << "." << Expression.getEkspresi(i)<<endl;
    }
}

void  ArrayOfExpression::DeteksiEkspresi(Expresi Expression) {


}

void  ArrayOfExpression::Undo (int N){
  int temp;
  temp = Position - N;
  if (temp => 0) {
    Position = temp;
    cout << Expression.getExpresi(temp);
  }
  else {
    cout << "Sorry, can't undo that far."<<endl;
    }
}

void  ArrayOfExpression::Redo(int N) {
  int temp;
  temp = Position + N;
  if (temp < Size) {
    Position = temp;
     cout << Expression.getExpresi(temp);
  }
  else {
    cout << "Sorry, can't redo that far."<<endl;
    }

}

Expresi ArrayOfExpression::getEkspresi (int i) {
  return Expresi[i];
}

void ArrayOfExpression::add(Expresi E) {
  Ekspresi[Position] = E;
  Position++;
}


