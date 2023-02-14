#include <iostream>

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

int main()
{
	{
		Animal* pointer;
		std::cout << std::endl;

		Cat* temp = new Cat();


		std::cout << std::endl;
		pointer = new Dog();
		std::cout << std::endl;

		Cat* newcat;
		newcat = temp;
		delete(newcat);
		delete(pointer);
	}
	return 0;
}