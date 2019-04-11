#include <stdio.h>
#include <string.h>     // for string length function

int main()  {

    char alphabet[26]; // this indicates that there are 26 characters type variables (so the alphabet from A to Z) 
    int shift; //this is to declare integer variable of type shift. 
                //This is how many letters the encryption will be shifted by
    int i;
    int key;
    
    
                
        printf("Enter a message to encrypt: "); // yeah this is here 
        
        gets(alphabet);     //this is telling the computer to scan the 26 letters of the alphabet
        
   /* the for loop here is gonna be for the incrementation */
   
   for(i = 0; alphabet[i] != '\0'; i++)  {
        alphabet = alphabet [i];
        
        if (alphabet >= 'a' && alphabet <= 'z') {
            alphabet = alphabet + shift;
            
                if (ch > 'z'){
                    
                }
        }
    }
    
  return 0;
  }
