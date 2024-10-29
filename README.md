# IoT Practice using Arduino & ESP8266
![Phi](/assets/images/phi_project.jpg)
### ESP8266 , Switch, LEDs, Registors 220ohm, 10kohm 
- ESP8266 3V3 , GND for D3-5 LED,   GND for D5-7 LED 
- Switch connects to 3V3 and  D1 and 10k ohm to - rail 
- LEDs D2-D7, 220ohm registors to - to GND 
- **Finished project Video:**
https://www.instagram.com/reel/DBlvbXcuKN-/?utm_source=ig_web_copy_link&igsh=MzRlODBiNWFlZA==


![SmartChair1](/assets/images/smart-chair-p1.jpg)
## Wk3 Smart Chair Part1
Utillizing Capacitive Touch Sensor for checking if the chair is occupied. Photoresistor is used to measure the lighting to see if it is Day or Night.
RGB LED module is used to tell you a status of the chair / Day or Night. 

**Photoregistor** gives **analog** input whereas **Touch sensor** signal has a built in ADC so it sends binary of HIGH 1 or LOW 0

### ESP8266, RGB LED Module, Touch sensor, Photoregistor sensor 
- **RGB LED Module** connects to: R -> D2, G -> D3, B -> D4 , GND -> - rail 
- ** Capacitive Touch sensor** SIG -> D5 (General Input Output pin) 
- **Photoregistor** SIG -> A0 (Analog to Digital Converter pin)







