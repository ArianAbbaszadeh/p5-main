#include "spinlock.h"
#include "mutex.h"

void 
minit(mutex* m){
  m->lock.name = "u_sleeplock";
  m->lock.locked = 0;
  m->lock.cpu = 0;
	m->locked = 0;
	m->tid = 0;
}