
#include <iostream>
#include "CircularInt.hpp"




///////////////////////

CircularInt::CircularInt(int x , int y){
    min = x;
    max = y;
     current = x;
}

CircularInt::CircularInt(int x , int y ,int z){
    min = x;
    max = y;
    current = z;
}

CircularInt::CircularInt(const CircularInt &c){
    min = c.min;
    max= c.min;
    current = c.current;
}


/////////////////////////

int CircularInt::getmin() const{
    return min;
}
int CircularInt::getmax() const{
    return max;
}

int CircularInt::getCurrent() const{
    return current;
}

void CircularInt::setCurrent(int newV) {
    current = newV;
}


std::ostream& operator<<(std::ostream& os, CircularInt const &circ)  
{  
    os << circ.getCurrent();  
    return os;  
} 


/////////////////////////////////////////////
    
CircularInt& CircularInt::operator+=(const int& r){
    setCurrent((this->getCurrent()+r)%max);
    return *this;
}

CircularInt& CircularInt::operator++(){
    setCurrent((this->getCurrent() + 1)%max);
    return *this;
}


CircularInt& CircularInt::operator++(int i){
    CircularInt result(*this);   
  
    ++(*this);              
    return result;  
}


CircularInt& CircularInt::operator-(){
    setCurrent((max-current)%max);
    return *this;
}



CircularInt operator+(const CircularInt& a1,const CircularInt& a2){
    CircularInt c = a1;
    c += a2.getCurrent();
    return c;
}




CircularInt operator-(const int &a1, const CircularInt &a2)
{

	
	std::cout << a2.max-a2.min;
	return CircularInt(a2.getmin() , a2.getmax() , (a1 - a2.getCurrent())%(a2.max-a2.min));
}



CircularInt* CircularInt::operator/ (int num) {
    CircularInt* c = this;
    return c; 
}


CircularInt* CircularInt::operator*=(const int& r){
        CircularInt* c = this;
    return c; 
}



