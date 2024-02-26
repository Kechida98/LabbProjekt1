#include <stdio.h>
//Review and make pull request so we can merge"
char *text1 = "This is a string."; // Pekar på första tecknet (T)
char *text2 = "This is another string but longer."; // Pekar på första tecknet (Y)
int textArray1[50]; // Lagrar ASCII-värden från text1
int textArray2[50]; // Lagrar ASCII-värden från text2
int totalCharsCopied = 0; // Totalt antal kopierade tecken till båda arrayerna

// Implementera kopiering av ASCII-värden från en sträng till en array och räkna dem
// Notera att array indexing tillåts inte och allt måste hanteras via pointers!
void copyStringToAsciiValues(char *text, int *asciiValues, int *counter) {
    //int *beginasciivalues = asciiValues;//göra en kopia av pekaren
 
 while (*text){

    *asciiValues=(int)*text;// vi konverterar typecastar först till int *text till Ascii värde och 
    //lagrar minnesplatsen som ascivallue pekar på egentligen behövs det inte för att c typecastar automatiskt från char till int.

    (*counter)++;// detta räknar med ett för varje tecken, vi avrefererar för att komma åt värdet som counter pekar på.
    // om vi inte avrefirerar så skulle det öka själva pekaren till nästa minnesadress istället för att öka värdet som pekaren pekar på
    
    text++;// pekaren text ökar med ett steg för att flytta till nästa tecken i strängen

    asciiValues++;// ökar för att peka på nästa element i arrayen

 }
 //asciiValues =beginasciivalues;// återställa pekaren till början av arrayen
 
  // Din kod här. Följande steg ska implementeras:
  // 1. Iterera genom strängen 'text'.
  // 2. AsciiValues konverterar strängar till Hexadecimala Ascii värden.
}
// Rör ej denna funktion (!)
// Bearbetar båda strängarna
void processTexts() {
    copyStringToAsciiValues(text1, textArray1, &totalCharsCopied);
    copyStringToAsciiValues(text2, textArray2, &totalCharsCopied);
}
// Rör ej denna funktion (!)
// Skriver ut ASCII-värden och motsvarande tecken för en given lista
void printAsciiValues(const int *textArray) {
    printf("ASCII-koder och motsvarande tecken:\n");
    while (*textArray != 0) { // Fortsätt till slutet av arrayen
        printf("0x%03X '%c' ", *textArray, (char)*textArray);
        textArray++; // Gå till nästa ASCII-värde i arrayen
    }
    printf("\n");
}
// Rör ej denna funktion (!)
int main(void) {
    processTexts();
    printf("\nlist1: ");
    printAsciiValues(textArray1);
    printf("\nlist2: ");
    printAsciiValues(textArray2);
    printf("\nTotalt antal kopierade tecken = %d\n", totalCharsCopied);
}