void init_led (void);
EMIC:define(inits.init_led,init_led)


typedef enum
{
	LED_STATUS_OFF,
	LED_STATUS_ON,
	LED_STATUS_TOGGLE
} led_status_t;

EMIC:ifdef usedFuncion.led1
void led1(led_status_t);
EMIC:endif

EMIC:ifdef usedFuncion.blkLed1
void blkLed1(uint16_t, uint16_t, uint16_t);
EMIC:endif

EMIC:ifdef usedFuncion.led2
void led2(led_status_t);
EMIC:endif

EMIC:ifdef usedFuncion.blkLed2
void blkLed2(uint16_t, uint16_t, uint16_t);
EMIC:endif

EMIC:ifdef usedFuncion.LED3
void led3(led_status_t);
EMIC:endif

EMIC:ifdef usedFuncion.blkLed3
void blkLed3(uint16_t, uint16_t, uint16_t);
EMIC:endif

EMIC:ifdef usedFuncion.LED4
void led4(led_status_t);
EMIC:endif

EMIC:ifdef usedFuncion.blkLed4
void blkLed4(uint16_t, uint16_t, uint16_t);
EMIC:endif

EMIC:ifdef usedFuncion.pullLeds
void Poll_LEDs();

EMIC:define(polls.Poll_LEDs,Poll_LEDs)

EMIC:endif

