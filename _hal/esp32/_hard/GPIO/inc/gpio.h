
EMIC:ifndef PIC_GPIO_H_
#define PIC_GPIO_H_

#define	GPIO_OUTPUT OUTPUT
#define GPIO_INPUT INPUT


#define GPIO_LOW LOW
#define GPIO_HIGH HIGH
//#define GPIO_TOGGL



#define HAL_GPIO_PinCfg(name,cfg_value) pinMode(PIN_##name,cfg_value)
#define HAL_GPIO_PinSet(name,value) digitalWrite(PIN_##name, value)
#define HAL_GPIO_PinGet(name) digitalRead(PIN_##name)


EMIC:endif