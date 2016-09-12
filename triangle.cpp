#include <cmath>
#include "triangle.hpp"
double PI = std::acos(-1);

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
  else if(alpha != 0 && beta != 0 && gamma != 0){
    if(a != 0){
      b = std::sin(beta)/std::sin(alpha) * a;
      c = std::sin(gamma)/std::sin(alpha) * a;
    }
    if(b != 0){
      a = std::sin(alpha)/std::sin(beta) * b;
      c = std::sin(gamma)/std::sin(beta) * b;
    }
    if(c != 0){
      a = std::sin(alpha)/std::sin(gamma) * c;
      b = std::sin(beta)/std::sin(gamma) * c;
    }
  }
  else if(alpha != 0 && beta != 0){
    gamma = PI - alpha - beta;
    this->solve_rest();
  }
  else if(alpha != 0 && gamma != 0){
    beta = PI - alpha - gamma;
    this->solve_rest();
  }
  else if(beta != 0 && gamma != 0){
    alpha = PI - beta - gamma;
    this->solve_rest();
  }
  else if(a != 0 && b != 0){
    if(alpha !=0){
      beta = std::asin(b/a * std::sin(alpha));
      this->solve_rest();
    }
    else if(beta !=0){
      alpha = std::asin(a/b * std::sin(beta));
      this->solve_rest();
    }
      
    else if(gamma !=0){
      c = std::sqrt(a*a + b*b - 2*a*b*std::cos(gamma));
      this->solve_rest();
    }
  }
  else if(a != 0 && c != 0){
    if(alpha != 0){
      gamma = std::asin(c/a * std::sin(alpha));
      this->solve_rest();
    }
    if(beta != 0){
      b = std::sqrt(a*a + c*c - 2*a*c*std::cos(beta));
      this->solve_rest();
    }
      
    if(gamma != 0){
      alpha = std::asin(a/c * std::sin(gamma));
      this->solve_rest();
    }  
  }
  else if(b != 0 && c != 0){
    if(alpha !=0){
      a = std::sqrt(b*b + c*c - 2*b*c*std::cos(alpha));
    }
    if(beta !=0){
      gamma = std::asin(c/b*std::sin(beta));
      this->solve_rest();
    }
      
    if(gamma !=0){
      beta = std::asin(b/c*std::sin(gamma));
      this->solve_rest();
    }
  }


}
