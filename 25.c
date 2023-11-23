#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void deal (const int wDeck[][13],const char *wFace[],const char *wSuit[]){
    int row;
    int coluwn;
    int card;
    for(card=1;card<=52;card++){
        for(row=0;row<=3;row++){
            for(coluwn=0;coluwn<=12;coluwn++){
                if(wDeck[row][coluwn]==card){
                    printf("%5s of %-8s%c",wFace[coluwn],wSuit[row],card%2==0?'\n':'\t');

                }
            }
        }
        
    }
}


void shuffle(int wDeck[][13]){
    int row;
    int coluwn;
    int card;
    for(card=1;card<=52;card++){
        do{
            row = rand()%4;
            coluwn=rand()%13;
        }while (wDeck[row][coluwn]!=0);

        wDeck[row][coluwn]=card;
        
    }
}


int main(void){
    const char *suit[4] = {"Hearts","Diamonds","Cubes","Spades"};

    const char *face[13]={"Ace","Deuce","Three","Four","Five",
        "Six","Seven","Eight","Nine","Ten","Jack","Queen","King"};
    
    int deck[4][13]={0};

    srand(time(NULL));
    shuffle(deck);
    deal(deck,face,suit);
    system("pause");
    return 0;
}