//Count nr of words in a string
#include <stdio.h>
#include <string.h>

int main(){
    char string[10000];
    printf("Put on the text: \n");

    fgets(string, sizeof(string), stdin);
    int i=0, words=0;
    
    while(string[i]!='\0'){
        if(string[i]==' '&&string[i+1]!=' '){
            words++;
        }
        i++;
    }
    
    printf("\n\n-------------------------\n");
    printf("|This text has %d words|\n", words+1);
    printf("-------------------------\n\n\n\n");

    
    
    return 0;
}
