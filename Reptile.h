#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"


class Reptile: public animal{
  private:
  bool isVenemous;
  public:
  Reptile();
  Reptile(string name,int age,bool isHungry, bool isVenemous):animal(string name,int age,bool isHungry)
};
//define reptile class here









#endif
