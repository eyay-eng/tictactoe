
#ifndef ROCKPAPERSCISSORS_H
#define ROCKPAPERSCISSORS_H


void outputSelectOpt(void);

void getUserName(void);

int getUserSelect(void);

int generateVirtualSelect(void);

int findWinner(int* userChoice, int* comSelect);

#endif /*ROCKPAPERSCISSORS_H*/