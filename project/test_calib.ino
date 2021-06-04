float Ib_DCsample=0;            // Raw value read by the arduino from current sensor battery
float Imesb=0;                  // the mesured value of current form battery 
float Voffsset =2500;           // The offset value mV
float VpAb = 20;                // The scale factors bi-directional 
float Iunit = 4.88;             // Unitary value (mV) 
float AmpB_DC=0;                // The real value of currente mesured from the battery
float Offset=509;




void setup() 
{
  Serial.begin(9600);

}

void loop() 
{
  
  Ib_DCsample=analogRead(A0);       //  voltage read after ADC
  Imesb=(Iunit*Ib_DCsample);        //  Voltage mesured mV 
  AmpB_DC=(Imesb-Voffsset)/VpAb;     
  
  Serial.println(" value read in arduino : "+String(Ib_DCsample));
  Serial.print("value of the voltage  (mv) : " + String(Imesb));
  Serial.print("la valeur amps : "+ String(mpB_DC)+ "A");
  
  delay(2500); 

}
