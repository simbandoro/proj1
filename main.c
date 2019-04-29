#include <stdio.h>
#include <string.h>

void upperCase (char[]);	//declaring function to convert output to upper case

int
main ()
{
  int num;			// for switch statement
  int i;			// counter
  int shift;			// how much each character is shifted by (rotation amount)
  int x;			//another counter used in substitution decryption

  char str[500];    //stores 500 characters

  char SubKey[26] = { "QWERTYUIOPASDFGHJKLZXCVBNM" };	//this is the substitution key

  printf ("Please choose from the following options:\n (Enter the number)\n");
  printf ("\n1 = Rotation cipher encryption\n");
  printf ("2 = Rotation cipher decryption\n");
  printf ("3 = Substitution cipher encryption\n");
  printf ("4 = Substitution cipher decryption\n");
  scanf ("%d", &num);

  switch (num)  //task determination
    {
    case 1:
      printf ("\nENTER MESSAGE:\t");	// \t prints a tab
      scanf ("%s", str);
      printf ("%s", str);

      printf ("\nROTATION AMOUNT:\t");
      scanf ("%d", &shift);	// this is to scan the rotation amount
      printf ("%d", shift);

      for (i = 0; (i < 500 && str[i] != '\0'); i++)

	str[i] = (str[i] + shift);	/*the key for encryption is shift for me.
					   this will be determined by the user 
					   this is added to ASCII value */
      if (str[i] < 65)
	{
	  str[i] = str[i] + 26;    //to get alphabet position if shifted beyond amount
	  i++;
	}
      else if (str[i] > 90)
	{
	  str[i] = str[i] - 26;    //to get alphabet position if shifted beyond amount
	  i++;
	}

      upperCase (str);		// call the uppercase function so that the output is in uppercase

      printf ("\nENCRYPETD MESSAGE: %s\n", str);
      break;

    case 2:
      printf ("\nENTER CIPHER TEXT:\t");
      scanf ("%s", str);
      printf ("\n%s", str);    

      printf ("\nROTATION AMOUNT:\t");
      scanf ("%d", &shift);
      printf ("%d", shift);

      for (i = 0; (i < 500 && str[i] != '\0'); i++)
	  if (str[i] != 32)
	  str[i] = (str[i] - shift);


      upperCase (str);

      printf ("\nDECRYPTED MESSAGE: %s\n", str);
      break;

    case 3:
      printf ("\nEnter message:\n");
      scanf ("%s", str);
      printf ("%s\n", str);

      for (i = 0; str[i] != '\0'; i++)
	{
	  //if (str[i] != 32)
	      if(str[i] > 64 && str[i] < 123)
	      {   //this is to ignore non-alphabet characters
	      str[i] = SubKey[str[i] - 65];	//this is to give the position of the substitution key character within the array
	    }
	}

      //upperCase(str); // if input is lowercase it converts the output to uppercase 

      printf ("\nSubstitution Cipher: %s\n", str);	//prints the substitution key character at that position
      break;

    case 4:
      printf ("\nEnter message:\n");
      scanf ("%s", str);
      printf ("%s\n", str);
      //fgets(str,500,stdin);

      for (i = 0; str[i] != '\0'; i++)
	{
	  for (x = 0; x <= 26; x++)
	    {
	      if (str[i] == SubKey[x]) /* The location of the letter in SubKey
	                                  should = location in string */
		{
		  if ((str[i] <= 122) && (str[i] >= 97))
		    {
		      str[i] = str[i] - 32; //Converting to uppercase
		    }
		  if ((str[i] <= 90) && (str[i] >= 65))
		    {
		      str[i] = x + 65; //To get the ASCII of an uppercase value
		      //printf("%c", str[i]);
		    }
		}
	    }
	}
      printf ("Decrypted text is: %c", str[i]);
      break;

    default:
      printf ("\nError\n");
    }
  return 0;

}

/******* Defining function for converting text to uppercase ******/

void
upperCase (char str[])
{
  int c = 0;

  while (str[c] != '\0')
    {
      if (str[c] >= 'a' && str[c] <= 'z')
	{
	  str[c] = str[c] - 32;	// this will make the ASCII value that of an uppercase character
	}
      c++;
    }
}
