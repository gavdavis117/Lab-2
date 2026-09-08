#include <iostream> 
#include <cmath>
int main() {
	// Prompt the user to enter the radius of the cylinder
	std::cout << "Enter the radius of the cylinder: ";
	double radius = 0.0;
	// Read the radius and height from the user
	std::cin >> radius;
	// Prompt the user to enter the height of the cylinder
	std::cout << "Enter the height of the cylinder: ";
	double height = 0.0;
	// Declare variables to store the radius and height of the cylinder
	std::cin >> height;
	// Calculate the volume of the cylinder using the formula V = πr^2h
	std::cout << "Volume of the cylinder = " << 3.14159 * radius * radius * height << std::endl;		
	// Calculate the surface area of the cylinder using the formula A = 2πr(h + r)
	std::cout <<"Surface area of the cylinder =" << 2 * 3.14159 * radius * (radius + height) << std::endl;
		
	return 0;
}
