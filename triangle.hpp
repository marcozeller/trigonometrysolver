#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle_private;

class Triangle
{
	public:
	    double get_a();
	    double get_b();
	    double get_c();
	    double get_alpha();
	    double get_beta();
	    double get_gamma();
    
	    double set_a(double );
	    double set_b(double );
	    double set_c(double );
    	double set_alpha(double );
	    double set_beta(double );
    	double set_gamma(double );
    
    	void solve_rest();

	private:
		Triangle_private* Data;
};


