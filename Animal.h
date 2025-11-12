#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
#include <string>
using namespace std;

class Animal {
  private:
  string name;
  int age;
  bool isHungry;
  
  public:
  Animal();
  Aninal(string name,int age,bool isHungry);
  virtual ~Animal();
  void setname();
  void setage();
  void setisHungry();
  string getname() const;
  int getage() const;
  bool getisHungry()const;
  void display();
  void feed();
};
//define animal class here 



#endif
