#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain* brain;
public:
	Cat(void);
	~Cat(void);
	Cat& operator=(const Cat &other);
	Cat(const Cat &copy);
	void makeSound(void) const;
	void addIdea(std::string idea) const;
	std::string getIdea(int i) const;
};

#endif