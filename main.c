#include <stdio.h>
#include <string.h>

void upperCase(char []); //declaring function to convert output to upper case

int main()
{
    int num;    // for switch statement
    int i;      // counter
    int shift; // how much each character is shifted by (rotation amount)
  
    char str[500];
    
    char SubKey[26] = {"QWERTYUIOPASDFGHJKLZXCVBNM"}; //this is the substitution key
    
    printf("Please choose from the following options:\n");
    printf("\n1 = Rotation cipher encryption\n");
    printf("2 = Rotation cipher decryption\n");
    printf("3 = Substitution cipher encryption\n");
    scanf("%d", &num);
    
    switch (num) {
        case 1: 
          printf ("\nENTER MESSAGE:\t");	// \t prints a tab
          scanf ("%s", str);
          /*fgets (str, 500, stdin);	 This is to get the string from the keyboard. 
                                        fgets is safer to use than gets */
        
          printf ("ROTATION AMOUNT:\t");
          scanf ("%d", &shift); // this is to scan the rotation amount
        
          for (i = 0; (i < 500 && str[i] != '\0'); i++)
          
            str[i] = (str[i] + shift);	/*the key for encryption is shift for me.
        				   this will be determined by the user 
        				   this is added to ASCII value */
          
          upperCase(str); // call the uppercase function so that the output is in uppercase
          
          printf ("\nENCRYPETD MESSAGE: %s\n", str);
            break;
        
        case 2:
        printf ("\nENTER CIPHER TEXT:\t");	
          scanf("%s", str);
          //fgets (str, 500, stdin);	
        
          printf ("ROTATION AMOUNT:\t");
          scanf ("%d", &shift); 
        
          for (i = 0; (i < 500 && str[i] != '\0'); i++) 
        	  str[i] = (str[i] - shift);	
            
        
          upperCase(str); 
        
          printf ("DECRYPTED MESSAGE: %s\n", str);
          break;
          
        case 3:
            printf("\nEnter message:\n");
            scanf("%s", str);
            printf("%s\n", str);
            //fgets(str,500,stdin);
            
                for (i=0; str[i] != '\0'; i++){
                        if (str[i] != 32) {
                        //if(str[i] > 64 && str[i] < 123){   //this is to ignore non-alphabet characters
                            str[i] = SubKey[str[i]-65]; //this is to give the position of the substitution key character within the array
                        }
                    }
            
            //upperCase(str); // if input is lowercase it converts the output to uppercase 
            
            printf("\nSubstitution Cipher: %s\n", str); //prints the substitution key character at that position
            break;
            
        default:
      printf("\nError\n");
   }
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
