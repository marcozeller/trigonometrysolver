#include <cmath>
#include "triangle.hpp"
double PI = 3.14159;

Triangle::Triangle(){
    a = 0;
   	b = 0;
   	c = 0;
  	
   	alpha = 0;
   	beta = 0;
   	gamma = 0;
	}
    	
void Triangle::solve_rest(){
	
  if(a != 0 && b != 0 && c != 0 ){

    alpha = std::acos((b*b + c*c - a*a) / (2*b*c));
		gamma = std::acos((a*a + b*b - c*c) / (2*a*b));
		beta = std::acos((a*a + c*c - b*b) / (2*a*c));
  }
  else if(a != 0 && b != 0){
    if(alpha !=0){

    }
    if(beta !=0){

    }
      
    if(gamma !=0){

    }
  }
  else if(a != 0 && c != 0){
    if(alpha !=0){
      
    }
    if(beta !=0){

    }
      
    if(gamma !=0){
      
    }  
  }
  else if(b != 0 && c != 0){
    if(alpha !=0){
      a = std::sqrt(b*b + c*c - 2*b*c*std::cos(alpha));
    }
    if(beta !=0){
      a = std::cos(beta) + std::sqrt(std::cos(beta)*std::cos(beta)-c*c+b*b);
    }
      
    if(gamma !=0){
      
    }
  }
  else if(alpha != 0 && beta != 0){
    gamma = PI - alpha - beta;
  }
  else if(alpha != 0 && gamma != 0){
    beta = PI - alpha - gamma;
  }
  else if(beta != 0 && gamma != 0){
    alpha = PI - beta - gamma;
  }


}
