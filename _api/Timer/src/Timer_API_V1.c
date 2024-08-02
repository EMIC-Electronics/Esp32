
uint32_t time1_ms = 0; 

uint32_t setPoint1_ms = 0; 

char modo_timer1;


void init_timer.{name}._api(void)
{	

}

EMIC:ifdef(usedFunction.setTime.{name}.)
void setTime.{name}.(uint32_t setPoint1_ms_local, char modo_timer1_local)
{
	setPoint.{name}._ms = setPoint.{name}._ms_local;
	modo_timer.{name}. = modo_timer.{name}._local;
	time.{name}._ms =  timeStamp;
}
EMIC:endif

EMIC:ifdef(usedEvent.etOut.{name}.)

void Poll_Timer.{name}.(void)
{

		if ( setPoint.{name}._ms > 0 &&  timeStamp > time.{name}._ms + setPoint.{name}._ms)
		{	
			if(modo_timer.{name}. == 'T')
			{
				setPoint.{name}._ms = 0;
			}
			else
			{
				time.{name}._ms = timeStamp;
			}
			etOut.{name}.();
		}
}

EMIC:endif
