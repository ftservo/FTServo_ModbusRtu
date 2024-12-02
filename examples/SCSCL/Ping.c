#include "main.h"
#include <../../SCSLib/SCServo.h>
#include <stdio.h>

void setup(void)
{
	setEnd(1);//SCSCL���Ϊ��˴洢�ṹ
}

void examples(void)
{
  int ID = Ping(1);
  if(!getLastError()){
    printf("Servo ID:%d\n", ID);
    HAL_Delay(100);
  }else{
    printf("Ping servo ID error!\n");
    HAL_Delay(2000);
  }
}
