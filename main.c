#include <stdio.h>

int main() {
    double player_hp = 100.00;
    double enemy_hp = 100.00;
    double atk = 10;
    char is_alive = 't';    // is alive
    double queue = atk;
    int choice;
    

    while (is_alive == 't') {
        
        choice = 0;

        printf("Player HP: %.2f\nEnemy HP: %.2f\n", player_hp, enemy_hp);
        
        printf("What would you like to do?:\n1 - Atk\n2 - Charge\n");
        scanf("%d", &choice);

        printf("%d", choice);

       while (choice != 1 && choice != 2) {
            choice = 0;
            printf("input error; only select 1 or 2.\n");
            printf("What would you like to do?:\n1 - Atk\n2 - Charge\n");
            scanf("%d", &choice);
        }

        switch (choice) {
            case 1:
                enemy_hp = enemy_hp - queue;
                queue = atk;
                break;
            case 2:
                queue = queue + (atk * 2);
                break;
            default:
                printf("You missed!\n");
                break;
        }

        if (enemy_hp <= 0) {
            printf("enemy has died!\n");
            is_alive = 'f';

        } else {
            player_hp = player_hp - 10;

        }

        if (player_hp <= 0) {
            printf("you have died!\n");
            is_alive = 'f';
        }
    }

    return 0;
}