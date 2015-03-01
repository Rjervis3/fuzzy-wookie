/* Program to work with the scribbler 2 robot obstacle sensors */

#include <stdio.h>
#include <myroc.h>


int
main()
{
rConnect("/dev/rfcomm0");
int right = rGetIRTxt("right");
int left = rGetIRTxt("left");
int right2 = rGetIRTxt("right");
int left2 = rGetIRTxt("left");

/* initial sensor tests */
if(right1 == right2)
printf("Right sensors are consistant");
if (left1 == left2) /* no else because we want both to print */
printf("left sensors are consistant");

if(right1 != right2 && left2 !=left1)
printf("no sensors are consistant")

if(right || left) //obstacle at either (either true)
rBeep(900, 2); //beep at high freq
else if(!right && !left) //if no obstacle
rForward(1, 1); //move forward


rDisconnect();
return 0;
}
