# IoT Practice using Arduino & ESP8266

![Phi](/assets/images/phi-project.jpg)
### Wk2 [Phi Effects](phi.ino)
- ESP8266 3V3 , GND for D3-5 LED,  GND for D5-7 LED via Registors 220ohm
- **Switch** connected to 3V3 pin and D1 pin,  10k ohm to  - rail 
- **LEDs** conneted to D2-D7, 220ohm registors to - to GND 
- **Finished project Video:**
https://www.instagram.com/reel/DBlvbXcuKN-/?utm_source=ig_web_copy_link&igsh=MzRlODBiNWFlZA==


<br>

![SmartChair1](/assets/images/smart-chair-p1.jpg)
### Wk3 [Smart Chair Part1](smart_chair_part1.ino)
Utillizing Capacitive Touch Sensor for checking if the chair is occupied. Photoresistor is used to measure the lighting to see if it is Day or Night.
RGB LED module is used to tell you a status of the chair / Day or Night. 
**Photoregistor** gives **analog** input whereas **Touch sensor** signal has a built in ADC so it sends binary of HIGH 1 or LOW 0

- **RGB LED Module** connects to: R -> D2, G -> D3, B -> D4 , GND -> - rail 
- **Capacitive Touch sensor** SIG -> D5 (General Input Output pin) 
- **Photoregistor** SIG -> A0 (Analog to Digital Converter pin)


![SmartChair1Parts](/assets/images/smart-chair-p1-parts.jpg)




