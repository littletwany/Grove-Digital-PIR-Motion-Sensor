int sensor = 2;
int led = 13;

void setup() {
 
  Serial.begin(9600);
  
  pinMode(sensor, INPUT);//将传感器的引脚设置为输入
  pinMode(led, OUTPUT);//将LED的引脚设置为输出
}


void loop() {

  int motionState = digitalRead(sensor);//读取传感器的状态
  Serial.println(motionState);
  if (motionState == HIGH){
    digitalWrite(led, HIGH);} //如果传感器检测到运动则亮灯
    else 
    digitalWrite(led, LOW);
}
