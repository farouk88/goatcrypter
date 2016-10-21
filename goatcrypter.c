#include <stdio.h>
#include <windows.h>
#include <string.h>
//Script made by Farouk Fekih
//Greets to: goats

void color(int t,int f)
{
        HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(H,f*16+t);
}
int main()
{
    unsigned char mot[0];
    unsigned char taille=strlen(mot);
    unsigned char phrase[taille];
    unsigned char clef[]="farouk";
    unsigned char taillecle=strlen(clef);
    int x=0;
    int i=0;
    int choix3;
    int choix;
    int choix2;
    char ch[10];
    do {
    color(14,0);
    printf("\n\t     /)  (\\");
    printf("\n\t )\.:::::::::./(");
    printf("\n\t \( o       o )/");
    printf("\n\t   '-./ / _.-'`-.");
    printf("\n\t    ( oo  ) / _  \\");
    printf("\n\t    |'--'/\/ ( \  \\");
    printf("\n\t     \''/  \| \ \  \\");
    printf("\n\t      ww   |  '  )  \\");
    printf("\n\t           |.' .'   |");
    printf("\n\t          .' .'==|==|");
    printf("\n\t         / .'\    [_]");
    printf("\n\t      .-(/\) |     /");
    printf("\n\t     /.-\"""'/|    |");
    printf("\n\t     ||    / |    |");
    printf("\n\t     //   |  |    |");
    printf("\n\t     ||   |__|___/");
    printf("\n\t     \\   [__[___]");
    printf("\n\t     // .-'.-'  (");
    printf("\n\t     ||(__(__.-._)");

    color (13,0);
    printf("\n\n\t <<");
    color (15,0);
    printf(" 1");
    color (13,0);
    printf(" >>");
    color (15,0);
    printf("  Open Crypter");

    color (13,0);
    printf("\n\n\t <<");
    color (15,0);
    printf(" 2");
    color (13,0);
    printf(" >>");
    color (15,0);
    printf("  Open Decrypter");

    color(15,0);
    printf("\n\n\ngoatcrypter");
    color(11,0);
    printf(" > ");
    color(15,0);
    scanf("%d",&choix);

    switch (choix)
    {
    case 1:
        system("cls");
        color(14,0);
        printf("\n            (\\");
        printf("\n         .--,\\\__");
        printf("\n          `-.    a`-.__");
        printf("\n            |         ')");
        printf("\n           / \ _.-'-,`;");
        printf("\n          /     |   { /");
        printf("\n..-\"``~\"-'      ;    )");
        printf("\n               ;'    `");
        printf("\n              ;'");
        printf("\n            ;'");
        printf("\n    ,    /;'|");
        printf("\n ,;';\   |\ |");
        printf("\n      \  || |");
        printf("\n       | )| )");
        printf("\n       | || |");
        printf("\n       | \| \\");
        printf("\n       `##`##");

        color(15,0);
        printf("\n\nInput the word you want to crypt: ");
        strcpy(phrase,mot);
        scanf("%s",&phrase);
        printf("\nBefore crypting: %s\n",phrase);
        for (i=0;i!=taille;i++)
        {
            if(x==taillecle)
            {
                x=0;
            }
            phrase[i]=phrase[i]+clef[x];
            if (phrase[i]>127)
            {
                phrase[taille]=phrase[i]-96;
            }
        }
        printf("After crypting: %s",phrase);

        getch();
    break;
    case 2:
        system("cls");
        color(14,0);
        printf("\n\t             ,--._,--.");
        printf("\n\t           ,'  ,'   ,-`.");
        printf("\n\t(`-.__    /  ,'   /");
        printf("\n\t `.   `--'        \__,--'-.");
        printf("\n\t   `--/       ,-.  ______/");
        printf("\n\t     (o-.     ,o- /");
        printf("\n\t      `. ;        \\");
        printf("\n\t       |:          \\");
        printf("\n\t      ,'`       ,   \\");
        printf("\n\t     (o o ,  --'     :");
        printf("\n\t      \--','.        ;");
        printf("\n\t       `;;  :       /");
        printf("\n\t        ;'  ;  ,' ,'");
        printf("\n\t        ,','  :  '");
        printf("\n\t        \ \   :");
        printf("\n\t         `");

        color(15,0);
        printf("\n\nInput the word you want to decrypt: ");
        strcpy(phrase,mot);
        scanf("%s",&phrase);
        printf("\nBefore decrypting: %s\n",phrase);
        for (i=0;i!=taille;i++)
        {
            if(x==taillecle)
            {
                x=0;
            }
            phrase[i]=phrase[i]-clef[x];
            if (phrase[i]>127)
            {
                phrase[taille]=phrase[i]-96;
            }
        }
        printf("After decrypting: %s",phrase);
        getch();
    break;
    default:
        color(12,0);
        printf("\nINVALID COMMAND!\n");
    break;
    }
    getchar();
    color (13,0);
    printf("\n\n\t <<");
    color (15,0);
    printf(" 99");
    color (13,0);
    printf(" >>");
    color (15,0);
    printf("  Go back to main menu");

    color(15,0);
    printf("\n\n\ngoatcrypter");
    color(11,0);
    printf(" > ");
    color(15,0);
    scanf("%d",&choix2);
    system("cls");
    }
    while (choix2 = 99 && choix2 != 98);

    getchar();
    return 0;
}
