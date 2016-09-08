#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle
{
  private:
    double 	a,
        	b,
            c;
    
    double 	alpha,
            beta,
            gamma;
            
	public:
		Triangle();
		
	    double get_a() {return a;};
	    double get_b() {return b;};
	    double get_c() {return c;};
	    double get_alpha() {return alpha;};
	    double get_beta() {return beta;};
	    double get_gamma() {return gamma;};
    
	    double set_a(double x) {a = x;};
	    double set_b(double x) {b = x;};
	    double set_c(double x) {c = x;};
    	double set_alpha(double x) {alpha = x;};
	    double set_beta(double x) {beta = x;};
    	double set_gamma(double x) {gamma = x;};
    
    	void solve_rest();
};

#endif /* TRIANGLE_H */
