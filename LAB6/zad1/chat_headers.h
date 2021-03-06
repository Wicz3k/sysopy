#ifndef headers_h
#define headers_h
#define STOP 12
#define STOP_PRIOR 1
#define LIST 11
#define LIST_PRIOR 2
#define INIT 10
#define INIT_PRIOR 4
#define ECHO 9
#define ECHO_PRIOR 4
#define FRIENDS 7
#define FRIENDS_PRIOR 3
#define ADD 6
#define ADD_PRIOR 4
#define DEL 5
#define DEL_PRIOR 4
#define ALL2 4
#define ALL2_PRIOR 4
#define ONE2 3
#define ONE2_PRIOR 4
#define FRIENDS2 2
#define FRIENDS2_PRIOR 4
#define PRIORITY -4
#define SERVER_SEED 10


#define MESSAGE_SIZE 100

struct mesg_buffer {
    long priority;
    char mesg_text[100];
    int id;
    int type;
} mesg_buffer;

int mesg_size(){
  return (sizeof(mesg_buffer) - sizeof(long));
}

#endif
