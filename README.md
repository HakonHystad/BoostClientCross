# BoostClientCross
C++ communication client for talking to KUKA robot controllers. Communicates with the KUKAVARPROXY server made by Massimiliano Fago

This is an extension made by Adam Leon Kleppe, and is only for use for a specific project as a temporary solution.

This project will not be maintained or updated beyond this specific purpose.

# Running the code
Run
```
mkdir cmake
cd cmake
cmake ..
make
```
to build the code

To modify the code, edit the CMakeLists.txt or just copy the KUKAVARPROXY_movement.h to an existing code.

To run the example code, go to the robot in question. The example uses the closest KR120 robot.
Run the `kukavarproxy_ptp` program (make sure that you run with a low speed the first time, so that you have control of all the steps it takes).

Run the `./ExampleClient`. The robot will move in a square pattern first, and then down 200mm.

