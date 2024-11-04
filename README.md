# IoT Practice using Arduino & ESP8266

![Phi](/assets/images/phi-project.jpg)
### Wk2 [Phi Phenomenon](phi.ino)

When the switch is pressed, a current flows to digital pin D1. This triggers a sequence of events controlled by a C++ program. The program iterates through pins D2 to D7, setting each pin to HIGH, then LOW, with a brief delay between each state change. This creates a sequential lighting effect, known as the phi phenomenon, where the bulbs appear to light up one after another.

- **Switch** connected to 3V3 pin and D1 pin,  10k ohm to  - rail/GND
- **LEDs** conneted to D2-D7 with 220 Ω registors to - to GND 
- **[ Watch how it works](https://www.instagram.com/reel/DB6qUEzRgbV/?utm_source=ig_web_copy_link&igsh=MzRlODBiNWFlZA==)** 


<br><br>

![SmartChair1](/assets/images/smart-chair-p1-2.jpg)
### Wk3 [Smart Chair Part1](smart_chair_part1.ino)
When a capacitive touch sensor is touched,  the voltage lowers and signal 1 is sent to the microcontroller. A photoresistor measures ambient light levels to determine day or night. The system utilizes an RGB LED module to visually indicate the status of the sensor and the time of day. Photoregistor gives analog input whereas Touch sensor signal has a built in ADC so it sends binary of HIGH 1 or LOW 0.

- **[ Watch how it works](https://www.instagram.com/reel/DBuHycwy5vY/?utm_source=ig_web_copy_link&igsh=MzRlODBiNWFlZA==)** 
- **[Photoregistor](https://www.instagram.com/p/DB4CULLuDXL/?utm_source=ig_web_copy_link&igsh=MzRlODBiNWFlZA==)** gives **analog** input whereas **Touch sensor** signal has a built in ADC so it sends binary of HIGH 1 or LOW 0

- **RGB LED Module** connects to: R -> D2, G -> D3, B -> D4 , GND -> - rail 
- **Capacitive Touch sensor** SIG -> D5 (General Input Output pin) 
- **[Photoregistor](https://www.instagram.com/p/DB4CULLuDXL/?utm_source=ig_web_copy_link&igsh=MzRlODBiNWFlZA==)**  SIG -> A0 (Analog to Digital Converter pin)


![SmartChair1Parts](/assets/images/smart-chair-p1-parts.jpg)

<br><br>

![SmartFridge](/assets/images/fridge-p1.jpg)
### Wk3 [Smart Fridge](smart_fridge_part1.ino)

**Switch Off:**
* The [potentiometer](https://www.instagram.com/p/DB9HL3oOFfs/?utm_source=ig_web_copy_link&igsh=MzRlODBiNWFlZA==) controls the voltage sent to the microcontroller's analog input pin (A0).
* The microcontroller reads this analog value and uses it to control the LED's brightness through Pulse-Width Modulation (PWM).

**Switch On:**
* The switch sends a high signal to digital pin D1 of the microcontroller.
* The microcontroller directly controls the LED's brightness, bypassing the potentiometer's influence.

- **[ Watch how it works](https://www.instagram.com/reel/DB66M0_SfXy/?utm_source=ig_web_copy_link)** 


![SmartFridge1Parts](/assets/images/fridge-p1-parts.jpg)

<br><br>

![SmartFridge](/assets/images/fridge-p2.jpg)
### Wk4 [Smart Fridge](smart_fridge_part2.ino)

**Switch Off:** 
* The RGB LED cycles through red, blue, and green colors. 
**Switch On:** * The switch triggers a signal to the microcontroller. 
* The potentiometer controls the voltage sent to the microcontroller's analog input pin (A0). 
* The microcontroller processes this analog input to adjust the RGB LED's color, transitioning between pink and blue hues. The buzzer's sound is also be influenced by the potentiometer's value.
- **[Watch how it works](https://www.instagram.com/reel/DB89HG0Oaq3/?utm_source=ig_web_copy_link&igsh=MzRlODBiNWFlZA==)** 



