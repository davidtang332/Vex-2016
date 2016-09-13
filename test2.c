#define JOYSTICK_DEAD_ZONE 10;

void driveCTL();
void driveSYS();






void drivesys
{
		int verticalInput, horizontalInput;

		verticalInput = vexRT[Ch3];
		horizontalInput = vexRT[Ch1];


#ifdef JOYSTICK_DEAD_ZONE
		if (abs(verticalinput) > JOYSTICK_DEAD_ZONE || abs(horizontalInput) > JOYSTICK_DEAD_ZONE)
		{

		}
#endif

}




task main()
{



}
