//
// Created by Ida Christensen on 10/11/2022. Hola!!
//
#include <stdio.h>

int main()
{
    printf("Welcome to my MadLibs game.\nIn this game you have to enter a words that in the end wil make a funny story\n");
    printf("Note: Only enter one word, no spaces.\nFor eks: Brad Pitt will not work, it will result in just Brad. \n");
    printf(" \n");

    char adjective1[20];
    char adjective2[20];
    char bird[20];
    char room[20];
    char verb1[20];
    char verb2[20];
    char relative_name[20];
    char noun1[20];
    char liquid[20];
    char verb3[20];
    char part_of_body[20];
    char noun2[20];
    char verb4[20];
    char noun3[20];

    printf("First, enter an adjective: ");
    scanf("%s", adjective1);

    printf("Enter another adjective: ");
    scanf("%s", adjective2);

    printf("Now, enter the name of a bird: ");
    scanf("%s", bird);

    printf("Enter a room in a house, eks. kitchen: ");
    scanf("%s", room);

    printf("Enter a verb (past tense): ");
    scanf("%s", verb1);

    printf("Enter another verb (present): ");
    scanf("%s", verb2);

    printf("Now, enter the name of a relatve's name: ");
    scanf("%s", relative_name);

    printf("Then, enter a noun: ");
    scanf("%s", noun1);

    printf("Name a liquid: ");
    scanf("%s", liquid);

    printf("Now, a verb ending in -ing: ");
    scanf("%s",verb3 );

    printf("Okey, now, a part of the body (plural): ");
    scanf("%s", part_of_body);

    printf("Another noun, but plural: ");
    scanf("%s", noun2);

    printf("And another verb with -ing ending: ");
    scanf("%s", verb4);

    printf("Last, a noun: ");
    scanf("%s", noun3);

    printf(" \n");
    printf("It was a %s, cold November day.\n", adjective1);
    printf("I woke up to the %s smell of %s roasting in the %s downstairs.\n", adjective2, bird, room);
    printf("I %s downstairs to see if I could help %s the dinner.\n", verb1, verb2);
    printf("My mum said, 'See if %s needs a fresh %s'.\n", relative_name, noun1);
    printf("So I carried a tray of glasses full of %s into the %s room.\n", verb3);
    printf("When I got there, I could not believe my %s!\n", part_of_body);
    printf("There were %s %s on the %s \n", noun2, verb4, noun3);
    printf("The end.\n");

    return 0;
}

