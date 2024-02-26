# Arduino-Robotic-Arm
This is code for robotic arm with 6 servos. 

The robotic arm is connected with bluetooth module (HC-05).

The pin for the servo are
- Servo 1 (Wraist) = D2
- Servo 2 (Shoulder) = D3
- Servo 3 (Elbow) = D4
- Servo 4 (Wraist Pitch) = D5
- Servo 5 (Wraist Roll) = D6
- Servo 7 (Grip) = D7

The pin for bluetooth are
- HC-05 Tx = D10
- HC-05 Rx = D11

You may use breadboard, custom circuit board to distribute power for the servo.

The servo will be initial position (degree 0) for all servo during an early startup or reset.
