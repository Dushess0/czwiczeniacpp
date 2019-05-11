#pragma once
#include "Umowa.h"
class UmowaPraca :
	public Umowa
{
public:
	
	UmowaPraca(double pensja);
	virtual double pobierzNetto()  override;
	~UmowaPraca();
};

