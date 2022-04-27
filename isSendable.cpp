#include "getVolumeSurface.h"
bool isSendable(BOX* box)
{
	if (box->volume >= 200)
	{
		box->deliverable = false;
	}
	else if (box->volume >= 180)
	{
		box->packSize = 200;
	}
	else if (box->volume >= 160)
	{
		box->packSize = 180;
	}
	else if (box->volume >= 140)
	{
		box->packSize = 160;
	}
	else if (box->volume >= 120)
	{
		box->packSize = 140;
	}
	else if (box->volume >= 100)
	{
		box->packSize = 120;
	}
	else if (box->volume >= 80)
	{
		box->packSize = 100;
	}
	else if (box->volume >= 60)
	{
		box->packSize = 80;
	}
	else
	{
		box->packSize = 60;
	}
	return box->deliverable;
}