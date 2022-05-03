#include <8051.h>
void main()
{
int i,rezim;
unsigned char array[9];
array[0] = 0x0;
array[1] = 0x1;
array[2] = 0x2;
array[3] = 0x4;
array[4] = 0x8;
array[5] = 0x10;
array[6] = 0x20;
array[7] = 0x40;
array[8] = 0x80;
func1: 
i=0;
rezim=0;
while(1)
 {   
      
     if(rezim == 0)
     {
         i=0;
         if(P30 == 1)
         {
         rezim++;
         goto func2;
         }
         P1 = array[1];
         while (P30==0 && i<500){i++;if(P30 == 1)
         {
         rezim++;
         goto func2;
         }}//zaderzka
         if(P30 == 1)
         {
         rezim++;
         goto func2;
         }

         i=0;
         if(P30 == 1)
         {
         rezim++;
         goto func2;
         }
         P1 = array[2];
         while (P30==0 && i<500){i++;if(P30 == 1)
         {
         rezim++;
         goto func2;
         }}//zaderzka
         if(P30 == 1)
         {
         rezim++;
         goto func2;
         }

         i=0;
         if(P30 == 1)
         {
         rezim++;
         goto func2;
         }
         P1 = array[3];
         while (P30==0 && i<500){i++;if(P30 == 1)
         {
         rezim++;
         goto func2;
         }}//zaderzka
         if(P30 == 1)
         {
         rezim++;
         goto func2;
         }

         i=0;
         if(P30 == 1)
         {
         rezim++;
         goto func2;
         }
         P1 = array[4];
         while (P30==0 && i<500){i++;if(P30 == 1)
         {
         rezim++;
         goto func2;
         }}//zaderzka
         if(P30 == 1)
         {
         rezim++;
         goto func2;
         }

         i=0;
         if(P30 == 1)
         {
         rezim++;
         goto func2;
         }
         P1 = array[5];
         while (P30==0 && i<500){i++;if(P30 == 1)
         {
         rezim++;
         goto func2;
         }}//zaderzka
         if(P30 == 1)
         {
         rezim++;
         goto func2;
         }

         i=0;
         if(P30 == 1)
         {
         rezim++;
         goto func2;
         }
         P1 = array[6];
         while (P30==0 && i<500){i++;if(P30 == 1)
         {
         rezim++;
         goto func2;
         }}//zaderzka
         if(P30 == 1)
         {
         rezim++;
         goto func2;
         }

         i=0;
         if(P30 == 1)
         {
         rezim++;
         goto func2;
         }
         P1 = array[7];
         while (P30==0 && i<500){i++;if(P30 == 1)
         {
         rezim++;
         goto func2;
         }}//zaderzka
         if(P30 == 1)
         {
         rezim++;
         goto func2;
         }

         i=0;
         if(P30 == 1)
         {
         rezim++;
         goto func2;
         }
         P1 = array[8];
         while (P30==0 && i<500){i++;if(P30 == 1)
         {
         rezim++;
         goto func2;
         }}//zaderzka
         if(P30 == 1)
         {
         rezim++;
         goto func2;
         }
     }


func2:
     if(rezim == 1)
     {   
         i=0;
         if(P30 == 1)
         {
         rezim++;
         goto func3;
         }
         P1 = array[1]+array[2];
         while (P30==0 && i<500){i++;if(P30 == 1)
         {
         rezim++;
         goto func3;
         }}//zaderzka
         if(P30 == 1)
         {
         rezim++;
         goto func3;
         }

         i=0;
         if(P30 == 1)
         {
         rezim++;
         goto func3;
         }
         P1 = array[3]+array[4];
         while (P30==0 && i<500){i++;if(P30 == 1)
         {
         rezim++;
         goto func3;
         }}//zaderzka
         if(P30 == 1)
         {
         rezim++;
         goto func3;
         }

         i=0;
         if(P30 == 1)
         {
         rezim++;
         goto func3;
         }
         P1 = array[5]+array[6];
         while (P30==0 && i<500){i++;if(P30 == 1)
         {
         rezim++;
         goto func3;
         }}//zaderzka
         if(P30 == 1)
         {
         rezim++;
         goto func3;
         }

         i=0;
         if(P30 == 1)
         {
         rezim++;
         goto func3;
         }
         P1 = array[7]+array[8];
         while (P30==0 && i<500){i++;if(P30 == 1)
         {
         rezim++;
         goto func3;
         }}//zaderzka
         if(P30 == 1)
         {
         rezim++;
         goto func3;
         }
     }

func3:
     if(rezim == 2)
     {
         i=0;
         if(P30 == 1)
         {
         rezim++;
         goto func1;
         }
         P1 = array[1]+array[2]+array[3]+array[4]+array[5]+array[6]+array[7]+array[8];
         while (P30==0 && i<500){i++;if(P30 == 1)
         {
         rezim++;
         goto func1;
         }}//zaderzka
         if(P30 == 1)
         {
         rezim++;
         goto func1;
         }
     }
 }
}
