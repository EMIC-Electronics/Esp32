
static uint32_t time.{name}._ms = 0; 
static uint32_t setPoint.{name}._ms = 0; 
static char modo_timer.{name}.;


EMIC:ifdef usedFunction.setTime.{name}.
void setTime.{name}.(uint32_t setPoint_ms_local, char modo_timer_local)
{
	setPoint.{name}._ms = setPoint_ms_local;
	modo_timer.{name}. = modo_timer_local;
	time.{name}._ms =  timeStamp;
}

EMIC:endif

EMIC:ifdef usedEvent.etOut.{name}.
void timer.{name}._Poll(void)
{
	
		if ( setPoint.{name}._ms > 0 &&  timeStamp - time.{name}._ms > setPoint.{name}._ms)
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

