#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include <math.h>
using namespace std;

class Point{
private:
  double x,y;
public:
  //Constructeur vide
    Point(); 

  //--------------
  // Question 1.a
  //--------------
    Point(int x, int y);

  //--------------
  // Question 1.b
  //--------------
    int lire_x();
    int lire_y();
  
};


//--------------
// Question 1.c
//--------------
std::ostream& operator<<(std::ostream& os, Point& p);

//--------------
// Question 1.d
//--------------

Point millieu(Point p1, Point p2);

//--------------
// Question 1.e
//--------------

int distance(Point p1, Point p2);

#endif
