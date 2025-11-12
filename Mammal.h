#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"


class Mammal:public animal{
  private:
  string furColor;
  public:
  Mammal();
  Mammal(string name ,int age,bool isHungry , string furColor) :animal(name,age,isHungry),furColor(furColor);
};
//define mammal class here






#endif
