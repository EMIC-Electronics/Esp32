
#ifndef _TIMER.{name}._API_H_
#define _TIMER.{name}._API_H_



void init_timer.{name}._api();
EMIC:define(inits.init_timer.{name}._api,init_timer.{name}._api)

EMIC:ifdef(usedFunction.setTime.{name}.)
void setTime.{name}.(uint32_t, char);
EMIC:endif

EMIC:ifdef(usedEvent.etOut.{name}.)

void Poll_Timer.{name}.(void);
EMIC:define(polls.Poll_Timer.{name}.,Poll_Timer.{name}.)

EMIC:endif


/*==================[end of file]============================================*/
#endif
