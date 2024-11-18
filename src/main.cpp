




#include "karel.h"


void KarelProgram() {
    Move();
    Move();
    Move();
    TurnLeft();
    TurnLeft();
    TurnLeft();
    Move();
    Move();
    Move();
    TurnLeft();
    PickBeeper();

    TurnLeft();
    TurnLeft();
    TurnLeft();
    Move();
    Move();
    Move();
    TurnLeft();
    Move();
    Move();
    Move();
    PickBeeper();

    Move();
    TurnLeft();
    TurnLeft();
    TurnLeft();
    Move();
    TurnLeft();

    Move();
    TurnLeft();
    TurnLeft();
    TurnLeft();
    Move();
    TurnLeft();

    Move();
    TurnLeft();
    TurnLeft();
    TurnLeft();
    Move();
    TurnLeft();

    Move();
    TurnLeft();
    TurnLeft();
    TurnLeft();
    Move();
    TurnLeft();
 
}


int main() {
    LoadWorld("worlds/collect_newspaper.w");
    KarelProgram();
    Finish();
    return 0;
}

