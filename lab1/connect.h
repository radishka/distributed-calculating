#ifndef _CONNECT_H_
#define _CONNECT_H_

#include "comm.h"

Message create_message (MessageType type, char* content);

void wait_for_all_messages (process_t* process, MessageType status);

void wait_STARTED (process_t* process);

void wait_DONE (process_t* process);

void send_STARTED (process_t* process, char* buf);

void send_DONE (process_t* process, char* buf);

void child_work (process_t* process, char* buf);

void parent_work (process_t* process);

#endif  // _CONNECT_H_
