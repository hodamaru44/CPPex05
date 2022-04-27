#include "getVolumeSurface.h"

void getVolumeSurface(BOX* box)
{
	box->surface = 2 * (box->x * box->y + box->y * box->z +box->z * box->x);
	box->volume = box->x * box->y* box->z;
}
