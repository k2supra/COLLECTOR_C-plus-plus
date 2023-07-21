#pragma once
#include "../pc/pc.h"

struct PCProvider
{
	void printPC(PC const* pc) const;
	void printComment(PC const* pc) const;
	void printMenuPC(PC const* pc) const;
	void readPCData(vector<PC>& pcdata, const string& filename = "data/pcdata.csv") const;
	void updatePC(PC* pc, const string& filename = "data/pcdata.csv") const;
};


