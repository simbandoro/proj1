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
    
void upperCase(char []); //declaring function to convert output to upper case

int main()  {

    int i;
  char str[500];
  int shift; // how much each character is shifted by (rotation amount)

  printf ("\nENTER MESSAGE:\t");	// \t prints a tab
  
  fgets (str, 500, stdin);	/* This is to get the string from the keyboard. fgets is safer to use than gets */

  printf ("ROTATION AMOUNT:\t");

  scanf ("%d", &shift); // this is to scan the rotation amount

  for (i = 0; (i < 500 && str[i] != '\0'); i++)
    str[i] = (str[i] + shift);	/*the key for encryption is shift for me.
				   this will be determined by the user 
				   this is added to ASCII value */

  upperCase(str); // call the uppercase function so that the output is in uppercase
  
  printf ("\nENCRYPETD MESSAGE: %s\n", str);
  
  return 0; 
}

/******* Defining function for converting text to uppercase ******/

void upperCase(char str[]) {
   int c = 0;
   
   while (str[c] != '\0') {
      if (str[c] >= 'a' && str[c] <= 'z') {
         str[c] = str[c] - 32; // this will make the ASCII value that of an uppercase character
      }
      c++;
   }
}
	

	
	/********** ROTATION CIPHER DECRYPTION BELOW **************/

	
	
  int i;
  char str[500];
  int shift; // how much each character is shifted by (rotation amount)

  printf ("\nENTER CIPHER TEXT:\t");	// \t prints a tab
  
  fgets (str, 500, stdin);	/* This is to get the string from the keyboard. fgets is safer to use than gets */

  printf ("ROTATION AMOUNT:\t");

  scanf ("%d", &shift); // this is to scan the rotation amount

  for (i = 0; (i < 500 && str[i] != '\0'); i++)
    str[i] = (str[i] - shift);	/*the key for encryption is shift for me.
				   this will be determined by the user 
				   this is added to ASCII value */

  printf ("DECRYPTED MESSAGE: %s\n", str);
  
  return 0;
  
