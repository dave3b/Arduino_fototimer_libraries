#include <exposurevary.h>
const float varyfactor = 1.059463094; // 1/12 aperture

float exposurevary(float exposureold,int vary)
{
float result = 0;
	if (vary > 0)
		{
		result = exposureold * float(vary) * varyfactor;	
		}

	else if (vary < 0)
		{
		result = exposureold / (float(-vary) * varyfactor);	
		}

	else
		{
		result = exposureold;
		}
return result;		
}
