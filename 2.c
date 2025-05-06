#include <stdio.h>

int indexOf(char text[], char word[]) {
 int textLen = 0;
 int wordLen = 0;
 while (text[textLen] != '\0') {
 textLen++;
 }
 while (word[wordLen] != '\0') {
  wordLen++;
 }
  
 for( int i = 0; i <= textLen - wordLen; i++ ){
  int match = 1; 
  for (int j = 0; j < wordLen; j++) {
   if (text[i + j] != word[j]) {
    match = 0; 
   }
  }
  if (match) {
  return i;
  }
 }
  
 return -1; 
}

int main() {
 char text[] = "the cat sat on the mat";
 char word[] = "cat";
 int foundIndex = indexOf(text, word);
  
 if (foundIndex != -1) {
  printf("Слово \"%s\" найдено на позиции %d\n", word, foundIndex);
 } 
 else {
  printf("Слово \"%s\" не найдено\n", word);
 }

 return 0;
}
