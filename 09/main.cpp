//main.cpp

#include "pjh.cpp"

int main(void)
{
	Car run99;
	run99.InitMembers("Car99", 100);
	run99.Accel();
	run99.Accel();
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();
	return 0;
}