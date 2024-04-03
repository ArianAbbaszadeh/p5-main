typedef struct
{
	uint locked;
	struct spinlock lock;
} mutex;
