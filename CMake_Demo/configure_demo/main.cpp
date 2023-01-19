#include "TutorialConfig.h"
#include <iostream>   // std::cout
#include <string>     // std::stod
int main(int argc, char** argv) {
	const double inputValue = std::stod(argv[1]);
	if (argc < 3) {
		// report version
		std::cout << argv[0] << " Version " << Tutorial_VERSION_MAJOR << "."
			<< Tutorial_VERSION_MINOR << std::endl;
		std::cout << "Usage: " << argv[0] << "("<<inputValue<<")" << std::endl;
		std::cout << "Date: " << Date << std::endl;
		return 1;
	}
}