// C++ code
//


int led = 11;
int x = 0;
int incre = 5;

void setup() 
{
  
  pinMode(led, OUTPUT);
  
}

void loop()
{
  x += incre;

  if (x >= 255 || x <= 0)
{ 
       incre *= -1; 

}
analogWrite(led, x);
      delay(150);
}

