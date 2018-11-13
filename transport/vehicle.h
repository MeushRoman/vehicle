#pragma once
#include <string>

using namespace std;

class vehicle
{
	unsigned int maxSpeed;
	string color;
	unsigned int cntPassengers;
	string model;
	bool hasEngine;

public:

	vehicle(unsigned int maxSpeed = 0, string color = "black", unsigned int cntPas = 0, string model = "model", bool hasEngine = 1);

	void setMaxSpeed(unsigned int maxSpeed);
	void setColor(string color);
	void setCntPassengers(unsigned int cnt);
	void setModel(string model);
	void setHasEngine(bool hasEng);

	int getMaxSpeed() const { return maxSpeed; }
	string getColor() const { return color; }
	int getCntPas() const { return cntPassengers; }
	string getModel() const { return model; }
	bool getHasEngine() const { return hasEngine; }


	~vehicle();
};

