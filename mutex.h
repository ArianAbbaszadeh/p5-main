typedef struct
{
	uint locked;
	struct spinlock lock;
	int tid;
} mutex;
