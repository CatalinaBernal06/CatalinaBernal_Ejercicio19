#include <iostream>
double valor_k(double x, double y, double h);
double valor_k2(double z, double h);
double f(double x, double y);
double f2(double z);

int main(){
  double y = 1;
  double x = 0;
  double z = 0;
  double h = 0.1;
  double N = 10/h;

  for(int i=0; i<N; i++){
    z = z + valor_k(x, y, h);
    y = y + valor_k2(z, h);
    x = x+h;

    std::cout << x << " " << y << std::endl;
  }
}

double f(double x, double y){
  return -y;
}

double f2(double z){
  return z;
}
double valor_k(double x, double y, double h){
  double k1 = f(x, y);
  double k2 = f(x + h/2, y+(h/2)*k1);
  double k3 = f(x + h/2, y+(h/2)*k2);
  double k4 = f(x + h, y+h*k3);

  return (h/6)*(k1+2*k2+2*k3+k4);
}


double valor_k2(double z,  double h){
  double k1 = f2(z);
  double k2 = f2(z+(h/2)*k1);
  double k3 = f2(z+(h/2)*k2);
  double k4 = f2(z+h*k3);

  return (h/6)*(k1+2*k2+2*k3+k4);
}
