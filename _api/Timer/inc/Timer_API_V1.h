
EMIC:ifndef _TIMER_API_H_
#define _TIMER_API_H_



void init_timer_api();
#setFile temp/EMICinits.c
	init_timer_api ();
EMIC:restoreOutput

EMIC:ifdef usedFuncion.setTime1
void setTime1(uint32_t, char);
EMIC:endif


EMIC:ifdef usedFuncion.setTime2
void setTime2(uint32_t, char);
EMIC:endif

EMIC:ifdef usedFuncion.setTime3
void setTime3(uint32_t, char);
EMIC:endif

EMIC:ifdef usedFuncion.setTime4
void setTime4(uint32_t, char);
EMIC:endif

EMIC:ifdef usedFuncion.setTime5
void setTime5(uint32_t, char);
EMIC:endif

EMIC:ifdef usedFuncion.setTime6
void setTime6(uint32_t, char);
EMIC:endif

void TicPoll(void);

EMIC:define(polls.TicPoll,TicPoll)

/*==================[end of file]============================================*/
EMIC:endif
