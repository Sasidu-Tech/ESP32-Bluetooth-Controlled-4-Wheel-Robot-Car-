<div align="center">🤖 ESP32 Bluetooth Controlled 4-Wheel Robot Car

🚗 Build • Connect • Control



📌 Project Overview

The ESP32 Bluetooth Controlled 4-Wheel Robot Car is a DIY robotics project that allows users to control a four-wheel robot car wirelessly using a smartphone.

The ESP32 receives Bluetooth commands from the phone and controls the motors through an L298N motor driver.

The robot car uses four DC geared motors, a four-wheel chassis, and two Li-ion batteries installed in a battery holder.

This project is an excellent starting point for learning embedded systems, wireless communication, motor control, and robotics.

✨ Features

- 📱 Wireless smartphone control using Bluetooth Classic.
- 🚗 Four-wheel robotic vehicle.
- 🔄 Forward and backward movement.
- ↪️ Left and right turning.
- 🛑 Stop the motors on command.
- ⚡ L298N dual H-bridge motor driver.
- 🔋 Battery-powered operation.
- 🛠️ DIY design using affordable electronic components.
- 💻 ESP32 programming using the Arduino IDE.

Note: The listed movement functions depend on the commands implemented in your Arduino code.

🧰 Hardware Components

No.| Component| Quantity
1| ESP32 Development Board| 1
2| L298N Motor Driver Module| 1
3| DC Geared Motors| 4
4| Four-Wheel Robot Chassis| 1
5| Robot Wheels| 4
6| Li-ion Batteries| 2
7| Battery Holder| 1
8| Jumper Wires| As required
9| USB Cable for Programming| 1
10| Smartphone with Bluetooth| 1

⚙️ Software Requirements

- Arduino IDE
- ESP32 board support package
- Bluetooth-compatible Android smartphone
- A compatible Bluetooth controller application

🔌 System Architecture

       📱 Smartphone
             |
             | Bluetooth Commands
             |
             ▼
       ┌────────────┐
       │    ESP32   │
       │ Controller │
       └─────┬──────┘
             |
             | Motor Control Signals
             |
             ▼
       ┌────────────┐
       │   L298N    │
       │ Motor Drive│
       └─────┬──────┘
             |
        ┌────┴────┐
        ▼         ▼
   Left Motors  Right Motors
     (2 DC)       (2 DC)
        |           |
        ▼           ▼
       🚗 Four-Wheel Robot Car

🔧 How It Works

Step 1 — Bluetooth Connection

The smartphone connects to the ESP32 using a compatible Bluetooth Classic controller application.

Step 2 — Command Transmission

The user sends a movement command through the smartphone.

Step 3 — ESP32 Processing

The ESP32 receives the command and processes it according to the programmed instructions.

Step 4 — Motor Control

The ESP32 sends control signals to the L298N motor driver.

Step 5 — Robot Movement

The motor driver controls the four DC motors to move the robot forward, backward, left, right, or stop.

🚀 Getting Started

1. Install Arduino IDE

Download and install the Arduino IDE from the official website:

https://www.arduino.cc/en/software

2. Configure the ESP32

Install the ESP32 board support package and select the appropriate ESP32 development board.

3. Clone This Repository

Open a terminal and run:

git clone https://github.com/Sasidu-Tech/ESP32-Bluetooth-Controlled-4-Wheel-Robot-Car.git

Important: Replace the repository address above if your actual GitHub repository uses a different name.

Open the downloaded project folder.

4. Check the Motor Connections

Connect the ESP32 control pins to the L298N motor driver's input and enable pins according to your Arduino code and wiring diagram.

Connect the motor outputs to the four DC motors.

Ensure that the ESP32 and motor driver share a common ground.

5. Upload the Code

1. Connect the ESP32 to your computer using a USB cable.
2. Open the Arduino sketch.
3. Select the correct ESP32 board and COM port.
4. Upload the program.
5. Wait for the upload to complete.

6. Control the Robot

1. Power on the robot.
2. Open a compatible Bluetooth controller application.
3. Connect to the ESP32.
4. Send the supported movement commands.
5. Test the forward, backward, left, right, and stop functions.

The Bluetooth connection method depends on whether your code uses Bluetooth Classic Serial or another Bluetooth implementation.

🔋 Power Supply and Safety

- Use batteries compatible with your motor and driver voltage requirements.
- Check the polarity of all power connections before switching on the robot.
- Do not connect a battery pack directly to an ESP32 GPIO pin.
- Avoid powering the motors directly from the ESP32's 3.3 V output.
- Ensure that the motor driver's current rating is suitable for the motors.
- Use an appropriate battery protection circuit and a compatible charger for the Li-ion batteries.
- Never short-circuit or reverse the battery connections.
- Check the actual battery configuration and voltage before connecting the power supply.

📸 Project Gallery

Add your own project photos to the repository and display them here.

Robot Car

"ESP32 Bluetooth Robot Car" (robot-car-thumbnail.png)

Circuit and Wiring Diagram

"Robot Car Wiring Diagram" (wiring-diagram.png)

«Replace the example image filenames with the actual image filenames uploaded to your repository.»

🎯 Learning Outcomes

By building this project, you can learn:

- ESP32 microcontroller programming.
- Bluetooth wireless communication.
- DC motor control.
- H-bridge motor driver operation.
- Basic robotics and embedded systems.
- Battery-powered electronic system design.
- Hardware troubleshooting and circuit integration.

🔮 Future Improvements

Possible upgrades for this project include:

- 🎮 Custom Android Bluetooth controller.
- 📡 Wi-Fi-based robot control.
- 📷 ESP32-CAM integration for remote monitoring.
- 📏 Ultrasonic obstacle detection.
- 🧭 Autonomous navigation.
- 🔋 Battery voltage monitoring.
- 🚦 Obstacle avoidance mode.
- 🎛️ Adjustable motor speed using PWM.

👨‍💻 Author

Sasidu Wishshanka

BICT Undergraduate | Rajarata University of Sri Lanka

Interested in Embedded Systems, IoT, Robotics, Networking, and Cybersecurity.

- 🐙 GitHub: https://github.com/Sasidu-Tech
- 💼 LinkedIn: https://www.linkedin.com/in/sasidu-wishshanka-434938428

🤝 Contributing

Suggestions and improvements are welcome.

If you have ideas to improve this project, feel free to open an issue or submit a pull request.

📜 License

This project is available for educational and personal learning purposes.

If you plan to distribute this project as open-source software, add a "LICENSE" file specifying the license terms you choose.

---

<div align="center">⭐ Enjoyed This Project?

If you found this project helpful, consider giving the repository a ⭐ star!

Keep Building • Keep Learning • Keep Innovating

Made with ❤️ by Sasidu-Tech

</div>
