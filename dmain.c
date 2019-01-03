/* DUNGEON-- MAIN PROGRAM */

/*COPYRIGHT 1980, INFOCOM COMPUTERS AND COMMUNICATIONS, CAMBRIDGE MA. 02142*/
/* ALL RIGHTS RESERVED, COMMERCIAL USAGE STRICTLY PROHIBITED */
/* WRITTEN BY R. M. SUPNIK */

#define EXTERN
#define INIT

#include "funcs.h"
#include "vars.h"
#include "global.h"

char* save_name = "";

void main(argc, argv)
int argc;
char **argv;
{
    save_name = argc < 2 ? "dsave.dat" : argv[1];
/* 1) INITIALIZE DATA STRUCTURES */
/* 2) PLAY GAME */

    if (init_()) {
	game_();
    }
/* 						!IF INIT, PLAY GAME. */
    exit_();
/* 						!DONE */
} /* MAIN__ */
