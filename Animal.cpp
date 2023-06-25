#include <iostream>
class Animal
{
	std::string sound;
	std::string spcie;
	std::string name;
	std::string type_of_food;
	std::string gender;
	std::string movement_type;
	std::string respiratory_system;
	std::string breathing_system;
	int age;
	int speed;
	int lifespan;
	int weight;
	const int feet;
	const int teeth;

public:
	
	Animal(int feet_animal, int teeth_animal) :feet(feet_animal), teeth(teeth_animal)
	{
		std::cout << __func__ << std::endl;
	}
	virtual void voice() = 0;
	virtual void movement() = 0;


};

class Mammal :public Animal
{
	int fins_count;
	const int claws_count;
	const int ears;
	std::string habitat;
public:

	Mammal( int count, int count_ears) : Animal(4,32), claws_count(count), ears(count_ears)
	{
		std::cout << __func__ << std::endl;
	}
	
	virtual void voice() = 0;
	virtual void movement() = 0;
};

class Lion :public Mammal
{
	int main_lenght;

public:
	Lion(int count, int count_ears, int main_lenght) :Mammal(count, count_ears)
	{
		this->main_lenght = main_lenght;
		std::cout << __func__ << std::endl;
	}
	virtual void voice() override
	{
		std::cout << "Lion is roaring \n";
	}
	virtual void movement()override
	{
		std::cout << "Lion is walking, trotting, running and stalking \n";
	}
};

int main(int argc, char** argv)
{
	Lion lion1(18, 4, 100);
	lion1.voice();
	lion1.movement();

	return 0;
}