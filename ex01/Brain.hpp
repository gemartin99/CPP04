#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
private:
	std::string ideas[100];
	int size;
public:
	Brain(void);
	~Brain(void);
	Brain& operator=(const Brain &copy);
	Brain(const Brain &copy);
	int getSize(void) const;
	void addIdea(std::string idea);
};

#endif