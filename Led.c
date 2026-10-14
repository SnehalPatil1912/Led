#include<reg51.h>
//sbit led=P1^1;
//void delay(void);   //declaration

//void main()
//{
	//led=0;  //intially off led
//	while(1)
	//{
//		led=1;   //on led
	//	delay();   //delay call 
    //led=0;    //off led
    //delay();		//delay call
	//}
//}
	//void delay(void)   //defination
	//{
		//int i,j;
		//for(i=0;i<500;i++)
		//{
			//for(j=0;j<500;i++)
			//{
		//}
	//}		
//}



//2 led's alternate on and off
//sbit led=P1^1;
//sbit led1=P1^2;
//void delay(void);   //declaration
//void main()
//{
	//led=0;
//	while(1)
//	{
	//	led=1;   //on 1st led
//		led1=0;   //off 2nd
	//	delay();  //delay is same for both   (call)
//		led=0;     //1st led is off
	//	led1=1;    //2nd led is on
	//	delay();   //delay is same for that  (call)
 // }		
//}
//void delay(void)   //defination of delay
//{
	//int i,j;
//	for(i=0;i<500;i++)
//	{
	//	for(j=0;j<500;j++)
		//{
		//}
	//}
//}



//3 led's are on off one by one
sbit led=P1^1;
sbit led1=P1^2;
sbit led2=P1^3;
void delay(void);

void main()
{
	led=0;
	while(1)
	{
		led=1;  //on 1st
		delay(); //delay call
		led1=1;  //on 2nd
		delay(); //delay call
		led2=1;  //on 3rd
		delay();  //delay call

		led2=0;   //off 2nd 1st
		delay();   //delay call
		led1=0;   //off 1st
		delay();   //delay call
		led=0;    //off last 1st led which on 1st
		delay();		//delay call
	}
}
void delay(void)   //defination of delay
{
	int i,j;
	for(i=0;i<200;i++)
	{
		for(j=0;j<200;j++)
		{
		}
	}

}