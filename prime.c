#include <stdio.h>
//Uppdatd review and make a pull request so i can merge

int is_prime(int n){
//
    if ( n<=1 ) // 0 och 1 är inte primtal då ska de returnas 0
    {
        return 0;
    }

    for (int  i = 2 ; i*i<=n; i++){
      if (n % i == 0){ // ifall n är delbart med sig själv och annat än 1 då är det jämnt tal 
        return 0; // då returneras 0 för att då är de inte ett primtal delbart med sig själv och annat
      }
        
    }
    return 1; // else retunera 1 för då är det ett primtal 
  ///  
}

int main(void){
  printf("%d\n", is_prime(11));  // 11 is a prime.      Should print 1.
  printf("%d\n", is_prime(383)); // 383 is a prime.     Should print 1.
  printf("%d\n", is_prime(987)); // 987 is not a prime. Should print 0.

}
