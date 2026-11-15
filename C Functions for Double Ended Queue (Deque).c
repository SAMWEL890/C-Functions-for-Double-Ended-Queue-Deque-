#include <stdio. h> #define MAX 100

int deque[ MAX] ;
int front = - 1, rear = - 1;

/* a. Front insertion */
void insert_front( int key) {
if ( ( front == 0 && rear == MAX - 1) | | ( front == rear + 1) ) {
printf( " Deque Overflow\n") ;
return;
}
if ( front == - 1) { front = 0;
rear = 0;
} else if ( front == 0) { front = MAX - 1;
} else {
front = front - 1;
}
deque[ front] = key;
}

/* b. Rear insertion */
void insert_rear( int key) {
if ( ( front == 0 && rear == MAX - 1) | | ( front == rear + 1) ) {
printf( " Deque Overflow\n") ;
return;
}
if ( front == - 1) { front = 0;
rear = 0;
} else if ( rear == MAX - 1) { rear = 0;
} else {
rear = rear + 1;
}
deque[ rear] = key;
}

/* c. Front deletion */
void delete_front( ) { if ( front == - 1) {
printf( " Deque Underflow\n") ;
return;
}
printf( " Deleted from front: %d\n", deque[ front] ) ;
if ( front == rear) { front = - 1;
rear = - 1;
} else if ( front == MAX - 1) { front = 0;
