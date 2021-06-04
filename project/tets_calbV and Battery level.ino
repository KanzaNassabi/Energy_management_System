
float Vb_DCsample=0;
float Vmesb =0;
float Vunit = 4.85;       // Unitary value Vout/Vmont (not determined yet need calibtation !!!!!! )  Vin  ---Conver--->  Vout  ---arduino--->  Vmon
float unDiv= 2.75;        // (r1+r2)/r2 valu befor voltage divider
float VoltageB_DC=0;
float maxVol=12.5;
float minVol=1;
float levelVol;


void setup()
{
  Serial.begin(9600);
}

void loop() 
{
  Vb_DCsample=analogRead(A1);
  Vmesb=Vunit*Vb_DCsample;
  VoltageB_DC= (Vmesb*unDiv)/1000;
  if(VoltageB_DC <minVol)
  {
    levelVol = 0;
  }
  else if(VoltageB_DC > maxVol)
  {
    levelVol = 100;
  }
  else 
  {
    levelVol= VoltageB_DC*100/maxVol;
  }
  Serial.print("la valeur lue sur arduino mon : "+ String(Vb_DCsample));
  Serial.println("la valeur de la tension Vout : "+ String(Vmesb/1000));
  Serial.println(" La tension actuel de la batterie est : "+ String(VoltageB_DC)+ " V ");
  Serial.print(" Le niveau de la batterie est : "+ String(levelVol)+ " % ");

  delay(5000);
}
