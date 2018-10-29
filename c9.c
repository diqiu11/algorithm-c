#include <stdio.h>

int main()
{
    int score;
    scanf("the score is %d",&score);
    if(score>100||score<0){
        printf("error!");
        scanf("%d",&score);
    }
    char grade;
    switch((int)(score/10)){
    case 10:
    case 9:
        grade = 'A';break;
    case 8:
        grade = 'B';break;
    case 7:
        grade = 'C';break;
    case 6:
        grade = 'D';break;
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
        grade = 'D';
    }
    printf("your level is %c",grade);
    return 0;
}

