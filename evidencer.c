#include <curses.h>
#include <stdio.h>
#include <stdlib.h>


int drawEvidence(char *no, char *s) {
	int y, x;
	getyx(stdscr, y, x);
	move(y-1, x+3); addstr(no);
	//attron(A_STANDOUT);
	move(y  , x+3); addstr(s);
	//attroff(A_STANDOUT);
	return 1;
}

int handleInput() {
	return 1;
}


int screenSetUp() {
	initscr();
	
	move(2, 2);
	drawEvidence("1)", "EMF Level 5");
	drawEvidence("2)", "Ghost Writing");
	drawEvidence("3)", "Fingerprints");
	drawEvidence("4)", "Spirit Box");
	drawEvidence("5)", "Freezing Temeratures");
	drawEvidence("6)", "Ghost Orb");
	
	
	noecho();
	refresh();
	return 1;
}


int main(void) {
	
	int ch;
	
	screenSetUp();
	
	while ((ch = getch()) != 'q') {
		handleInput(ch);
	}
	
	endwin();
}
