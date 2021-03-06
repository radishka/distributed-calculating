#ifndef _LOGGING__H
#define _LOGGING__H

#include "ipc.h"

#define OUTPUR  STDOUT_FILENO
#define ERROR   STDERR_FILENO

static const char * const log_created_pipe_fmt =
    "Process %d CREATED pipe (read fd %d, write fd %d)\n";

static const char * const log_closed_fd_fmt =
    "Process %d CLOSED fd %d\n";

extern int fd_event;
extern int fd_pipes;

int start_log();

void close_log();

void log_error (int fd, const char *str);

char* log_output (int fd, const char *format, ...);

char* log_STARTED (local_id id, pid_t pid, pid_t parent);

char* log_DONE (local_id id);

void log_received_all_started (local_id id);

void log_received_all_done (local_id id);

void log_created_pipe (local_id id, int* fd);

void log_closed_fd (local_id id, int fd);

#endif  // _LOGGING__H
