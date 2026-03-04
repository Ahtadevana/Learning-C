#include <stdio.h>
#include <stdbool.h>

typedef struct {
    int hp;
    int dmg;
} Hero;

typedef struct {
    int hp;
    int dmg;
} Enemy;

void login(Hero *heroPtr, Enemy *enemyPtr);
void heroAttack(Hero *heroPtr, Enemy *enemyPtr);
void enemyAttack(Hero *heroPtr, Enemy *enemyPtr);

int main() {
    Hero xervii;
    Enemy slime;
    bool isRunning = true;

    login(&xervii, &slime);
    return 0;
}

void login(Hero *heroPtr, Enemy *enemyPtr){
    heroPtr->hp = 100;
    heroPtr->dmg = 10;

    enemyPtr->hp = 20;
    enemyPtr->dmg = 5;
}

void heroAttack(Hero *heroPtr, Enemy *enemyPtr){
    enemyPtr->hp -= heroPtr->dmg;
}

void enemyAttack(Hero *heroPtr, Enemy *enemyPtr){
    heroPtr->hp -= enemyPtr->dmg;
}