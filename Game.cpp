#include "Game.hpp"
#include <stdlib.h>

using namespace std;

Game::Game() : theTowers{new Tower(), new Tower(), new Tower()}
{
    Disk* disk1 = new Disk(1);
    Disk* disk2 = new Disk(2);
    Disk* disk3 = new Disk(3);

    theTowers[0]->push(disk3);
    theTowers[0]->push(disk2);
    theTowers[0]->push(disk1);

}

void Game::display()
{
    for (int i = 0; i < 3; i++)
    {
        this->theTowers[i]->display();
    }

}