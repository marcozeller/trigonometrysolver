#include <iostream>
#include "triangle.cpp"

int main(){

Triangle Mauro;

Mauro.set_a(3.);
Mauro.set_b(4.);
Mauro.set_c(5.);

Mauro.solve_rest();

std::cout << Mauro.get_a() << "°  und " << Mauro.get_b() << "°  und " << Mauro.get_c() << "° ";

std::cout << Mauro.get_alpha() << "°  und " << Mauro.get_beta() << "°  und " << Mauro.get_gamma() << "° ";

int a = 0;
std::cin >> a;

return 0;
}
