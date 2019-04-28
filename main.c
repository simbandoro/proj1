#include <stdio.h>
#include <string.h>     // for string length function
  
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
    if(str[i] > 64 && str[i] < 123) {
	  str[i] = (str[i] - shift);	/*the key for encryption is shift for me.
				   this will be determined by the user 
				   this is added to ASCII value */
    }
	
  upperCase(str); // call the uppercase function so that the output is in uppercase	

  printf ("DECRYPTED MESSAGE: %s\n", str);
  
  return 0;
	
	/******** SUBSTITUTION ENCRYPTION BELOW ***************/
		
#include <stdio.h>
#include <string.h>

int main()
{
    int i;  // for counter 
    char location_string;   //this is the position of a character 
    char str[200]; 
    
    char SubKey[26] = {"QWERTYUIOPASDFGHJKLZXCVBNM"}; //this is the substitution key
    
    printf("Enter message:\n");
    fgets(str,200,stdin);
    
    for (i=0; str[i] != '\0'; i++){
            if(str[i] > 64 && str[i] < 123){   //this is to ignore non-alphabet characters
                str[i] = SubKey[str[i]-65]; //this is to give the position of the substitution key character within the array
            }
        }
    upperCase(str); // if input is lowercase it converts the output to uppercase 
    printf("\nSubstitution Cipher: %s\n", str); //prints the substitution key character at that position
    
    return 0;
}

  
