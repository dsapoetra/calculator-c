#ifndef ArrayOfExpression_h
#define ArrayOfExpression_h

class ArrayOfExpression {
  public :
  //4 Sekawan
    ArrayOfExpression();
    ArrayOfExpression(int S)// ctor parameter belum tahu bagaimana
    ArrayOfExpression (const ArrayOfExpression& S);
    ~ArrayOfExpression();
    
    void Save(); // method menyimpan semua ekspresi ke file eksternal dengan argumen nama file yang akan menjadi tujuan save
    void Show(); //print semua ekspresi ke layar
    void DeteksiEkspresi(Expresi Expression); //Mendeteksi ekspresi yang dimasukkan
    void Undo(int N);//mencetak N buah ekspresi sebelumnya
    void Redo(int N);// mencetak N buah ekspresi ke depan
    
    //getter
    Expresi getEkspresi(int i); //mengembalikan ekspresi berdasar indeksnya dalam stack

    //push & pop
    void add(Expresi E);

  private :
    //Array of expression dalam string
    Expresi* Expression;
    int Size;
    int Position;

}

#endif
