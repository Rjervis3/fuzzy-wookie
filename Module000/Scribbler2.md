Commentary on Scribbler 2 lab from module 000


- Using makefiles to make programs with long dependencies saves much time
  and typing. For example,

  gcc -I/home/walker/Myro/include/MyroC -L/home/walker/Myro/lib 
  -lMyroC -lbluetooth -ljpeg -o scribblerlab scribblerlab.c

  vs 

  make scribblerlab

- Write a program that connects to the robot, makes it beep a short tune
  that sounds good to you, then disconnects from the robot. 

-> see beep.c

- The scribbler-espeak program connects to the robot, initializes espeak, 
  and plays "Do your ears hang low" while circling.

// end
