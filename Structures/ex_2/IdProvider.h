#include "library.h"

struct IdProvider
{
private:
	uint64_t global_id = 0;
public:
	void incId()
	{
		global_id++;
	}
	uint64_t setIdFromGlobal()
	{
		return global_id;
	}
};