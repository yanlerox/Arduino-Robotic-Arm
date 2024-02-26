# Arduino-Robotic-Arm
This is code for robotic arm with 6 servos. 

The robotic arm is connected with bluetooth module (HC-05).

The pin for the servo. Note: The servo count is start from servo 0 which is the first servo.
- Servo 0 (Wraist) = D2
- Servo 1 (Shoulder) = D3
- Servo 2 (Elbow) = D4
- Servo 3 (Wraist Pitch) = D5
- Servo 4 (Wraist Roll) = D6
- Servo 5 (Grip) = D7

The pin for bluetooth are
- HC-05 Tx = D10
- HC-05 Rx = D11

You may use breadboard, custom circuit board to distribute power for the servo.

The servo will be initial position (degree 0) for all servo during an early startup or reset.

The robotic arm is remote controlled using mobile apps via bluetooth connection.

The apps can be download at the link :
