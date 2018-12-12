#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include<vector>
#include<sstream>
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
  c circle;
  r rectangle;
  t triangle;
  ifstream out;
//out.open("data.txt",ios::app);
//check for file opening
// vector<string>data;
// int a=0;
//  while(!out.eof())
//   {
//     string temp;
//
//     getline(out,temp);
//         std::cout << temp << '\n';
//   }
 //split(i am in class)


//  std::cout<<"age "<< id<<'\n';
//  std::cout << setw(5)<<"hello world" << '\n';



int i = 0;
string line;

vector < string > v;

ifstream fin;

fin.open ("data.txt");

if ( fin.is_open ( ))
{
  while ( getline ( fin, line ))
  {
    stringstream ss ( line );

    while ( getline (ss ,line, ','))
    {
      v.push_back(line);
    }
  }
// while ( true )
//   {
//     if ( i == v.size())
//     {
//       break;
//     }
//     cout <<v[i+1]<< "\n";
//     i++;
//   }
}
i=0;
while ( true )
  {
    if (i==v.size())
    {
      break;
    }
    if(v[i]=="c")
    {
    cout <<v[i+1]<< "\n";
    }
    if(v[i]=="c")
    {
    cout <<v[i+1]<< "\n";
    }
    i++;
  }


  return 0;
 }
