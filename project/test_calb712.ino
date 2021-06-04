///////////////// using asc712 20A

float Ib_DCsample = 0;          // Raw value read by the arduino from current sensor battery
float Imesb = 0;                // the mesured value of current form battery
float Voffsset = 2500;          // The offset value mV
float VpAb = 100;                // The scale factors bi-directional
float Iunit = 4.8828125;             // Unitary value (mV)
float AmpB_DC = 0;              // The real value of currente mesured from the




void setup()
{
  Serial.begin(9600);

}

void loop()
{

  Ib_DCsample = analogRead(A0);     //  voltage read after ADC
  Imesb = (Iunit * Ib_DCsample);    //  Voltage mesured mV
  AmpB_DC = (Imesb - 2500) / VpAb;

  Serial.print(" value read in arduino : ");
  Serial.println(Ib_DCsample);
  Serial.print("value of the voltage  (mv) : ");
  Serial.println(Imesb);
  Serial.print("la valeur amps : ");
  Serial.println(AmpB_DC * 1000);

  delay(2500);

}
