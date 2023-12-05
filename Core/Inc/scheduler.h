/*
 * scheduler.h
 *
 *  Created on: Dec 4, 2023
 *      Author: HaHuyen
 */

#ifndef INC_SCHEDULER_H_
#define INC_SCHEDULER_H_

#include <stdint.h>
#include "main.h"

typedef struct {
	// Pointer to the task (must be a void (void) function)
	void (*pTask)(void);
	uint32_t Delay; //set timer the first
	uint32_t Period;//set timer in while
	uint8_t RunMe; //flag
	uint32_t TaskID;
} sTasks;

// Define how many tasks at max we want to execute
#define SCH_MAX_TASKS	40

void SCH_Init(void);
unsigned char SCH_Add_Task(void (*pFunction)(), uint32_t DELAY, uint32_t PERIOD);
void SCH_Update(void);
void SCH_Dispatch_Tasks(void);
void SCH_Shift_Task(const uint32_t TASK_INDEX);
unsigned char SCH_Delete_Task(const uint32_t TASK_INDEX);

#endif /* INC_SCHEDULER_H_ */
