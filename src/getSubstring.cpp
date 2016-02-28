/*
OVERVIEW: Given a string, Return the substring of the main string from i index to j index
Indexes start from 0,ith letter and jth letter are included
E.g.: Input: "get_sub_string("abcdefgh",2,5) , Output: "cdef"

INPUTS: A string.

OUTPUT: return substring from [i,j]

INPUT2: I will Code for Mission RnD , 2,10
OUTPUT2:will Code

NOTES: Check Null Strings ,Include stddef for NULL if needed.Create a New string and return it ,dont modfiy
original String
*/

#include <stddef.h>
#include <stdlib.h>

int strlen(char * string)
{
	int length = 0;
	while (string[length] != '\0')
		length++;
	return length;
}

char *strncpy(char*string, char * substring, int length)
{
	int index = 0;

	while (index < length){
		substring[index] = string[index];
		index++;
	}
	substring[index] = '\0';
	return substring;
}

char * get_sub_string(char *str, int i, int j){
	
	if ((str == NULL) || (j < i) || (i < 0 ) || (str[0] == '\0') || (j > strlen(str)-1))
		return NULL;
	
	char *subString = (char*)calloc(j - i + 2, sizeof(char));

	return strncpy(&str[i], subString, j - i + 2);
}
