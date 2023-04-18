#include <iostream>
#include <cstdio>
using namespace std;


namespace CAR_CONST
{
	enum
	{
		ID_LEN		=20,
		MAX_SPD		=200,
		FUEL_STEP	=2,
		ACC_STEP	=10,
		BRK_STEP	=10
	};
}

class Car
{
private:
	char gamerID[CAR_CONST::ID_LEN];
	int fuelGauge;
	int curSpeed;
public:
	void InitMembers(const char * ID, int fuel) {
	    strcpy(gamerID, ID);
	    curSpeed = 0;
	    fuelGauge = fuel;
	};
	void ShowCarState() {
	    cout << "소유자 ID: " << gamerID << endl;
	    cout << "연료량: " << fuelGauge << "%" << endl;
	    cout << "현재 차량 속도: " << curSpeed << "km" << endl;
	};
	void Accel() {
	    curSpeed += CAR_CONST::ACC_STEP;
	    fuelGauge -= CAR_CONST::FUEL_STEP;
	};
	void Break() {
        curSpeed -= CAR_CONST::BRK_STEP;
	};
};
