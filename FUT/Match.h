#ifndef MATCH_H
#define MATCH_H
#include<dos.h>
#include<stdlib.h>
#include "Team.h"
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

class Match
{
    public:
        Match ();
        void Game(Team&,Team&,char * );
        int Getgame_week() { return game_week; }
        void Setgame_week(int val) { game_week = val; }
        int Getweather() { return weather; }
        void Setweather(int val) { weather = val; }
    protected:
        int game_week;
        int weather;
};

#endif // MATCH_H
