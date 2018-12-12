#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>

using namespace std;

class shape{
public:



};

class c : public shape {
private:
  float radius;
public:
float get_area()
{
  return 2*3.1428*radius;
}


};

class r : public shape {
private:
  float width;
  float height;
public:



};
class t : public shape {
private:
  float base;
  float height;
public:


};


int main()
{



  return 0;
 }
