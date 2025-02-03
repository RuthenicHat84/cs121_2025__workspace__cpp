#include <iostream>

struct Critter {
	std::string name;
	age = 0;
} // end critter

main() {
	Critter c;

	std::cout << "Hi. My name is " << c.name << ". And my age is " << c.age << " years old." << std::endl;
	



	c.name = "Floofie";
	c.age = 5;

	std::cout << "Hi. My name is " << c.name << ". And my age is " << c.age << " years old." << std::endl;




	c.name = 6;
	c.age = -100;

	std::cout << "Hi. My name is " << c.name << ". And my age is " << c.age << " years old." << std::end;

	return 0;
} // end main
