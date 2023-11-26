#include <stdio.h>
#include <ctype.h>

/**
 * 
 *  Oppgave 16 i heftet 
 * 
 * @author Richard Frøyland
 * @file   oppg16.c
 * 
 * 
*/

/**
 * Skriv et program som:
• leser inn fem verdier i en int-array
• sikrer at alle disse verdiene er mellom const-ene MINVERDI og MAXVERDI
(konstantene er henholdsvis 1 og 10000).
• skriver ut alle de fem innleste heltallene
• leser inn ti tegn (ett og ett ad gangen) i en char-array
• gjør hver av dem evt. om til en stor bokstav (vha. toupper)
• sikrer at alle tegnene virkelig er bokstaver (A-Z, Æ, Ø og Å regnes ikke med)
• skriver ut alle de ti innleste bokstavene
*/

//Lag konster minverdi og maxverdi - inter
// disse er 1 og 10000
//Sikre at alle verdiene er mellom constene MINVERDI og MAXVERDI

const int MINVERDI = 1;
const int MAXVERDI = 10000;
const int ANTALLTALL = 5;
const int ANTALLCHARS = 10;

//Les inn fem verdier i en int array
/**
 * lag en int array som heter numarray
 * for i = 0; i < 5
 *  scanf intarray[i]
 *  if intarray[i] < 1 || intarray[i] > 10000
 *  printf feil tall
 *  
 * nå har vi fått inn intene i en array 
 * 
*/
int main(void) 
{
int intArray[ANTALLTALL];

for (int i = 0; i < ANTALLTALL; i++)
{
    printf("Skriv inn et tall mellom %d og %d -> ", MINVERDI, MAXVERDI);
    scanf("%d", &intArray[i]);
    // if (!isdigit(intArray[i]))
    // {
    //     printf("Skriv et tall din knoll");
    // }
    if (intArray[i] < MINVERDI || intArray[i] > MAXVERDI)
    {
        printf("Tall ikke innenfor verdiene! \n");
    }
}

// Skriv ut alle innleste tall
/** for i = 0, i < 5
 *  printf scanarray[i]
*/
printf("Tallene du skrev inn var: ");
for (int i = 0; i < ANTALLTALL; i++)
{
    printf("%d", intArray[i]);
}
printf("\n");



// Les inn ti tegn og (ett og ett) i en char array
//gjor alle om til stor bokstav
// Sjekk at alle er bokstaver (isalpha)
/**
 * char chararray[50];
 * for i = 0, i < 10
 * scanf char[i]
 * char[i] to upper
 * 
 * if char[i] !isalpha
 *  printf ikke bokstav
 * 
*/



// skriv ut alle 10 innleste bokstavene
/**
 * for i = 0, i < 10
 * printf chararray[i]
*/

}
