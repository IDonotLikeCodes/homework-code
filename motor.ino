void setup(){
  int channel_PWM = 1;
  int freq_PWM= 50;
  int resolution_PWM = 12;
  ledcAttach(4,50,12);
}

void loop(){
  ledcWrite(4,4096);// rotate in full power
  delay(20);
  ledcWrite(4,1024);
  delay(200);
  ledcWrite(4,0);
  delay(280);

  
}