#ifndef MYSTRING_H
#define MYSTRING_H

//the same as strlen
int my_strlen(const char * str);

//return the count value of how many c in srt
//e.g. my_countchar("Hello",'l') return 2
//their 2 l in string Hello
int my_countchar(const char* str, char c);

//make all char in string become upper char, return the number char have been chahged
//e.g.
//my_strupper("asdD"); str-> ASDD, return 3;
void my_strupper(char* str);

//same as strchr
char * my_strchr(const char * str, char ch);

#endif
