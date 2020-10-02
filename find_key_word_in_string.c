//TELEGRAM : https://t.me/tempestas
#include <stdio.h>//standart input/output
#include <string.h>//strings

void delay(int a){//delay func. 1000 msec = 1 sec
int c,d;
for(c=0;c<a*10;c++){
for(d=0;d<a*10;d++){}
}
}

int main() {
  int key_found;
  int start_count=0;
  int key_start[50];
  int key_count=0;
  int i_count;
  char word[200]; //input sentence
  char key_word[20]; //search key
  printf("YOUR MAIN SENTENCE : ");
  scanf("%[^\n]%*c",&word);//get input sentence
  printf("\nSEARCH KEY : ");
  scanf("%[^\n]%*c",&key_word);//get search key
  for(int i=0;i<strlen(word);i++){
    if(word[i]==key_word[0]){ // search for first letter of sentence
      i_count=i;
      for(int j=0;j<strlen(key_word);j++,i_count++){
        if(word[i_count]==key_word[key_count]){
          key_count++; //matched letters
        }
        if(key_count==strlen(key_word)){
          //if all letters match
          key_start[start_count]=i;//-strlen(key_word);
          start_count++;
          key_count=0;
        }
      }
      key_count=0;
    }
  }
  //print results
  printf("RESULTS FOR %s \n************************\n",key_word);
  for(int y=0;y<start_count;y++){
    //write all founded keys
    printf("%d. key word(%d,%d)\n",y+1,key_start[y]+1,key_start[y]+strlen(key_word));
    delay(1000);

  }
  delay(2000);
  printf("-BAYBORA\n");
  delay(2000);
  return 0;
}
