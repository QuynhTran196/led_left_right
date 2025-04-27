//Led chạy từ trái sang phải
int pinLed[]={2,3,4,5,6,7,8,9};
            //{0,1,2,3,4,5,6,7}
int i, j;
void chaytraiphai ()
{
  static int chay1=0;
  for(i=0;i<=7;i++)
    digitalWrite(pinLed[i], LOW);
  digitalWrite(pinLed[chay1], HIGH);
  delay(300);
  chay1++;
  if(chay1>7)
    chay1=0;
}
void setup()
{
  for(i=0;i<=7;i++)
  pinMode(pinLed[i], OUTPUT);
}
void loop()
{
  chaytraiphai();
}