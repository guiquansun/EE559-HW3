#include "solution.h"

AcademicRecord AcademicRecord::operator++() {

  if (Maths + 10 > 100) {
    Maths = 100;
  }
  else {
    Maths  = Maths + 10;
  }

  if (Computers + 10 > 100) {
    Computers = 100;
  }
  else {
    Computers  = Computers + 10;
  }

  if (Physics + 10 > 100) {
    Physics = 100;
  }
  else {
    Physics  = Physics + 10;
  }
  return *this;
}

AcademicRecord AcademicRecord::operator++(int) {
  AcademicRecord temp = *this;
  if (Maths + 10 > 100) {
    Maths = 100;
  }
  else {
    Maths  = Maths + 10;
  }

  if (Computers + 10 > 100) {
    Computers = 100;
  }
  else {
    Computers  = Computers + 10;
  }

  if (Physics + 10 > 100) {
    Physics = 100;
  }
  else {
    Physics  = Physics + 10;
  }

  return temp;

}

AcademicRecord AcademicRecord::operator--() {

  if (Maths - 20 < 0) {
    Maths = 0;
  }
  else {
    Maths = Maths - 20;
  }

  if (Computers - 20 < 0) {
    Computers = 0;
  }
  else {
    Computers = Computers - 20;
  }
  
  if (Physics - 20 < 0) {
    Physics = 0;
  }
  else {
    Physics = Physics - 20;
  }
  return *this;
}

AcademicRecord AcademicRecord::operator--(int){
  AcademicRecord temp = *this;
  if (Maths - 20 < 0) {
    Maths = 0;
  }
  else {
    Maths = Maths - 20;
  }

  if (Computers - 20 < 0) {
    Computers = 0;
  }
  else {
    Computers = Computers - 20;
  }
  
  if (Physics - 20 < 0) {
    Physics = 0;
  }
  else {
    Physics = Physics - 20;
  }
  return temp;

}

 AcademicRecord AcademicRecord::operator+=(int i) {

   if (Maths + i > 100) {
    Maths = 100;
  }
  else {
    Maths  = Maths + i;
  }

  if (Computers + i > 100) {
    Computers = 100;
  }
  else {
    Computers  = Computers + i;
  }

  if (Physics + i > 100) {
    Physics = 100;
  }
  else {
    Physics  = Physics + i;
  }
  return *this;
 }

 AcademicRecord AcademicRecord::operator-=(int i){

   if (Maths - i < 0) {
    Maths = 0;
  }
  else {
    Maths = Maths - i;
  }

  if (Computers - i < 0) {
    Computers = 0;
  }
  else {
    Computers = Computers - i;
  }
  
  if (Physics - i < 0) {
    Physics = 0;
  }
  else {
    Physics = Physics - i;
  }
  return *this;
 }

bool AcademicRecord::operator==(const AcademicRecord &ar) {
  if (Maths == ar.Maths && Computers == ar.Computers && Physics == ar.Physics) {
    return true;
  }
  else {
    return false;
  }
  

}

void AcademicRecord::print(){

  std::cout << "Maths: " << Maths << std::endl;
  std::cout << "Computers: " << Computers << std::endl;
  std::cout << "Physics: " << Physics << std::endl;
  std::cout << "" << std::endl;
}

