#include <iostream>
class Car_interface
{
public:
	virtual void change_mirrors_position() = 0;
	virtual void change_speed() = 0;
	virtual void lights() = 0;
	virtual void wiper() = 0;
	virtual void conditioner() = 0;
	virtual void signal() = 0;
	virtual void steering_wheel() = 0;
	virtual void open_window() = 0;
	virtual void close_window() = 0;
	virtual void stop() = 0;
	virtual void open_door() = 0;
	virtual void close_door() = 0;


};

class Car :public Car_interface
{
	bool is_sedan;
	int horse_power;
	int year;
	std::string model;
	std::string colour;
	std::string engine_type;
public:
	Car()
	{
		std::cout << __func__ << std::endl;
	}
};

class BMW :public Car
{
public:
	BMW()
	{
		std::cout << __func__ << std::endl;
	}
	virtual void change_mirrors_position()
	{
		std::cout << "Mirrors can move \n";
	}
	virtual void change_speed()
	{
		std::cout << "Driver can increase or decrease speed \n";
	}
	virtual void lights()
	{
		std::cout << "BMW has LED (Light Emitting Diode) or Xenon headlights\n ";
	}
	virtual void wiper()
	{
		std::cout << "Wiper on and off \n";
	}
	virtual void conditioner()
	{
		std::cout << "Conditioner can be on and off states \n";
	}
	virtual void signal()
	{
		std::cout << "Signal \n";
	}
	virtual void steering_wheel()
	{
		std::cout << "Steering wheel \n";
	}
	virtual void open_window()
	{
		std::cout << "Window is opened \n";
	}
	virtual void close_window()
	{
		std::cout << "Window is closed \n";
	}
	virtual void stop()
	{
		std::cout << "Stop the machine \n";
	}
	virtual void open_door()
	{
		std::cout << "Open the door\n";
	}
	virtual void close_door()
	{
		std::cout << "Close the door\n";
	}

};

int main(int argc, char** argv)
{
	BMW car;
	car.open_door();

	return 0;
}