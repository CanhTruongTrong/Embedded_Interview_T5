/*
    Cho một chuỗi kí tự. Hãy đảo ngược chuỗi đó.
    VD: array[] = "Mot hai ba bon nam, sau bay tam chin" => "chin tam bay sau nam, bon ba hai Mot"
*/
#include <stdio.h>
#include <string.h>

void daoTu(char arr[100]){
   char res[100][20];
   char *word = strtok(arr, " ");
   int index = 0;

   while(word != NULL){
      strcpy(res[index], word);
      index++;
      word = strtok(NULL, " ");
   }

   for(int i=index-1; i>=0; i--){
      printf("%s ", res[i]);
   }
}

int main(){
   char arr[100] = "Mot hai ba bon nam, sau bay tam chin";

   daoTu(arr);
}