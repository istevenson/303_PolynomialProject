// Annie Chan, David Saiyan, Imon Stevenson
// afc4z3@mail.umkc.edu, dsh9b@mail.umkc.edu,iasr43@mail.umkc.edu
// CS 303
// Kuhail
// June 26, 2016

#ifndef ___03_PolynomialProject__Term__
#define ___03_PolynomialProject__Term__

#include <string>

class Term{
private:
    double coefficient;
    std::string varX;
    
public:
    Term();
    Term(double coeff, std::string var);
    ~Term();
    Term& operator=(Term& rhs);
    
    double getCoefficient() { return coefficient;}
    std::string getVarX() { return varX; }
};




#endif
