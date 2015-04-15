/* TP #1 "Tabla Celsius-Fahrenheit"
*Ignacio Francisco Ferrari
*13/04/15
*/

#include <stdio.h>

main()
{
float fahr, celsius;
float menor, mayor, salto;
menor = -17; 
mayor = 248; 
salto = 10; 
celsius = menor;
while (celsius <= mayor) {
fahr = (5.0/9.0) * (celsius+32.0);
printf("%3.0f %6.1f\n", celsius, fahr);
celsius = celsius + salto;
                        }
                        
                        
}



