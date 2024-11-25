/*
Kullanıcı skor girdiği sürece takımın attığı ve yediği gol sayıları kullanıcıdan alınacaktır.
Kullanıcı attığı ve yediği gol sayısını 0 ya da pozitif bir sayı olmalıdır.
Kullanıcı -1 girene kadar takımın attığı ve yediği gol sayısı kullanıcıdan alınacaktır.
Galibiyet 3 puan, beraberlik 1 puan yenilgi ise 0 puandır.  
*/
#include <stdio.h>
#include <windows.h>

int main(){

    int goalS, goalC;
    int score = 0, concede = 0;
    int check = 1;
    int win = 0, lose = 0, draw = 0;
    int checker = 1;
    int point = 0, totalMatch = 0;

    printf("To stop and calculate final stats for your team type \"-1\"\n");
    Sleep(750);
    
    while(1){
        checker = 0;
        goalC = 0;
        goalS = 0;

        while(1){
            printf("How many goals did your team score?\n");
            scanf("%d", &goalS);
            if(goalS == -1){
                goto END_LOOP;
            }
            if(goalS < 0){
                printf("Error: Please enter a number greater than zero.\n");
                continue;
            }else{
                break;
            }
        }

        while(1){
            printf("How many goals did your team concede?\n");
            scanf("%d", &goalC);
            checker = 1;
            if(goalC == -1){
                printf("You can't quit without entering goals conceded.\n");
                checker = 0;
                continue;
            }
            if(goalC < 0){
                printf("Error: Please enter a number greater than zero.\n");
                continue;
            }else{
                break;
            }
        }

        while(checker = 1){
        if(goalS > goalC){
            printf("Your team won this match %d - %d\n", goalS, goalC);
            win++;
            break;
        }else if(goalS < goalC){
            printf("Your team lost this match %d - %d\n", goalS, goalC);
            lose++;
            break;
        }else{
            printf("Match is draw %d - %d\n", goalC, goalS);
            draw++;
            break;
        }
    }

        score += goalS;
        concede += goalC;

    }


    END_LOOP:
    totalMatch = win + lose + draw;
    point = (win * 3) + (draw);
    printf("\nFinal Stats:\n");
    printf("Total match played: %d\n", totalMatch);
    if(win == 1){
        printf("Your team won %d match\n", win);
    }else if(win > 1){
        printf("Your team won %d matches\n", win);
    }
    if(lose == 1){
        printf("Your team lost %d match\n", lose);
    }else if(lose > 1){
        printf("Your team lost %d matches\n", lose);
    }
    if(draw == 1){
        printf("Your %d match was draw\n", draw);
    }else if(draw > 1){
        printf("Your %d matches were draw\n", draw);
    }
    printf("Total goals scored: %d\n", score);
    printf("Total goals conceded: %d\n", concede);
    printf("Total points: %d\n", point);

    return 0;
}