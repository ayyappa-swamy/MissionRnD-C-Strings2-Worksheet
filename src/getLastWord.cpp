/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

int stringLength(char * string)
{
	int length = 0;
	while (string[length] != '\0')
		length++;
	return length;
}

char *stringCopyNchars(char*string, char * substring, int length)
{
	int index = 0;

	while (index < length){
		substring[index] = string[index];
		index++;
	}
	substring[index] = '\0';
	return substring;
}

char * get_last_word(char * str){
	int start, end = stringLength(str) - 1;
	
	if ((str == NULL) || !stringLength(str))
		return str;

	while ((str[end] == ' ') && (end > 0))
		end--;

	/*if (end == 0){
		char subStr[2];
		subStr[0] = str[0];
		subStr[1] = '\0';
		return subStr;
	}*/
	if (str[end] == ' ')
		return "";
	
	start = end;
	
	while ((str[start] != ' ') && (start > 0))
		start--;
	
	if (str[start] == ' ')
		start++;

	char *subString = (char*)calloc(end - start + 1, sizeof(char));

	return stringCopyNchars(&str[start], subString, end - start + 1);

}
