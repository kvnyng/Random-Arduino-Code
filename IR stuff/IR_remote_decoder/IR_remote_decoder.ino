#include <IRremote.h>

int IRpin = 2;
IRrecv irrecv(IRpin);
decode_results results;


void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
}  
void loop() 

{   
  if (irrecv.decode(&results)) 
    {
     Serial.println(results.value); // Print the Serial 'results.value'
      delay(10);

     irrecv.resume();   // Receive the next value
    }
}    
