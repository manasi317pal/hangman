#include "man.h"
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int point=0;
    int l,i,j;

    char ch;
    char word;
    char letter[7]={'_','_','_','_','_','_','_'};
    char words4[10][4]={"army","bike","cage","chop","dust","draw","fair","fuel","goal","halt"};
    char words5[10][5]={"audit","adopt","bread","blind","child","china","dance","earth","fraud","guest"};
    char words6[10][6]={"agency","author","beauty","burden","credit","design","family","france","guilty","honest"};
    system("cls");
    do
    {
        start:
        system("cls");
        printf("\n\n\n\t\t\t\tHANGMAN GAME\n\n\n");
        printf("\n\n\t\tP:PLAY \n\t\tI:INSTRUCTIONS \n\t\tC:CREDITS\n\t\tQ:QUIT\n\t\t");
        ch=getch();
        if(ch=='q'||ch=='Q')
            return 0;
        switch(ch)
        {
        case 'p':
        case 'P':
            system("cls");
            printf("\n\n\n\n\n\n\n\n\n\n\n\t LOADING");
            Sleep(500);
            printf("...");
            Sleep(500);
            printf("...");
            Sleep(500);
            printf("...\n");
            system("cls");
            printf("\n\n\n\t\t\t\tHANGMAN GAME\n\n\n");
            printf("    O   \n");
            printf("   \\|/ \n");
            printf("    |   \n");
            printf("   / \\ \n");
            printf("   SAVE ME?? \n\n");
            printf(" 1: 4 LETTER GAME\n 2: 5 LETTER GAME\n 3: 6 LETTER GAME\n");
            scanf("%d",&l);
            switch(l)
            {
            case 1:
                system("cls");
                printf("\n\n\n\n\n\n\n\n\n\n\n\t LOADING");
                Sleep(500);
                printf("...");
                Sleep(500);
                printf("...");
                Sleep(500);
                printf("...");
                system("cls");
                for(i=0;i<11;i++)
                {
                    printf("\n LEVEL %d, Guess the letter", (i+1));
                    int a=0;
                    int enter=0;
                    for(j=0;j<4;j++)
                    {
                        int enter=0;
                        printf("\n %c %c %c %c",letter[0],letter[1],letter[2],letter[3]);
                        printf("\nEnter the letter\t");
                        scanf(" %c",&word);
                        if(word>=65 && word<=90)
                            word += 32;
                        if(letter[0]==word)
                        {
                            printf("\nNot Again.\n");
                            printf("Your score is %d:",point);
                            j--;
                            goto end;

                        }
                        if(letter[1]==word)
                        {
                            printf("\nNot Again.\n");
                            printf("Your score is %d:",point);
                            j--;
                            goto end;

                        }
                        if(letter[2]==word)
                        {
                            printf("\nNot Again.\n");
                            printf("Your score is %d:",point);
                            j--;
                            goto end;

                        }
                        if(letter[3]==word)
                        {
                            printf("\nNot Again.\n");
                            printf("Your score is %d:",point);
                            j--;
                            goto end;

                        }
                        if(words4[i][0]==word)
                        {
                            letter[0]=word;
                            enter++;
                        }
                        if(words4[i][1]==word)
                        {
                            letter[1]=word;
                            enter++;
                        }
                        if(words4[i][2]==word)
                        {
                            letter[2]=word;
                            enter++;
                        }
                        if(words4[i][3]==word)
                        {
                            letter[3]=word;
                            enter++;
                        }
                        if (enter==1)
                        {
                            point++;
                            printf("\nGood Going! NEXT");
                            printf("\n\t\tYour score: %d", point);
                            Sleep(1000);
                        }
                        else
                        {
                            printf("\n Try Again!!");
                            a++;
                            j--;
                            hangman4(a,point);
                        }

                        if(a==4)
                        {
                            system("cls");
                            printf("\n\n\n\n\n\TOTAL SCORE %d:", point);
                            Sleep(1000);
                            return 0;

                        }
                        end: ;

                    }
                    system("cls");
                    letter[0]='_';
                    letter[1]='_';
                    letter[2]='_';
                    letter[3]='_';
                    letter[4]='_';
                    if(i < 9)
                    {
                    printf("%d",i);
                    printf("\n\n\n\n\n\n\nJUMP TO NEXT LEVEL,");
                    Sleep(2000);
                    system("cls");

                    }
                    else{
                        printf("\n\n\n\nYOU SUCCESSFULLY COMPLETED ALL THE LEVELS\n");
                        printf("Your score is: %d",point);
                        Sleep(2000);
                        goto start;
                    }

                }
                break;

            case 2:
                system("cls");
                printf("\n\n\n\n\n\n\n\n\n\n\n\t LOADING");
                Sleep(500);
                printf("...");
                Sleep(500);
                printf("...");
                Sleep(500);
                printf("...");
                system("cls");
                for(i=0;i<11;i++)
                {
                    printf("\n LEVEL %d, Guess the letter", (i+1));
                    int a=0;
                    int enter=0;
                    for(j=0;j<5;j++)
                    {
                        int enter=0;
                        printf("\n %c %c %c %c %c",letter[0],letter[1],letter[2],letter[3],letter[4]);
                        printf("\nEnter the letter\t");
                        scanf(" %c",&word);
                        if(word>=65 && word<=90)
                            word += 32;
                        if(letter[0]==word)
                        {
                            printf("\nNot Again.\n");
                            printf("Your score is %d:",point);
                            j--;
                            goto end2;

                        }
                        if(letter[1]==word)
                        {
                            printf("\nNot Again.\n");
                            printf("Your score is %d:",point);
                            j--;
                            goto end2;

                        }
                        if(letter[2]==word)
                        {
                            printf("\nNot Again.\n");
                            printf("Your score is %d:",point);
                            j--;
                            goto end2;

                        }
                        if(letter[3]==word)
                        {
                            printf("\nNot Again.\n");
                            printf("Your score is %d:",point);
                            j--;
                            goto end2;

                        }
                        if(letter[4]==word)
                        {
                            printf("\nNot Again.\n");
                            printf("Your score is %d:",point);
                            j--;
                            goto end2;

                        }
                        if(words5[i][0]==word)
                        {
                            letter[0]=word;
                            enter++;
                        }
                        if(words5[i][1]==word)
                        {
                            letter[1]=word;
                            enter++;
                        }
                        if(words5[i][2]==word)
                        {
                            letter[2]=word;
                            enter++;
                        }
                        if(words5[i][3]==word)
                        {
                            letter[3]=word;
                            enter++;
                        }
                        if(words5[i][4]==word)
                        {
                            letter[4]=word;
                            enter++;
                        }
                        if (enter==1)
                        {
                            point++;
                            printf("\nGood Going! NEXT");
                            printf("\n\t\tYour score: %d", point);
                            Sleep(1000);
                        }
                        else
                        {
                            printf("\n Try Again!!");
                            a++;
                            j--;
                            hangman5(a,point);
                        }

                        if(a==5)
                        {
                            system("cls");
                            printf("\n\n\n\n\n\TOTAL SCORE %d:", point);
                            Sleep(1000);
                            return 0;

                        }
                        end2: ;

                    }
                    system("cls");
                    letter[0]='_';
                    letter[1]='_';
                    letter[2]='_';
                    letter[3]='_';
                    letter[4]='_';
                    letter[5]='_';
                    if(i < 9){
                    printf("\n\n\n\n\n\n\nJUMP TO NEXT LEVEL,");
                    Sleep(2000);
                    system("cls");

                    }
                    else{
                        printf("YOU SUCCESSFULLY COMPLETED ALL THE LEVELS\n");
                        printf("Your score is: %d",point);
                        Sleep(2000);
                        goto start;
                    }

                }
                break;
            case 3:
                system("cls");
                printf("\n\n\n\n\n\n\n\n\n\n\n\t LOADING");
                Sleep(500);
                printf("...");
                Sleep(500);
                printf("...");
                Sleep(500);
                printf("...");
                system("cls");
                for(i=0;i<11;i++)
                {
                    printf("\n LEVEL %d, Guess the letter", (i+1));
                    int a=0;
                    int enter=0;
                    for(j=0;j<6;j++)
                    {
                        int enter=0;
                        printf("\n %c %c %c %c %c %c",letter[0],letter[1],letter[2],letter[3],letter[4],letter[5]);
                        printf("\nEnter the letter\t");
                        scanf(" %c",&word);
                        if(word>=65 && word<=90)
                            word += 32;
                        if(letter[0]==word)
                        {
                            printf("\nNot Again.\n");
                            printf("Your score is %d:",point);
                            j--;
                            goto end3;

                        }
                        if(letter[1]==word)
                        {
                            printf("\nNot Again.\n");
                            printf("Your score is %d:",point);
                            j--;
                            goto end3;

                        }
                        if(letter[2]==word)
                        {
                            printf("\nNot Again.\n");
                            printf("Your score is %d:",point);
                            j--;
                            goto end3;

                        }
                        if(letter[3]==word)
                        {
                            printf("\nNot Again.\n");
                            printf("Your score is %d:",point);
                            j--;
                            goto end3;

                        }
                        if(letter[4]==word)
                        {
                            printf("\nNot Again.\n");
                            printf("Your score is %d:",point);
                            j--;
                            goto end3;

                        }
                        if(letter[5]==word)
                        {
                            printf("\nNot Again.\n");
                            printf("Your score is %d:",point);
                            j--;
                            goto end3;

                        }
                        if(words6[i][0]==word)
                        {
                            letter[0]=word;
                            enter++;
                        }
                        if(words6[i][1]==word)
                        {
                            letter[1]=word;
                            enter++;
                        }
                        if(words6[i][2]==word)
                        {
                            letter[2]=word;
                            enter++;
                        }
                        if(words6[i][3]==word)
                        {
                            letter[3]=word;
                            enter++;
                        }
                        if(words6[i][4]==word)
                        {
                            letter[4]=word;
                            enter++;
                        }
                        if(words6[i][5]==word)
                        {
                            letter[5]=word;
                            enter++;
                        }
                        if (enter==1)
                        {
                            point++;
                            printf("\nGood Going! NEXT");
                            printf("\n\t\tYour score: %d", point);
                            Sleep(1000);
                        }
                        else
                        {
                            printf("\n Try Again!!");
                            a++;
                            j--;
                            hangman6(a,point);
                        }

                        if(a==6)
                        {
                            system("cls");
                            printf("\n\n\n\n\n\TOTAL SCORE %d:", point);
                            Sleep(1000);
                            return 0;

                        }
                        end3: ;

                    }
                    system("cls");
                    letter[0]='_';
                    letter[1]='_';
                    letter[2]='_';
                    letter[3]='_';
                    letter[4]='_';
                    letter[5]='_';
                    letter[6]='-';

                    if(i < 9){
                    printf("\n\n\n\n\n\n\nJUMP TO NEXT LEVEL,");
                    Sleep(2000);
                    system("cls");

                    }
                    else{
                        printf("YOU SUCCESSFULLY COMPLETED ALL THE LEVELS\n");
                        printf("Your score is: %d",point);
                        Sleep(2000);
                        goto start;
                    }

                }
                break;
            default:
                printf("Invalid input");
                break;

            }
            break;
            case 'i':
            case 'I':
                system("cls");
                instructions();
                break;
            case 'c':
            case 'C':
                system("cls");
                credits();
                break;
        }
    }while(ch);
}
