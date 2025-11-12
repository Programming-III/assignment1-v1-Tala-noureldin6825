#ifndef ENCLOSURE_H
#define ENCLOSURE_H

#include "Animal.h"

#include<iostream>
#include<string>
using namespace std;

class Enclosure{
  private:
  Animal*animals;
  int capacity;
  int currentCount;
  public:
  Enclosure();
  Enclosure(Animal*animals,int capacity,int currentCount);
  void ~Enclosure();
  void setCapacity();
  void setcurrentCount();
  void getCapacity() const;
  void getcurrentCount() const;
  void addAnimal(Animal*a);
  void displayAnimals();
};
//define enclosure class here 








#endif
