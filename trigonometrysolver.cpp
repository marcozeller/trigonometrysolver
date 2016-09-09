#include <iostream>
#include "triangle.cpp"

int main(){

Triangle Mauro;

//Mauro.set_a(3.);
Mauro.set_b(4.);
Mauro.set_c(5.);
//Mauro.set_alpha(0.643501);
Mauro.set_beta(0.927295);
//Mauro.set_gamma(1.5708);


Mauro.solve_rest();

std::cout << "a="<< Mauro.get_a() << "cm und b=" << Mauro.get_b() << "cm und c=" << Mauro.get_c() << "cm " << std::endl;

std::cout << "alpha="<< Mauro.get_alpha() << "rad  und beta=" << Mauro.get_beta() << "rad  und gamma=" << Mauro.get_gamma() << "rad ";

int a = 0;
std::cin >> a;

return 0;
}
