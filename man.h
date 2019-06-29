#include <stdio.h>
#include <windows.h>
void instructions();
void hangman4();
void hangman5();
void hangman6();

void instructions()
{
   system("cls");
   printf("\n\n\n\t\tINSTRUCTIONS\n");
   printf("\t\t============\n");
   printf(" 1: HANGMAN IS THE GAME WHERE YOU NEED TO GUESS THE WORD.\n");
   printf(" 2: FOR MAXIMUM POINTS YOU NEED TO GUESS THE MAXIMUM WORDS.\n");
   printf(" 3: 1 CORRECT WORD = 1POINT\n");
   printf(" 4: EACH LEVEL HAS A DIFFERENT WORD.\n");
   printf(" 5: At a time, either you can play for 4 letter words, 5 letter words or 6 letter words\n");
   printf(" 6: FOR A WORD OF N SIZE YOU WOULD HAVE n CHOICES.\n");
   Sleep(6000);
   system("cls");
}
void hangman4(int a, int point)
{
    switch(a)
    {
    case 1:
            printf("\n\t\tWrong letters till now: %d\n\n",a);
            printf(" ________\n");
            printf(" |       \n");
            printf(" |       \n");
            printf(" |       \n");
            printf(" |       \n");
            printf(" |       \n");
            printf("_|_________\n");
            printf("\n\n\t\tYour score: %d", point);
            printf("\n\t\tChances left: %d\n", 4-a);
            Sleep(500);
            break;
    case 2:
            printf("\n\t\tWrong letters till now: %d\n\n",a);
            printf(" ________\n");
            printf(" |/  |   \n");
            printf(" |   O   \n");
            printf(" |   |   \n");
            printf(" |   |   \n");
            printf(" |       \n");
            printf("_|_________\n");
            printf("\n\n\t\tYour score: %d", point);
            printf("\n\t\tChances left: %d\n", 4-a);
            Sleep(500);
            break;

    case 3:
            printf("\n\t\tWrong letters till now: %d\n\n",a);
            printf(" ________\n");
            printf(" |/  |   \n");
            printf(" |   O   \n");
            printf(" |  \\|/ \n");
            printf(" |   |   \n");
            printf(" |       \n");
            printf("_|_________\n");
            printf("\n\n\t\tYour score: %d", point);
            printf("\n\t\tChances left: %d\n", 4-a);
            Sleep(500);
            break;

    case 4: printf("\n\t\tWrong letters till now: %d\n\n",a);
            printf(" ________\n");
            printf(" |/  |   \n");
            printf(" |   O   \n");
            printf(" |  \\|/ \n");
            printf(" |   |   \n");
            printf(" |  / \\ \n");
            printf("_|_________\n");
            printf("\n\n\t\tYour score: %d", point);
            printf("\n\t\tChances left: %d\n", 4-a);
            printf("\n\t\tYOU ARE DEAD! GAME OVER!");
            Sleep(500);
            return 0;
            break;
    }
}
void hangman5(int a, int point)
{
    switch(a)
    {
    case 1:
            printf("\n\t\tWrong letters till now: %d\n\n",a);
            printf(" ________\n");
            printf(" |       \n");
            printf(" |       \n");
            printf(" |       \n");
            printf(" |       \n");
            printf(" |       \n");
            printf("_|_________\n");
            printf("\n\n\t\tYour score: %d", point);
            printf("\n\t\tChances left: %d\n", 5-a);
            Sleep(500);
            break;

    case 2:
            printf("\n\t\tWrong letters till now: %d\n\n",a);
            printf(" ________\n");
            printf(" |/  |   \n");
            printf(" |   O   \n");
            printf(" |   |   \n");
            printf(" |   |   \n");
            printf(" |       \n");
            printf("_|_________\n");
            printf("\n\n\t\tYour score: %d", point);
            printf("\n\t\tChances left: %d\n", 5-a);
            Sleep(500);
            break;

    case 3:
            printf("\n\t\tWrong letters till now: %d\n\n",a);
            printf(" ________\n");
            printf(" |/  |   \n");
            printf(" |   O   \n");
            printf(" |  \\|/ \n");
            printf(" |   |   \n");
            printf(" |       \n");
            printf("_|_________\n");
            printf("\n\n\t\tYour score: %d", point);
            printf("\n\t\tChances left: %d\n", 5-a);
            Sleep(500);
            break;

    case 4:
            printf("\n\t\tWrong letters till now: %d\n\n",a);
            printf(" ________\n");
            printf(" |/  |   \n");
            printf(" |   O   \n");
            printf(" |  \\|/ \n");
            printf(" |   |   \n");
            printf(" |  /    \n");
            printf("_|_________\n");
            printf("\n\n\t\tYour score: %d", point);
            printf("\n\t\tChances left: %d\n", 5-a);
            Sleep(500);
            break;

    case 5:
            printf("\n\t\tWrong letters till now: %d\n\n",a);
            printf(" ________\n");
            printf(" |/  |   \n");
            printf(" |   O   \n");
            printf(" |  \\|/ \n");
            printf(" |   |   \n");
            printf(" |  / \\ \n");
            printf("_|_________\n");
            printf("\n\n\t\tYour score: %d", point);
            printf("\n\t\tChances left: %d\n", 5-a);
            printf("\n\t\tYOU ARE DEAD! GAME OVER!");

            Sleep(500);
            return 0;
            break;
    }
}

