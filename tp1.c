#include <stdio.h>
#include <cstdlib>

 /* Tabla Celsius-Fahrenheit  */
 
 
main(){
 
 float fahr, celsius;
 float inferior, mayor, salto;
 
 inferior = -17; /* inferior limite de temperatura fahrenheit */
 mayor = 148; /* superior limite de temperatura fahrenheit */
 salto = 11;
 
 
 fahr = inferior;
  
 while (fahr <= mayor) {
 fahr = ( 5.0 / 9.0 )  * (celsius + 32);
 printf("%3.0f %6.1f\n", fahr, celsius);
 celsius = celsius + salto;
                       }
system ("PAUSE"); 

      }
