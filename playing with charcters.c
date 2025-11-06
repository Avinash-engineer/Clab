#include<stdio.h> 
int main() 
{ 
char ch; 
char str[50]; 
char sentence[100]; 
// Read a single character 
printf("Enter a character: "); 
scanf("%c", &ch); 
printf("Enter a string (one word): "); 
scanf("%s", str);  
printf("Enter a sentence: "); 
scanf(" %[^\n]", sentence);  
printf("\n--- Output ---\n"); 
printf("Character: %c\n", ch); 
printf("String: %s\n", str); 
printf("Sentence: %s\n", sentence); 
return 0; 
} 

