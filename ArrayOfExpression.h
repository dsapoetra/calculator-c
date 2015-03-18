#ifndef StackOfExpression_h
#define StackOfExpression_h

class StackOfExpression {
  public :
  //4 Sekawan
    StackOfExpression();// ctor parameter belum tahu bagaimana
    StackOfExpression (const StackOfExpression& S);
    ~StackOfExpression();
    
    void Save(String FileName); // method menyimpan semua ekspresi ke file eksternal dengan argumen nama file yang akan dibuat
    void Show(); //print semua ekspresi ke layar
    void DeteksiEkspresi(Expresi Expression); //Mendeteksi ekspresi yang dimasukkan
    void Undo(int N);//mencetak N buah ekspresi sebelumnya
    void Redo(int N);// mencetak N buah ekspresi ke depan
    
    //getter
    Expresi getEkspresi(int i); //mengembalikan ekspresi berdasar indeksnya dalam stack

    //push & pop
    void push(Expression val);
    string pop();
    

  private :
    //Array of expression dalam string
    Expresi* Expression;
    Expresi *TopExpression

}

#endif
