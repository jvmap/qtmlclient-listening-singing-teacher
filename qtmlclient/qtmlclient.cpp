// qtmlclient.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "qtmlclient.h"


// This is an example of an exported variable
QTMLCLIENT_API int nqtmlclient=0;

// This is an example of an exported function.
QTMLCLIENT_API int fnqtmlclient(void)
{
	return 42;
}

// This is the constructor of a class that has been exported.
// see qtmlclient.h for the class definition
Cqtmlclient::Cqtmlclient()
{
	return;
}
