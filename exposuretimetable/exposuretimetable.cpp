#include <exposuretimetable.h>

/*************************************************
  exposure time table overflow handling */
 float expocalc(float expoincrement, float *ptStep, int *ptDiv)
 {
 float fExpoTime;
 *ptStep = *ptStep + expoincrement;
   if (*ptStep > 255)
       {
       *ptStep = *ptStep - 256;
       *ptDiv = *ptDiv / 2;
       if (*ptDiv < 1)
         {
         *ptDiv = 1;
         *ptStep = *ptStep - expoincrement + 256;
         }
       }
   if (*ptStep < 0)
       {
       *ptStep = *ptStep + 256;
       *ptDiv = *ptDiv * 2;
       if (*ptDiv > 1024)
         {
         *ptDiv = 1024;
         *ptStep = *ptStep - expoincrement - 256;
         }
       }
   fExpoTime = (float)expotab[(int)*ptStep] / (float)*ptDiv / 1000;
   return fExpoTime;
 }
 
 /*****************************************
 exposure table search / convert functions */
 int getexposurediv(float timevalue)
   {
   int divfactor = 1;
   timevalue = timevalue * 1000; // convert seconds to miliseconds
   while (timevalue < (float)15041 / (float)divfactor)
     {
     divfactor = divfactor * 2;
     }  
   return divfactor; 
   }

 /*****************************************
 exposure table search / convert functions */
 float getexposurestep(int timevalue)
   {
   int askstep = 0;  
   while (timevalue >= expotab[askstep])
     {
     ++askstep;  
     }
   return (float)(askstep-1);
   }
   
   