void hangman6(int a, int point)
{
    switch(a)
    {
    case 1:
            printf("\n\t\tWrong letters till now: %d\n\n",a);
            printf(" ________\n");
            printf(" |       \n");
            printf(" |       \n");
            printf(" |       \n");
            printf(" |       \n");
            printf(" |       \n");
            printf("_|_________\n");
            printf("\n\n\t\tYour score: %d", point);
            printf("\n\t\tChances left: %d\n", 6-a);
            Sleep(500);
            break;
    case 2:
            printf("\n\t\tWrong letters till now: %d\n\n",a);
            printf(" ________\n");
            printf(" |/  |   \n");
            printf(" |   O   \n");
            printf(" |       \n");
            printf(" |       \n");
            printf(" |       \n");
            printf("_|_________\n");
            printf("\n\n\t\tYour score: %d", point);
            printf("\n\t\tChances left: %d\n", 6-a);
            Sleep(500);
            break;

    case 3:
            printf("\n\t\tWrong letters till now: %d\n\n",a);
            printf(" ________\n");
            printf(" |/  |   \n");
            printf(" |   O   \n");
            printf(" |   |   \n");
            printf(" |   |   \n");
            printf(" |       \n");
            printf("_|_________\n");
            printf("\n\n\t\tYour score: %d", point);
            printf("\n\t\tChances left: %d\n", 6-a);
            Sleep(500);
            break;

    case 4:
            printf("\n\t\tWrong letters till now: %d\n\n",a);
            printf(" ________\n");
            printf(" |/  |   \n");
            printf(" |   O   \n");
            printf(" |  \\|/ \n");
            printf(" |   |   \n");
            printf(" |       \n");
            printf("_|_________\n");
            printf("\n\n\t\tYour score: %d", point);
            printf("\n\t\tChances left: %d\n", 6-a);
            Sleep(500);
            break;

    case 5:
            printf("\n\t\tWrong letters till now: %d\n\n",a);
            printf(" ________\n");
            printf(" |/  |   \n");
            printf(" |   O   \n");
            printf(" |  \\|/ \n");
            printf(" |   |   \n");
            printf(" |  /    \n");
            printf("_|_________\n");
            printf("\n\n\t\tYour score: %d", point);
            printf("\n\t\tChances left: %d\n", 6-a);
            Sleep(500);
            break;

    case 6:
            printf("\n\t\tWrong letters till now: %d\n\n",a);
            printf(" ________\n");
            printf(" |/  |   \n");
            printf(" |   O   \n");
            printf(" |  \\|/ \n");
            printf(" |   |   \n");
            printf(" |  / \\ \n");
            printf("_|_________\n");
            printf("\n\n\t\tYour score: %d", point);
            printf("\n\t\tChances left: %d\n", 6-a);
            printf("\n\t\tYOU ARE DEAD! GAME OVER!");
            Sleep(500);
            return 0;
            break;
    }
}
void credits()
{
    printf("\n\n\n\n\n\tThe game is created by Manasi Pal");
    Sleep(1000);
    system("cls");
}
