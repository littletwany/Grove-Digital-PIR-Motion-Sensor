---
name: Grove-Digital-PIR-Motion-Sensor
category: sensor
bzurl: 
surveyurl: 
sku: 101020793
tags:
---
This sensor allows you to sense motion, usually human movement in its range. Simply connect it to Grove - Base shield and program it, when anyone moves in its detecting range, the sensor will output HIGH on its SIG pin.
<p style=":center"><a href="https://www.seeedstudio.com/。。。。" target="_blank"><img src="https://github.com/SeeedDocument/wiki_english/raw/master/docs/images/300px-Get_One_Now_Banner-ragular.png" /></a></p>

## Features

- Grove compatible interface
- Quick sensing time
- Induction distance more than 3.2m
- Grove interface

!!!Tip
    More details about Grove modules please refer to [Grove System](http://wiki.seeedstudio.com/Grove_System/)
## Specification

|Parameter	|Value/Range
|---|---|
|Operating Voltage|	3.3V/5V DC
|Operating Current|	<10mA
|Measuring Range|>3.2m
|Holding Time	|<1s


## Platforms Supported

| Arduino| Raspberry Pi| BeagleBone| Wio| LinkIt ONE|
|--------|-------------|-----------|----|-----------|
| ![](https://raw.githubusercontent.com/SeeedDocument/wiki_english/master/docs/images/arduino_logo.jpg) | ![](https://raw.githubusercontent.com/SeeedDocument/wiki_english/master/docs/images/raspberry_pi_logo.jpg) | ![](https://raw.githubusercontent.com/SeeedDocument/wiki_english/master/docs/images/bbg_logo.jpg) | ![](https://raw.githubusercontent.com/SeeedDocument/wiki_english/master/docs/images/wio_logo.jpg) | ![](https://raw.githubusercontent.com/SeeedDocument/wiki_english/master/docs/images/linkit_logo.jpg) |

!!!Caution
    The platforms mentioned above as supported is/are an indication of the module's software or theoritical compatibility. We only provide software library or code examples for Arduino platform in most cases. It is not possible to provide software library / demo code for all possible MCU platforms. Hence, users have to write their own software library.
## Getting Started

!!!Note
    If this is the first time you work with Arduino, we firmly recommend you to see [Getting Started with Arduino](http://wiki.seeedstudio.com/Getting_Started_with_Arduino/) before the start.

### Play With Arduino

#### Hardware


- **Step 1.** Prepare the below stuffs:

| Seeeduino V4.2 | Grove - Digital PIR Motion Sensor | Base Shield |
|--------------|----------------------|-----------------|
|![enter image description here](https://raw.githubusercontent.com/SeeedDocument/Grove_Light_Sensor/master/images/gs_1.jpg)|![enter image description here](https://github.com/SeeedDocument/Grove_PIR_Motion_Sensor/raw/master/img/Grove%20-%20PIR%20Motion%20Sensor_s.jpg)|![enter image description here](https://raw.githubusercontent.com/SeeedDocument/Grove_Light_Sensor/master/images/gs_4.jpg)|
|[Get One Now](http://www.seeedstudio.com/Seeeduino-V4.2-p-2517.html)|[Get One Now](https://www.seeedstudio.com/Grove-Digital-PIR-Motion-Sensor。。。。。.html)|[Get One Now](https://www.seeedstudio.com/Base-Shield-V2-p-1378.html)|


- **Step 2.** Connect Grove - Digital 0PIR Motion Sensor to port **D2** of Grove-Base Shield.

- **Step 3.** Plug Grove - Base Shield into Seeeduino.

- **Step 4.** Connect Seeeduino to PC via a USB cable.


![](https://github.com/SeeedDocument/Grove_PIR_Motion_Sensor/raw/master/img/connect_arduino.jpg)

!!!Note
	If we don't have Grove Base Shield, We also can directly connect Grove-PIR Motion Sensor to Seeeduino as below.

| Seeeduino       | Grove - Digital PIR Motion Sensor |
|---------------|-------------------------|
| 5V            | Red                     |
| GND           | Black                   |
| Not Conencted | White                   |
| D2            | Yellow                  |



#### Software

- Copy the code below into Arduino IDE and upload. If you do not know how to upload the code, please check [how to upload code](http://wiki.seeedstudio.com/Upload_Code/).


```c
/*macro definitions of Digital PIR motion sensor pin and LED pin*/
int sensor = 2;
int led = 3;

void setup() {
 
  Serial.begin(9600);
  
  pinMode(sensor, INPUT);//Set the pin of the sensor as input
  pinMode(led, OUTPUT);//Set the LED pin to output
}


void loop() {

  int motionState = digitalRead(sensor);//Read the state of the sensor
  Serial.println(motionState);
  if (motionState == HIGH){
    digitalWrite(led, HIGH);} //Light up if the sensor detects movement
    else 
    digitalWrite(led, LOW);
}

```


- We'll see the led light come on when we detect movement


## Resources
- **[Eagle]** [Grove - Digital PIR Motion Sensor Eagle File v1.2](https://github.com/SeeedDocument/。。。。.zip)
- **[PDF]** [Grove - Digital PIR Motion Sensor v1.2 Schematics](https://github.com/SeeedDocument/。。。。。.pdf)
- **[PDF]** [Grove - Digital PIR Motion Sensor Eagle V1.2 PCB](https://github.com/SeeedDocument/。。。。.pdf)
- **[Library]** [Github repository for Digital PIR Motion Sensor](https://github.com/Seeed-Studio/。。。。)
- **[Datasheet]** [BS312 Datasheet](https://github.com/SeeedDocument/。。。.pdf)
- **[Codecraft]** [CDC File](https://raw.githubusercontent.com/SeeedDocument/。。。。.zip)



## Tech Support
Please submit any technical issue into our [forum](http://forum.seeedstudio.com/).
<br /><p style="text-align:center"><a href="https://www.seeedstudio.com/act-4.html?utm_source=wiki&utm_medium=wikibanner&utm_campaign=newproducts" target="_blank"><img src="https://github.com/SeeedDocument/Wiki_Banner/raw/master/new_product.jpg" /></a></p>                                                                                                                                                                                                                                                                                                                                                                                                                                             