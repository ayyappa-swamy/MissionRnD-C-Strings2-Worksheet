/*
OVERVIEW: Given a string, Count the number of consonants and vowels and copy them to 'consonants' and 'vowels' respectively
Notes : Neglect Space and Other Symbols .Consider Capital Letters too

E.g.: Input: "aB c" , Output: consonants should contain 2 and vowels 1

INPUTS: A string and two int pointers

OUTPUT: Modify the consonants and vowels pointers accordingly with their counts (*consonants=?? ;*vowels=??)

INPUT2: Dont Forget they are pointers ;consonants and vowels are addresses of two variables .

Output: consonants should be ??,vowels should be ??

??:Count them :)

NOTES: Don't create new string , Dont return anything ,you have been given two pointers ,copy values into those .
*/

#include <stddef.h>


int isVowel(char c)
{
	if ((c - 'A' < 26) && (c - 'A' >= 0))
		c = c + 32;

	if ((c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u'))
		return 1;
	else if ((c - 'a' < 26) && (c - 'a' >= 0))
		return 0;
	else return -1;
}

void count_vowels_and_consonants(char *str,int *consonants, int *vowels){
	if (str == NULL){
		*consonants = 0;
		*vowels = 0;
		return;
	}
	
	int consonantCount = 0, vowelCount = 0, index = 0;

	while (str[index] != '\0'){
		if (isVowel(str[index]) == 1)
			vowelCount++;
		else if (isVowel(str[index]) == 0)
			consonantCount++;
		index++;
	}
	*consonants = consonantCount;
	*vowels = vowelCount;
}
