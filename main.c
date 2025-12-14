#include <stdio.h>

typedef struct
{
    char name[20];
    char surname[20];
    int age;
}Person;

int main()
{
    Person person;
    FILE *fptr;
    fptr=fopen("C:\\Users\\Projects\\data\\data.txt","a");
    char control ='Y';
    while (control=='Y' || control=='y')
    {
        printf("Please enter your NAME, SURNAME, and AGE in that order:");
        scanf("%s %s %d",person.name,person.surname,&person.age);
        fprintf(fptr,"%s %s %d\n",person.name,person.surname,person.age);
        printf("Will you continue (Y/N):");
        scanf(" %c",&control);
    }
    fclose(fptr);
    return 0;
}