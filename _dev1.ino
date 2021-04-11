int ledler[]={13,12,11,10,9}; //ledleri bağladığım pin numaraları
int butonlar[]={6,5,4};//butonları bağladığım pin numaraları
bool butonaBasildimi=false;
int i,j;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(6, INPUT);
  pinMode(5, INPUT);
  pinMode(4, INPUT); 
}
void loop()
{
  if((digitalRead(butonlar[0])) && !butonaBasildimi){
  butonaBasildimi=true;    
  for(i=0;i<5;i++){      
   digitalWrite(ledler[i],HIGH);
   delay(300);  
  }
  for(i=0;i<5;i++){
   digitalWrite(ledler[i],LOW); 
}butonaBasildimi=false;
}
  if((digitalRead(butonlar[1])) && !butonaBasildimi){
  butonaBasildimi=true;    
  for(i=4;i>=0;i--){      
   digitalWrite(ledler[i],HIGH);
   delay(300);  
  }
  for(i=0;i<5;i++){
   digitalWrite(ledler[i],LOW); 
}butonaBasildimi=false;
}
  if((digitalRead(butonlar[2])) && !butonaBasildimi){
  butonaBasildimi=true; 
    for(int j=0;j<10;j++){
      for(i=0;i<5;i++){      
        digitalWrite(ledler[i],HIGH);     
  }
   delay(300);
      for(i=0;i<5;i++){
        digitalWrite(ledler[i],LOW); 
}
   delay(300);      
}
    butonaBasildimi=false;
  }
}
