//copyright 2018 Zhuyu Li zhuyuli@bu.edu

/*
A C++ program that outputs the first four arguments to
stdout stream and any additional arguments to stderr stream
*/

#include <iostream>

int main(int argc, char* argv[])
{
	if (argc <= 5) {
		for (int i = 1; i <= argc; i++) {
			std::cout << argv[i] << std::endl;
		}
	}
	else {
		for (int i = 1; i < 5; i++) {
			std::cout << argv[i] << std::endl;
		}
		for (int i = 5; i < argc; i++) {
			std::cerr << argv[i] << std::endl;	
		}

	}

	return 0;

}






