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
   String GetExpresi();
    void SetExpresi(String E);
    
    //Prosesor
    void InfixProsesor();
    void PostfixProsesor();
    void PrefixProsesor(); //terlalu besar jika dibuat kelas sendiri.

    //converter
    String ConvertBilangan();


  private :
  String Expression;

}


#endif
