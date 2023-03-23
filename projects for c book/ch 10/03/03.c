#include <stdbool.h> /* C99 only */
#include <stdio.h>
#include <stdlib.h>


#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

/* external variables */
bool straight, flush, four, three;
int pairs; /* can be 0, 1, or 2 */
int rank = 0, suit = 0;
bool card_exists[NUM_RANKS][NUM_SUITS];

void read_cards(int hand[NUM_CARDS][2]);
void analyze_hand(int hand[NUM_CARDS][2]);
void print_result(void);
bool check_for_duplicate_card(int rank, int suit, int hand[5][2], int cards_read);

int main(void)
{ 
    // array in format 
    // Ac
    // 6h
    // 2s
    // 2h ect...
    int hand[NUM_CARDS][2] = {0};
    for (;;)
    {
        read_cards(hand);
        analyze_hand(hand);
        for(int i = 0; i < NUM_CARDS; ++i)
        {
            printf("%d\n", hand[i][0]);
        }
        print_result();
    }
}

// 
void read_cards(int hand[NUM_CARDS][2])
{ 
    char ch, rank_ch, suit_ch;
    bool bad_card;
    int cards_read = 0;
    for (rank = 0; rank < 5; rank++) 
    {
        for (suit = 0; suit < 2; suit++)
        {
            hand[rank][suit] = 0;
        }
    }

    for(int i = 0; i < NUM_RANKS; ++i)
    {
        for(int j = 0; j < NUM_SUITS; ++j)
        {
            card_exists[i][j] = 0;
        }
    }

    
        

    while (cards_read < NUM_CARDS) 
        {   
            bad_card = false;
            printf("Enter a card: ");
            rank_ch = getchar();
            switch (rank_ch) 
            {
                case '0' : exit(EXIT_SUCCESS);
                case '2' : rank = 0; break;
                case '3' : rank = 1; break;
                case '4' : rank = 2; break;
                case '5' : rank = 3; break;
                case '6' : rank = 4; break;
                case '7' : rank = 5; break;
                case '8' : rank = 6; break;
                case '9' : rank = 7; break;
                case 't': case 'T' : rank = 8; break;
                case 'j': case 'J' : rank = 9; break;
                case 'q': case 'Q' : rank = 10 ; break;
                case 'k': case 'K' : rank = 11 ; break;
                case 'a': case 'A' : rank = 12 ; break;
                default:            bad_card = true;
            }
            suit_ch = getchar();
            switch(suit_ch)
            {
                case 'c': case 'C' : suit = 0; break;
                case 'd': case 'D' : suit = 1; break;
                case 'h': case 'H' : suit = 2; break;
                case 's': case 'S' : suit = 3; break;
                default: bad_card = true;
            }
            while ((ch = getchar()) != '\n')
                if (ch != ' ') bad_card = true;

            if (bad_card)
                printf("Bad card; ignored. \n" ) ;
            else if (check_for_duplicate_card(rank, suit, hand, cards_read))
                printf("Duplicate card; ignored.\n");
            else {
                hand[cards_read][0] = rank;
                hand[cards_read][1] = suit;
                card_exists[rank][suit] = true;
                cards_read++;
                
            }
        }
}

bool check_for_duplicate_card(int rank, int suit, int hand[5][2], int cards_read)
{
    int i;
    for (i = 0; i < cards_read; i++)
        if (hand[i][0] == rank && hand[i][1] == suit) 
            return true;

    return false;
}

void analyze_hand(int hand[NUM_CARDS][2])
{
    int num_consec = 0;
    int rank, suit;
    int suit1 = 0, suit2 = 0, suit3 = 0, suit4 = 0;
    straight = false;
    flush = false;
    four = false;
    three = false;
    pairs = 0;

    /* Sort the cards by rank via selection sort*/
        int i, j, smallest, temp_suit, temp_rank;
        for (i = 0; i < NUM_CARDS; i++) {
        smallest = i;

        for (j = i+1; j < NUM_CARDS; j++) {
            if (hand[j][0] < hand[smallest][0])
                smallest = j;
        }

        temp_rank = hand[i][0];
        temp_suit = hand[i][1];
        hand[i][0] = hand[smallest][0];
        hand[i][1] = hand[smallest][1];
        hand[smallest][0] = temp_rank;
        hand[smallest][1] = temp_suit;
        }


   
    
    /* check for flush */
    for (int numcards = 0; numcards < NUM_CARDS; ++numcards)
    {
        switch (hand[numcards][1])
        {
            case 0: ++suit1;
                    break;

            case 1: ++suit2;
                    break;

            case 2: ++suit3;
                    break;

            case 3: ++suit4;
                    break;
        
            
            default:    break;
        }
        
        if(suit1 == NUM_CARDS)
        {
            flush = true;
        }
        else if(suit2 == NUM_CARDS)
        {
            flush = true;
        }
        else if(suit3 == NUM_CARDS)
        {
            flush = true;
        }
        else if(suit4 == NUM_CARDS)
        {
            flush = true;
        }

    }        

    /* check for straight */
    rank = 0;
    int temp = 0;
    for(int i = NUM_CARDS; i > 0; --i)
    {
        if((hand[i][0] - hand[i - 1][0]) == 1)
        {
            ++temp;
        }

        if(temp >= 4)
        {
            straight = true;
        }
    }
    
    if (num_consec == NUM_CARDS) {
        straight = true;
        return;
    }   
    /* check for 4-of-a-kind, 3-of-a-kind, and pairs */
    int rank_array[NUM_RANKS];
    for(int i = 0; i < NUM_RANKS; ++i)
    {
        rank_array[i] = 0;
    }
    for(int i = 0; i < NUM_CARDS; ++i)
    {
    
        switch(hand[i][0])
        {
            case 0 : rank_array[0]++; break;
            case 1 : rank_array[1]++; break;
            case 2 : rank_array[2]++; break;
            case 3 : rank_array[3]++; break;
            case 4 : rank_array[4]++; break;
            case 5 : rank_array[5]++; break;
            case 6 : rank_array[6]++; break;
            case 7 : rank_array[7]++; break;
            case 8 : rank_array[8]++; break;
            case 9 : rank_array[9]++; break;
            case 10 : rank_array[10]++; break;
            case 11 : rank_array[11]++; break;
            case 12 : rank_array[12]++; break;
        }
    }
    for(int i = 0; i < NUM_CARDS; ++i)
    {
        if(rank_array[i] == 4) four = true;
        if(rank_array[i] == 3) three = true;
        if(rank_array[i] == 2) pairs++;
    }
}

void print_result(void)
{

    if(straight && flush)   printf("Straight flush");
    else if(four)           printf("Four of a kind");
    else if(three &&
            pairs == 1)     printf("Full house");
    else if(flush)          printf("Flush");
    else if(straight)       printf("Straight");
    else if(three)          printf("Three of a kind");
    else if(pairs == 2)     printf("Two pairs");
    else if(pairs == 1)     printf("Pair");
    else                    printf("High card");

    printf("\n\n");
}
