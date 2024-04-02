#include "mutex.h"
#include "x86.h"

void minit(mutex* m){
	m->locked = 0;
	m->tid = 0;
}
