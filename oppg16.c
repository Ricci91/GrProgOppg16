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

// Les inn tall fra bruker og legg de inn i array
int intArray[ANTALLTALL];
for (int i = 0; i < ANTALLTALL; i++)
{
    printf("Skriv inn et tall mellom %d og %d -> ", MINVERDI, MAXVERDI);
    scanf("%d", &intArray[i]);
    getchar();

    if (intArray[i] < MINVERDI || intArray[i] > MAXVERDI)
    {
        printf("Tall ikke innenfor verdiene! \n");
    }
} 

// Spør om charer sombruker skal skrive ut og les de inn i array. 
// Dersom det blir skrevet inn noe som ikke er char så prøv igj
char inputChars[512];
for (int i = 0; i < ANTALLCHARS; i++)
{
    printf("Skriv inn char nr %d du vil lagre: ", i);
    scanf("%c", &inputChars[i]);
    getchar();

    inputChars[i] = toupper(inputChars[i]);
    if (!isalpha(inputChars[i]))
    {
        printf("IKKE BOKSTAV! PRØV IGJEN!\n");
        i--;
    }
    
}

// Skriv ut alle innleste tall
printf("Tallene du skrev inn var: ");
for (int i = 0; i < ANTALLTALL; i++)
{
    printf("%d\n", intArray[i]);
}
printf("\n");

// skriv ut alle 10 innleste bokstavene
for (int i = 0; i < ANTALLCHARS; i++) 
{
    printf("%c \n", inputChars[i]);
}

}
