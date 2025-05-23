#include <stdio.h>
#include <ctype.h>
void replaceVowels(char *str){
    for(int i=0; str[i] != '\0'; ++i){
        char ch = tolower(str[i]);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            str[i] = '*';
        }
    }
}

int main(){
char str[1000];
  int vowels = 0, consonants = 0;
  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);
  for(int i = 0; str[i] != '\0'; ++i){
      if(str[i] == '\n'){
          str[i] = '\0';
          break;
      }
  }
 
  replaceVowels(str);
  printf("Modiefd string: %s\n", str);
  return 0;
}

