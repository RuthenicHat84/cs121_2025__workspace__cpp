#include <iostream>

class Critter{
	private:
	std::string name;
	
	public:
	Critter(name){
		name = "anon";	
	} // end critter constructor
	
	Critter(std::string name){
		Critter::name = name;
	} // end constructor

	void getName(){
		return Critter::name;
	} // end getName

	void setName(std::string name){
		Critter::name = name
	} // end setName

	void sayHi(){
		std::cout << "Hi. My name is " << name << "!" << std::endl;
	} // end sayHi
}; // end Critter Class

main(){

	Critter c;
	std::cout << c.getName() << std::endl;
	c.sayHi();
	c.setName("Grace");
	c.sayHi();
	Critter c1("Ada");
	c1.sayHi();

	return 0;

} // end main
