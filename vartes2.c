/*we learnt to write strings baby..but using lists :(*/
#include<stdio.h>
#include<string.h>

main(){
    //string as array
    char kid1[12];
    char kid2[]="Maddie";
    char kid3[7]="Andrew";
    char hero1[] ="Batman";
    char hero2[34]="birdman";
    char hero3[20];
    //definig kid1 chr by chr

    kid1[0]='A';
    kid1[1]='b';
    kid1[2]='c';
    kid1[3]='d';
    kid1[4]='e';
    kid1[5]='\0';
    //better call strcpy
    strcpy(hero3,"The fudda Hulk");
    printf("%s\'s favourite hero is%s.\n",kid1,hero1);
    printf("%s\'s favourite hero is%s.\n",kid2,hero2);
    printf("%s\'s favourite hero is%s.\n",kid3,hero3);
    return 0;

}