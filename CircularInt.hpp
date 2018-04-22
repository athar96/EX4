#define EXERCISE4_0_CIRCULARINT_H

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

class CircularInt{
    public:
        CircularInt(int min, int max);
        CircularInt(int min , int max , int current);
        CircularInt(const CircularInt &ci);
        
        ////////////////////
        int getCurrent() const;
        int getmin() const;
        int getmax() const;
        void setCurrent(int);
        
        
        ////////////////////////
        
        
        
        friend std::ostream& operator<<(std::ostream& os, CircularInt const &circ) ;
        
        CircularInt& operator+=(const int& r);
        
        CircularInt& operator++(int);
        
        CircularInt& operator++();
        
        CircularInt& operator-();
        
        friend CircularInt operator+(const CircularInt& a1,const CircularInt& a2);
         
        CircularInt& operator+();
        
        friend CircularInt operator-(const int &c1, const CircularInt &c2);
        
        CircularInt* operator*=(const int& rhs);
        
        friend CircularInt operator/(const int &c1, const CircularInt &c2);
        
        friend CircularInt operator/(const CircularInt &c2,const int &c1);
        
        
        CircularInt* operator/ ( int num);


    private:
        int min,max,current;
};


