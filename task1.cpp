#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>

using namespace std;

class shape{
public:
float virtual get_area()=0;


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
float get_area()
{
  return width*height;
}



};
class t : public shape {
private:
  float base;
  float height;
public:
float get_area()
{
  return 0.5*base*height;
}

};


int main()
{
ifstream in;
ofstream out;
int id;
out.open("data.txt",ios::app);
//check for file opening
if(out.is_open())
  {
    std::cout << "file Opened!!!!!!!!!!!!!!!! " << '\n';
  }
  out.write((char *)&id,sizeof(id));
  out.close();

  in.read((char *)&roll,sizeof(roll));

  in.read((char *)&age,sizeof(age));
  std::cout<<"roll # "<< roll<<'\n';
  std::cout<<"age "<< age<<'\n';
  std::cout << setw(5)<<"hello world" << '\n';



  return 0;
 }
