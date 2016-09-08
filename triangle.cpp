#include <cmath>
#include "triangle.hpp"


Triangle::Triangle(){
    a = 0;
   	b = 0;
   	c = 0;
  	
   	alpha = 0;
   	beta = 0;
   	gamma = 0;
	}
    	
void Triangle::solve_rest(){
	if(a != 0 && b != 0 && c != 0 )
		alpha = std::acos((a*a + b*b - c*c) / (2*a*b));
		beta = std::acos((a*a + c*c - b*b) / (2*a*c));
		gamma = std::acos((b*b + c*c - a*a) / (2*b*c));				
}
