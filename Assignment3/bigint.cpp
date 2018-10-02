// copyright 2018 Zhuyu Li zhuyuli@bu.edu


/*

A C++ program that implements multiplication for string

*/
#include <vector>
#include <string>
//#include <iostream>

using namespace std;

typedef string BigInt;


// multiplication for two string 
BigInt multiply_int (const BigInt &a, const BigInt &b)
{
    vector<int> vec_a;
    vector<int> vec_b;

    //  convert a,b to integer vector
    for (int i = a.size(); i >= 1; i--) {
	int temp = a[i-1] - '0';	
	vec_a.push_back(temp);
    }

    for (int i = b.size(); i >= 1; i--) {
	int temp = b[i-1] - '0';
	vec_b.push_back(temp);
    }

    int length_a = vec_a.size();
    int length_b = vec_b.size();
    int output_size = length_a + length_b-1;
    vector<int> output_num;
    output_num.resize(output_size);

   // calculation same as poly
    for (int i = 0; i < length_a; i++) {
        for (int j = 0; j < length_b; j++) {
            output_num[i+j] += vec_a[i] * vec_b[j];
        }
    }

    int previous_value = 0;
    vector<int> inversed_result;
    
    // make sure each 10th has single represent value
    int current = 0;
    for (auto element: output_num) {        
        current = (previous_value + element) % 10;	
	previous_value = (previous_value + element) / 10;
	inversed_result.push_back(current);	    
    }

    while (previous_value != 0) {
	current = previous_value  % 10;	
	inversed_result.push_back(current);	    
	previous_value /= 10;
    }
	
    BigInt final_result{};

    // converse the int vector
    int lag = 0;
    for (int i = inversed_result.size(); i >=0; i--) {
	if (inversed_result[i] == 0 && lag == 0) {
	    continue;
	}
	lag = 1;	
	final_result += to_string(inversed_result[i]);	
    }

    if (final_result.size() == 0) {	
	final_result = "0";
    }
    
    return final_result;
}

/*int main() 
{
    BigInt a = "8";
    BigInt b = "9";

    cout << multiply_int(a, b) << endl;
 
}*/












