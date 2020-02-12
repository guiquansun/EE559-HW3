#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <iostream>
#include <string>
#include <vector>

class AcademicRecord {
public:

  int Maths;
  int Computers;
  int Physics;
 

  AcademicRecord(): Maths(0), Computers(0), Physics(0){}
  AcademicRecord(int maths, int computers, int physics): Maths(maths), Computers(computers), Physics(physics){}
  AcademicRecord(const AcademicRecord &ar): Maths(ar.Maths), Computers(ar.Computers), Physics(ar.Physics){}

  AcademicRecord operator++();
  AcademicRecord operator--();
  AcademicRecord operator++(int);
  AcademicRecord operator--(int);
  AcademicRecord operator+=(int i);
  AcademicRecord operator-=(int i);
  bool operator==(const AcademicRecord &ar);
  void print();

  
};

#endif