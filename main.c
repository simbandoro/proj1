#include <stdio.h>
#include <string.h>     // for string length function

int main()  {
   
    char alphabet[26]; // this indicates that there are 26 characters type variables (so the alphabet from A to Z) 
    int shift; //this is to declare integer variable of type shift. 
                //This is how many letters the encryption will be shifted by
    int i;
   
                
        printf("Enter a message to encrypt: "); // yeah this is here 
        
        gets(alphabet);     //this is telling the computer to scan the 26 letters of the alphabet
        
   /* the for loop here is gonna be for the incrementation */
   
   for(i = 0; alphabet[i] != '\0'; i++)  {
        alphabet = alphabet [i];
        
        if (alphabet >= 'a' && alphabet <= 'z') {
            alphabet = alphabet + shift;
            
                if (alphabet > 'z'){
                    
                }
        }
    }
  
    /******** ROTATION CIPHER BELOW ********
    the cipher has a problem when letters are shifted past alphabet variables 
    eg. if Z is shifted by 3 it will not print C    */
    
  int i;
  char str[200];
  int shift; // how much each character is shifted by (rotation amount)

  printf ("\nENTER MESSAGE:\t");	// \t prints a tab
  
  fgets (str, 200, stdin);	/* This is to get the string from the keyboard. fgets is safer to use than gets */

  printf ("ROTATION AMOUNT:\t");

  scanf ("%d", &shift); // this is to scan the rotation amount

  for (i = 0; (i < 200 && str[i] != '\0'); i++)
    str[i] = (str[i] + shift);	/*the key for encryption is shift for me.
				   this will be determined by the user 
				   this is added to ASCII value */

  printf ("\nENCRYPETD MESSAGE: %s\n", str);
  
  return 0;
  
