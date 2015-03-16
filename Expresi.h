#ifndef Expresi_h
#define Expresi_h

class Expresi {
  public :
    //4 Sekawan
    Expresi();
    Expresi (String E);
    Expresi (const Expresi& E);
    ~Expresi();

    //getter setter
    GetExpresi();
    SetExpresi(String E);
    
    //Prosesor
    InfixProsesor();
    PostfixProsesor();
    PrefixProsesir(); //terlalu besar jika dibuat kelas sendiri.

    //


  private :
  String Expresi;

}


#endif
