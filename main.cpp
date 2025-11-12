#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;


Animal(){
  name="";
  age(0);
  isHungry="";
}
Animal(string name,int age,bool isHungry){
  this->name=name;
  this->age=age;
  this->isHungry=isHungry;
}
virtual void ~Animal(){};

void diplay(){
  cout << "name:"<<name<<endl;
  cout<<"age:"<<age<<endl;
  cout<<"isHungry:"<<isHungry<<endl;
}
void setname(){
  name="";
}
void setage(){
  age=0;
}
void setisHungry(){
  isHungry="";
}
string getname(){
  return name;;
}
int getage(){
  return age;
}
bool getisHungry(){
  return isHungry;
} 
bool void feed(){
  if (feed==true)
  return true;
  else
  return false;
}

Animal::Enclosure(){
  Animal*animals="";
  capacity(0);
  currentCount(0);
}
Animal::Enclosure(){
  Animal*animals="";
  capacity(0);
  currentCount(0);
}
Animal::Enclosure(Animal*animals,int capacity ,int currentCount){
  Animal*animals=new animal(animals); a;
  this->capacity=capacity;
  this->currentCount=currentCount;
}
void Animal:: ~delete animal[];

void Animal:: setCapacity(){
  capacity(0);
}
void Animal:: setcurrentCount(){
  currentCount(0);
}
void Animal:: getCapacity() const{
  return capacity;
}
void Animal:: getcurrentCount() const{
  reutrn currentCount;
}
void Animal:: addAnimal(Animal*a){
  Enclosure+=animal;
}
void Animal:: displayAnimals(){
  cout<<"capacity:"<<capacity<<endl;
  cout<<"current count:"<<currentCount<<endl;
}
Visitor(){
  Visitorname="";
  ticketsBought(0);
}
Animal::Visitor(string Visitorname,int ticketsBought){
  this->Visitorname= Visitorname;
  this->ticketsBought=ticketsBought;
}
void Animal:: ~Visitor();

void Animal:: setVisitorname(){
  Visitorname="";
}
void Animal:: setticketsBought(){
  ticketsBought(0);
}
void Animal:: getVisitorname() const{
  return Visitorname;
}
void Animal:: getticketsBought() const{
  return ticketsBought;
}
void Animal:: displayInfo(){
  cout<< "Visitor name:"<< Visitorname<<endl;
  cout <<" tickets bought:"<< ticketsBought<<endl;
}
// ============== MAIN FUNCTION ==============
int main() {
    
  Enclosure();
  Mammal =m1;
  m1.display();
  Bird =b1;
  b1.display();
  Reptile =r1;
  r1.display();
  Lion(5,Hungry);
  Parrot(2,Not Hungry);
  Snake(2,Venermous,Hungry)
  Visitor v1;
  v1.displayInfo("Sarah Ali", 3)
    return 0;
};
    
