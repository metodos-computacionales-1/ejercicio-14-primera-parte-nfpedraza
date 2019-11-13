#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

// variable constantes globales
float m=2.0;
float x=1.0;
float k=10.0;
float deltaT;
float t_0=0.0;
void Euler_scheme(float m,float x, float k, float deltaT,string name);

void Euler_scheme(float m,float x, float k, float deltaT, string name){
  ofstream outfile;
  outfile.open(name);
  float yn=1.0;
  for(t_0=0.0 ;t_0<=10.0;t_0+=deltaT){
      x-= (deltaT*k)/(m*x);
      yn+= deltaT*yn;
      outfile<<t_0<<"  "<<yn<<"\n";
  }  
   outfile.close();
}
int main(){
string name="exe_14.dat";
Euler_scheme(2.0,1.0,10.0,0.01,name);
return 0;
}
