#include <stdio.h>
#include <string.h>
#include <ctype.h>


void convert (char *string);

void lower (char *string);

void loop_through_string (char string[150], int *pnt_nr);


int main(){
    char nrWord[150]; //string that will store the number given by the user

    printf("Enter your number in words: ");
    fgets(nrWord, sizeof(nrWord), stdin); 


    convert(&nrWord[0]); //Convert all '-' to spaces


    lower(&nrWord[0]); //Convert to lower cases
    

    int number[5] = {0, 0, 0, 0, 0}; //Array to store every 3- digits of the number (hundreds, thousands, millions, billions, trillions)
    int *tmp = &number[0]; //pointer to make changes to the array every 3 digits found in the word

    loop_through_string (nrWord, tmp);

    //Add up all numbers together from the vector to get the whole number
    int nr = 0;
    for (int i = 0; i < 5; i++){
        nr += number[i];
    }

    //Output the number as integer
    printf("\n%d", nr);

    return 0;
}



void convert (char *string){
    for (int i = 0; i < 150; i++){
        if (*(string+i) == '-'){
            *(string+i) = ' ';
        }
    }
}

void lower (char *string){
    for (int i = 0; i < 150; i++){
        *(string+i) = tolower(*(string+i));
    }
}

void loop_through_string (char string[150], int *pnt_nr){

    char *token;
    token = strtok(string, " ");

    while (token != NULL) {

        if (strcmp(token, "one") == 0 || strcmp(token, "one\n") == 0) {
        (*pnt_nr) += 1;
    } else if (strcmp(token, "two") == 0 || strcmp(token, "two\n") == 0) {
        (*pnt_nr) += 2;
    } else if (strcmp(token, "three") == 0 || strcmp(token, "three\n") == 0) {
        (*pnt_nr) += 3;
    } else if (strcmp(token, "four") == 0 || strcmp(token, "four\n") == 0) {
        (*pnt_nr) += 4;
    } else if (strcmp(token, "five") == 0 || strcmp(token, "five\n") == 0) {
        (*pnt_nr) += 5;
    } else if (strcmp(token, "six") == 0 || strcmp(token, "six\n") == 0) {
        (*pnt_nr) += 6;
    } else if (strcmp(token, "seven") == 0 || strcmp(token, "seven\n") == 0) {
        (*pnt_nr) += 7;
    } else if (strcmp(token, "eight") == 0 || strcmp(token, "eight\n") == 0) {
        (*pnt_nr) += 8;
    } else if (strcmp(token, "nine") == 0 || strcmp(token, "nine\n") == 0) {
        (*pnt_nr) += 9;
    } else if (strcmp(token, "ten") == 0 || strcmp(token, "ten\n") == 0) {
        (*pnt_nr) += 10;
    } else if (strcmp(token, "eleven") == 0 || strcmp(token, "eleven\n") == 0) {
        (*pnt_nr) += 11;
    } else if (strcmp(token, "twelve") == 0 || strcmp(token, "twelve\n") == 0) {
        (*pnt_nr) += 12;
    } else if (strcmp(token, "thirteen") == 0 || strcmp(token, "thirteen\n") == 0) {
        (*pnt_nr) += 13;
    } else if (strcmp(token, "fourteen") == 0 || strcmp(token, "fourteen\n") == 0) {
        (*pnt_nr) += 14;
    } else if (strcmp(token, "fifteen") == 0 || strcmp(token, "fifteen\n") == 0) {
        (*pnt_nr) += 15;
    } else if (strcmp(token, "sixteen") == 0 || strcmp(token, "sixteen\n") == 0) {
        (*pnt_nr) += 16;
    } else if (strcmp(token, "seventeen") == 0 || strcmp(token, "seventeen\n") == 0) {
        (*pnt_nr) += 17;
    } else if (strcmp(token, "eighteen") == 0 || strcmp(token, "eighteen\n") == 0) {
        (*pnt_nr) += 18;
    } else if (strcmp(token, "nineteen") == 0 || strcmp(token, "nineteen\n") == 0) {
        (*pnt_nr) += 19;
    } else if (strcmp(token, "twenty") == 0 || strcmp(token, "twenty\n") == 0) {
        (*pnt_nr) += 20;
    } else if (strcmp(token, "thirty") == 0 || strcmp(token, "thirty\n") == 0) {
        (*pnt_nr) += 30;
    } else if (strcmp(token, "fourty") == 0 || strcmp(token, "fourty\n") == 0) {
        (*pnt_nr) += 40;
    } else if (strcmp(token, "fifty") == 0 || strcmp(token, "fifty\n") == 0) {
        (*pnt_nr) += 50;
    } else if (strcmp(token, "sixty") == 0 || strcmp(token, "sixty\n") == 0) {
        (*pnt_nr) += 60;
    } else if (strcmp(token, "seventy") == 0 || strcmp(token, "seventy\n") == 0) {
        (*pnt_nr) += 70;
    } else if (strcmp(token, "eighty") == 0 || strcmp(token, "eighty\n") == 0) {
        (*pnt_nr) += 80;
    } else if (strcmp(token, "ninety") == 0 || strcmp(token, "ninety\n") == 0) {
        (*pnt_nr) += 90;
    } else if (strcmp(token, "hundred") == 0 || strcmp(token, "hundred\n") == 0) {
        (*pnt_nr) *= 100;
    } else if (strcmp(token, "thousand") == 0 || strcmp(token, "thousand\n") == 0) {
        (*pnt_nr) *= 1000;
        pnt_nr ++;
    } else if (strcmp(token, "million") == 0 || strcmp(token, "million\n") == 0) {
        (*pnt_nr) *= 1000000;
        pnt_nr ++;
    } else if (strcmp(token, "billion") == 0 || strcmp(token, "billion\n") == 0) {
        (*pnt_nr) *= 1000000000;
        pnt_nr ++;
    } else if (strcmp(token, "trillion") == 0 || strcmp(token, "trillion\n") == 0) {
        (*pnt_nr) *= 1000000000000;
        pnt_nr ++;
    }


        token = strtok(NULL, " ");  // Continue splitting
    }
}
