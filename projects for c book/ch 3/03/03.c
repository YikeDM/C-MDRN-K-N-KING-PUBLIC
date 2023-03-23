#include <stdio.h>

int main(void)
{
    
    int gs1, group_ident, pub_code, item_num, check_digit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs1, &group_ident, &pub_code, &item_num, &check_digit);

    if(gs1 > 2){
    printf("GS1 Prefix: %d\n", gs1);
    printf("Group Identifier: %d\n", group_ident);
    printf("Publisher Code: %d\n", pub_code);
    printf("Item Number: %d\n", item_num);
    printf("Check Digit: %d\n", check_digit);
    }else{
        check_digit = item_num;
        item_num = pub_code;
        pub_code = group_ident;
        group_ident = gs1;

        printf("Group Identifier: %d\n", group_ident);
        printf("Publisher Code: %d\n", pub_code);
        printf("Item Number: %d\n", item_num);
        printf("Check Digit: %d\n", check_digit);
    }

// extremely roundabout way to do things, as i am unsure of how to accept both a 13 character ISBN
// and a 10 character ISBN without using an if statement and having it format properly (as there would be an extra zero)
    return 0;

}