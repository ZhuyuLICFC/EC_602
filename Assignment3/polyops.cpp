// copyright 2018 Zhuyu Li zhuyuli@bu.edu


/*

A C++ program that implements addtion and multiplication for 
two polynomial sequence

*/
#include <vector>

using namespace std;

typedef vector<double> Poly;


// Add two polynomials, returning the result
Poly add_poly(const Poly &a, const Poly &b) {
    int length_a = a.size();
    int length_b = b.size();
    int output_size = 0;
    Poly output_poly;


    if (length_a > length_b) {
        output_size = length_a;
    } else {
        output_size = length_b;
    }
   
    output_poly.resize(output_size);

    for (int i = 0; i < output_size; i++) {
        if ((i >= length_a)) {
            output_poly[i] = b[i];

        } else if ((i >= length_b)) {
            output_poly[i] = a[i];
        } else {
            double temp_value = a[i] + b[i];
	    output_poly[i] = temp_value;
        }
    }

    
    // delete redundant 0
    int last = output_poly.size() - 1;

    for (; last >= 0; last--) {
	if (output_poly[last] != 0) {
	    break;
	}
    }
    
    // but at least one 0
    if (last == -1) {
        last = 0;
    }	

    output_poly.resize(last + 1);

    return output_poly;

}



// Multiply two polynomials, returning the result.
Poly multiply_poly (const Poly &a, const Poly &b)
{
    int length_a = a.size();
    int length_b = b.size();
    int output_size = length_a + length_b - 1;
    Poly output_poly;
    output_poly.resize(output_size);

    for (int i = 0; i < length_a; i++) {
        for (int j = 0; j < length_b; j++) {
            output_poly[i+j] += a[i] * b[j];
        }
    }

    int last = output_poly.size() - 1;
  
     // delete redundant 0
    for (; last >= 0; last--) {
	if (output_poly[last] != 0) {
	    break;
	}
    }
    
    // but at least one 0
    if (last == -1) {
        last = 0;
    }	

    output_poly.resize(last + 1);

    return output_poly;
}








