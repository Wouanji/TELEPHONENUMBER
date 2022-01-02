#include <stdio.h>
#include <stdlib.h>
int number[10];
int endnumber[10];
int main()
{
    printf("Enter your phone number\n");
    for( int i=0; i< 8; i++)
    {
        scanf("%d", &number[i]);
    }
    ending(number);
}

int startwith(int num[], int y)
{
    if (num[0]==y){
        return 1;
    }
    else {
        return 0;
    }
}

int secondnumber(int num[], int lowerlimit, int upperlimit){
    if (num[1] >= lowerlimit && num[1]<=upperlimit){
        return 1;
    }
    else {
        return 0;
    }

    }

int MTN( int num[]){
    if (startwith(num, 7)==1)
    {
        return 1;
    }
    else{
    if (startwith(num, 5) || startwith(num, 8)) {
        if(secondnumber(num, 0, 4)) {
            return 1;
        }
        else {
            return 0;
        }
    }
    else {
        return 0;
    }
    }
}


int ORANGE( int num[]){
    if (startwith(num, 9)==1)
    {
        return 1;
    }
    else{
    if (startwith(num, 5)) {
        if(secondnumber(num, 5, 9)) {
            return 1;
        }
        else {
            return 0;
        }
    }
    else {
        return 0;
    }
    }
}

int NEXTEL( int num[]){
    if (startwith(num, 6)==1)
    {
        return 1;
    }
    else{
    if (startwith(num, 8)) {
        if(secondnumber(num, 5, 9)) {
            return 1;
        }
        else {
            return 0;
        }
    }
    else {
        return 0;
    }
    }
}

int CAMTEL( int num[]){
    if (startwith(num, 2)==1)
    {
        return 1;
    }
    else{

            return 0;
        }
    }

void addsomething (int num[], int whatToAdd, int index, int size){
    size++;
    for (int i= size-1; i>index; i--){
        num[i]= num[i - 1];
    }
    num[index]= whatToAdd;
    for (int i = 0; i<size; i++){
        endnumber[i]=num[i];
    }
}

void ending(int num[]){
    if (MTN(num)==1){
        printf("Phone number is MTN!!! \n");
        addsomething(number, 6,0,8);
        for (int i=0; i<9; i++){
            printf("%d", endnumber[i]);
        }
    }
    else if (ORANGE(num)==1){
        printf("Phone number is ORANGE !!! \n");
        addsomething(number, 6, 0, 8);
        for (int i=0; i<9; i++){
            printf("%d", endnumber[i]);
        }
    }
    else if (NEXTEL(num)==1){
        printf("Phone number is Nextel !!! \n");
        addsomething(number, 6, 0, 8);
        for (int i=0; i<9; i++){
            printf("%d", endnumber[i]);
        }
    }
    else if (CAMTEL(num)==1){
        printf("Phone number is Camtel !!! \n");
        addsomething(number, 2, 0, 8);
        for (int i=0; i<9; i++){
            printf("%d", endnumber[i]);
        }
    }
    else{
        printf("Please come on and enter a correct phone number \n");
    }

}

