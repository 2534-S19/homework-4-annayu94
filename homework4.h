/*
 * homework4.h
 *
 *  Created on:
 *      Author:
 */

#ifndef HOMEWORK4_H_
#define HOMEWORK4_H_

// This function initializes the board by turning off the Watchdog Timer.
void initBoard();
bool charFSM(char rChar);

// TODO: Define any constants that are local to homework.c using #define
typedef enum {S, S2, S25, S253, S2534} passcode_state_t;
passcode_state_t PS;

#endif /* HOMEWORK4_H_ */
