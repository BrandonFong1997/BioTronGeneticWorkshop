#include "globals.cpp"
#include "DefaultPlayer.h"
#include <stdlib.h>

DefaultPlayer::DefaultPlayer()
{}

int DefaultPlayer::makeMove(int* input, int length, int yourPlayerId) {
    if(length > CELLS)    return -1;

    int columnToPlayOn = -1;
    while(columnToPlayOn < 0 ||
          columnToPlayOn > COLUMNS ||
          input[columnToPlayOn] != 0) {
        columnToPlayOn = rand() % COLUMNS;
    }
    return columnToPlayOn;
}

DefaultPlayer* DefaultPlayer::mutate() {
    return new DefaultPlayer();
}
DefaultPlayer* DefaultPlayer::mate(AbstractPlayer*) {
    return new DefaultPlayer();
}
DefaultPlayer* DefaultPlayer::random() {
    return new DefaultPlayer();
}

DefaultPlayer* DefaultPlayer::fromFile(std::string) {
    return new DefaultPlayer();
}
void DefaultPlayer::toFile(std::string) {}

