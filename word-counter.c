/*
Counts the letter uses in user input
Hayashida, Zac
10/3/17
*/

#include <stdio.h>
#define SIZE 26

int convert(char);
void count(int [], int);
void printArray(int []); 

int main(){
  int alphabet[SIZE]= {0};
  char letter = 'a';
  puts("Enter a sentence, word, or a bunch of random letters.");
  puts("To exit enter ctrl + D");
  letter = getchar();

  while(EOF != letter){
    count(alphabet, convert(letter));
    letter = getchar();
  }
  printArray(alphabet);
}

//converts char into a int by checking if it's a valid input
int convert(char letters){
  char alpha[SIZE] ={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
		      'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
  char Alpha[SIZE] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 
		      'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
 char letter = letters;
 int index = 27;
 int i = 0;
for(i = 0; i < SIZE; i++){
  if(letter == alpha[i]){
   index = letter - 'a';
  }
 }

for(i = 0; i < SIZE; i++){
  if(letter == Alpha[i]){
    index = letter - 'A';
   }
 }
return index;
}

// takes a int and set to the index and increment the value at the index of the entered array
void count(int a[], int index){
    a[index]++;
}

//prints out an array of letters as well as the inserted int array's elements  
void printArray(int a[]){
    char letter[SIZE] ={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
			'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    puts("Here are the amount of letters used:");
    int i = 0;
      for(i = 0;i<SIZE; i++){
      printf("%c = %i\n",letter[i], a[i]);
    } 
  }
