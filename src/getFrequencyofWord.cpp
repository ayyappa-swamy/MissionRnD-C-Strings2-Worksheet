/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/
#include <string.h>
#include <stdlib.h>

int count_word_in_str_way_1(char *str, char *word){
	if ((str == NULL) || (word == NULL))
		return -1;
 
	int wordLen = strlen(word), stringLen = strlen(str), index = 0, count = 0;

	while (index <= stringLen - wordLen){
		if (strncmp(&str[index], word, wordLen) == 0)
			count++;
		index++;
	}
	return count;
}

int count_word_int_str_way_2_recursion(char *str, char *word){
	if ((str == NULL) || (word == NULL) || !strlen(str))
		return 0;

	if (strncmp(str, word, strlen(word)) == 0)
		return 1 + count_word_int_str_way_2_recursion(&str[1], word);
	else return 0 + count_word_int_str_way_2_recursion(&str[1], word);
}

