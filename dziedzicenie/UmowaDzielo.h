#pragma once
#include "Umowa.h"
class UmowaDzielo :
	public Umowa
{
public:
	UmowaDzielo(double pensja);
	virtual double pobierzNetto() override;
	UmowaDzielo();
	~UmowaDzielo();
};

