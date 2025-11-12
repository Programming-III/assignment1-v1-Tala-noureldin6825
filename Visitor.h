#ifndef VISITOR_H
#define VISITOR_H

#include <string>
using namespace std;
#include <iostream>


class Visitor{
    private:
  string Visitorname;
  int ticketsBought;
  public:
  Visitor();
  Visitor(string Visitorname , int ticketsBought);
  void ~Visitor();
  void setVisitname();
  void setticketsBought();
  string getVisitname() const;
  int getticketsBought() const;
  void displayInfo();
};






#endif
