
uint32_t	time1_ms = 0; 
uint32_t	time2_ms = 0; 
uint32_t	time3_ms = 0; 
uint32_t	time4_ms = 0; 
uint32_t	time5_ms = 0; 
uint32_t	time6_ms = 0; 

uint32_t	setPoint1_ms = 0; 
uint32_t	setPoint2_ms = 0; 
uint32_t	setPoint3_ms = 0; 
uint32_t	setPoint4_ms = 0; 
uint32_t	setPoint5_ms = 0; 
uint32_t	setPoint6_ms = 0; 

char modo_timer1;
char modo_timer2;
char modo_timer3;
char modo_timer4;
char modo_timer5;
char modo_timer6;


void init_timer_api(void)
{	

}

EMIC:ifdef usedFuncion.setTime1
void setTime1(uint32_t setPoint1_ms_local, char modo_timer1_local)
{
	setPoint1_ms = setPoint1_ms_local;
	modo_timer1 = modo_timer1_local;
	time1_ms =  timeStamp;
}

EMIC:endif

EMIC:ifdef usedFuncion.setTime2
void setTime2(uint32_t setPoint2_ms_local, char modo_timer2_local)
{
	setPoint2_ms = setPoint2_ms_local;
	modo_timer2 = modo_timer2_local;
	time2_ms =  timeStamp;
}
EMIC:endif

EMIC:ifdef usedFuncion.setTime3
void setTime3(uint32_t setPoint3_ms_local, char modo_timer3_local)
{
	setPoint3_ms = setPoint3_ms_local;
	modo_timer3 = modo_timer3_local;
	time3_ms =  timeStamp;
}

EMIC:endif

EMIC:ifdef usedFuncion.setTime4
void setTime4(uint32_t setPoint4_ms_local, char modo_timer4_local)
{
	setPoint4_ms = setPoint4_ms_local;
	modo_timer4 = modo_timer4_local;
	time4_ms =  timeStamp;
}

EMIC:endif

EMIC:ifdef usedFuncion.setTime5
void setTime5(uint32_t setPoint5_ms_local, char modo_timer5_local)
{
	setPoint5_ms = setPoint5_ms_local;
	modo_timer5 = modo_timer5_local;
	time5_ms =  timeStamp;
}
EMIC:endif

EMIC:ifdef usedFuncion.setTime6
void setTime6(uint32_t setPoint6_ms_local, char modo_timer6_local)
{
	setPoint6_ms = setPoint6_ms_local;
	modo_timer6 = modo_timer6_local;
	time6_ms =  timeStamp;
}
EMIC:endif


void TicPoll(void)
{
	EMIC:ifdef usedEvent.etOut1
		if ( setPoint1_ms > 0 &&  timeStamp > time1_ms + setPoint1_ms)
		{	
			if(modo_timer1 == 'T')
			{
				setPoint1_ms = 0;
			}
			else
			{
				time1_ms = timeStamp;
			}
			etOut1();
		}
	EMIC:endif
	EMIC:ifdef usedEvent.etOut2
		if ( setPoint2_ms > 0 &&  timeStamp > time2_ms + setPoint2_ms)
		{	
			if(modo_timer2 == 'T')
				setPoint2_ms = 0;
			else
				time2_ms = timeStamp;
			etOut2();
		}
	EMIC:endif
	EMIC:ifdef usedEvent.etOut3
		if ( setPoint3_ms > 0 &&  timeStamp > time3_ms + setPoint3_ms)
		{	
			if(modo_timer3 == 'T')
				setPoint3_ms = 0;
			else
				time3_ms = timeStamp;
			etOut3();
		}
	EMIC:endif
	EMIC:ifdef usedEvent.etOut4
		if ( setPoint4_ms > 0 &&  timeStamp > time4_ms + setPoint4_ms)
		{	
			if(modo_timer4 == 'T')
				setPoint4_ms = 0;
			else
				time4_ms = timeStamp;
			etOut4();
		}
	EMIC:endif
	EMIC:ifdef usedEvent.etOut5
		if ( setPoint5_ms > 0 &&  timeStamp > time5_ms + setPoint5_ms)
		{	
			if(modo_timer5 == 'T')
				setPoint5_ms = 0;
			else
				time5_ms = timeStamp;
			etOut5();
		}
	EMIC:endif	
	EMIC:ifdef usedEvent.etOut6
		if ( setPoint6_ms > 0 &&  timeStamp > time6_ms + setPoint6_ms)
		{				
			if(modo_timer6 == 'T')
				setPoint6_ms = 0;
			else
				time6_ms = timeStamp;
			etOut6();
		}
	EMIC:endif
}

