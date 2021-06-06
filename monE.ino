

///////////////////////////////////////////////////////////////
/*   Project monotoring power of PV installation 
 *   Created : 09/03/2018
 *   Last update : 02/04/2018: 16:04 
 *   KadDal
 *   A0 pin input for current sensor battery
 *   A3 pin input for votage sensor battery   
 *   A4 pin input for current sensor of the grid
 *   A5 pin input for voltage sensor of grid
 *   
 *       Scale Factors
 *  ACS758 100A bi-directional = 20 
 *  ACS712 20A bi-directional = 100
 */
 ///////////////////////////////////////////////////////////

#include <EmonLib.h>
EnergyMonitor MonEn;
 

float Ib_DCsample=0;            // Raw value read by the arduino from current sensor battery
float Imesb=0;                  // the mesured value of current form battery 
float Voffsset =2500;           // The offset value mV
float VpAb = 20;                // The scale factors bi-directional 
float unit = 4.8828125;        // Unitary value (mV) 5/1024
float AmpB_DC=0;                // The real value of currente mesured from the battery
float Vb_DCsample=0;            // Raw value read by the arduino from voltage sensor battery
//float Vunit = 4.88;             // Unitary value Vout/Vmont  Vin  ---Conver--->  Vout  ---arduino--->  Vmon
float Vmesb =0;                 // the mesured value of voltage form battery
float VoltageB_DC=0;            // The real value of voltage mesured from the 
float unDiv= 2.75;              // (r1+r2)/r2 valu befor voltage divider
float Pb_DC=0;                  // La puissance used from the battery
float maxVol=12.5;              // The maximum voltage
float minVol=1;                 // The min Voltage
float levelVol;                 // The level of the battery

unsigned long int tmp;



float CalI=80.0;                   // calibrage du courant
float CalV= 375.0;                    // calibrage de tension
float PhaseV = 1.7;            // calibrage de phase
int crossings = 20;
int timeout = 2000;
 

void setup() 
{
   Serial.begin(9600);
   Serial.println("CLEARDATA"); //clears up any data left from previous projects
   Serial.println("LABEL,Time,CurB,VoltB,LevBat,PowB,CurGr,VoltGr,RPower,ApPower,PowFactor,Counter");
   MonEn.voltage(A5, CalV, PhaseV);              // add parameters inpin & calibration !!!!!!!!!!
   MonEn.current(A4,CalI );              // need to add the parameters
}
void loop() 
{
  /*********************************************************** DC part ********************************************************/
  


  ////////////////////////////////////// Mesurement of the current from the Battery ////////////////////
  
  Ib_DCsample=analogRead(A0)-185;      //  voltage read after ADC
  Imesb=(unit*Ib_DCsample);        //  Voltage mesured mV 
  AmpB_DC=(Imesb-Voffsset)/VpAb;    // current from the battery
  
  /*Serial.println(" value read in arduino : "+String(Ib_DCsample));
  Serial.println("value of the voltage  (mv) : " + String(Imesb));
  Serial.println("la valeur amps : "+ String(AmpB_DC)+ "A");
  Serial.println("/***********************************************************");*/
  
 
  ////////////////////////////////////// Mesurment of the voltage from the battery & th level of the battery  /////////////////
  
  Vb_DCsample=analogRead(A1);
  Vmesb=unit*Vb_DCsample;
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

 /* Serial.println("la valeur lue sur arduino mon : "+ String(Vb_DCsample));
  Serial.println("la valeur de la tension Vout : "+ String(Vmesb/1000));
  Serial.println(" La tension actuel de la batterie est : "+ String(VoltageB_DC)+ " V ");
  Serial.println(" Le niveau de la batterie est : "+ String(levelVol)+ " % ");
  Serial.println("/***********************************************************");*/

   //////////////////////////////////////// The power produced by the Battery //////////////////
    
 Pb_DC = VoltageB_DC*AmpB_DC;
 
  
  /************************************************************ AC part **********************************************************/
  
           
  
  MonEn.calcVI(crossings,timeout);


  float currentDraw     = MonEn.Irms;             //extract Irms into Variable
  float supplyVoltage   = MonEn.Vrms;             //extract Vrms into Variable
  float realPower       = MonEn.realPower;        //extract Real Power into variable
  float apparentPower   = MonEn.apparentPower;    //extract Apparent Power into variable
  float powerFactor     = MonEn.powerFactor;      //extract Power Factor into Variable
  
  Serial.println("/////////////////////////////////////////////////////////");
 /*Serial.print("Voltage: ");
  Serial.println(supplyVoltage);
  
  Serial.print("Current: ");
  Serial.println(currentDraw);

  Serial.print("Watts: ");
  Serial.println(currentDraw * supplyVoltage);
  
  Serial.print("realPower: ");
  Serial.println(realPower);
  
  Serial.print("apparentPower: ");
  Serial.println(apparentPower);
  
  Serial.print("powerFactor: ");
  Serial.println(powerFactor);
  Serial.println("\n\n"); */
  tmp=millis();
  Serial.print("DATA,TIME,");
  Serial.print(AmpB_DC);
  Serial.print(",");
  Serial.print(VoltageB_DC);
  Serial.print(",");
  Serial.print(levelVol);
  Serial.print(",");
  Serial.print(Pb_DC );
  Serial.print(",");
  Serial.print(currentDraw);
  Serial.print(",");
  Serial.print(supplyVoltage);
  Serial.print(",");
  Serial.print(realPower);
  Serial.print(",");
  Serial.print(apparentPower);
  Serial.print(",");
  Serial.print(powerFactor);
  Serial.print(",");
  Serial.println(tmp);
  delay(1000);

}

/* 
float Ip_DCsample=0;            // Raw value read by the arduino from current sensor PV
float Vp_DCsample=0;            // Raw value read by the arduino from voltage sensor pv
float Imesp=0;                  // the mesured value of current form th PV
float AmpP_DC= 0;               // The real value of currente mesured from the PV
float VpAp = 40;                // The scale factors uni-directional  
float VoltageP_DC=0;            // The real value of voltage mesured from the PV
float ScalVp=0;                 // equal to vin/mont   Vin  ---Conver--->  Vout  ---arduino--->  Vmont (not determined yet need calibtation !!!!!! )
float Pp_DC=0;                  // The power of the PV instalation 

  ////////////////////////////////////// Mesurement of the current from the PV ////////////////////
  
  Ip_DCsample=alalogRead(A2);
  Imesp=(Iunit*Ip_DCsample)/1000;
  AmpP_DC=(Imesp-Voffsset)/VpAp;

  ////////////////////////////////////// Mesurement of the voltage from th PV ///////////////////

  Vp_DCsample= analogRead(A3);
  VoltageP_DC=Vp_DCsample*ScalVp;
  
  /////////////////////////////////////// The power produced by th PV /////////////////////////

  Pp_DC=2*VoltageP_DC*AmpP_DC;            // we've 12 panel
  Serial.print(" The power of the PV installationis :");
  Serial.println(Pp_DC);
*/



