#include <Arduino.h>
#include "ui.h"
#include "vGlobal.h"
#include <SmartDrive.h>

SmartDrive smd = SmartDrive(SmartDrive_DefaultAddress);

volatile int buttonState = 0;
int period = 1000;
unsigned long time_now = 0;

bool STOP01 =  true;
int led_state = LOW;    // the current state of LED
int button_state;       // the current state of button
int last_button_state;  // the previous state of button

enum
{
    STOP,
    RUN_RIGHT,
    RUN_LEFT,
} motor_state_01, motor_state_02 ;

void run01right(lv_event_t * e)
{
    motor_state_01 = RUN_RIGHT ;
}

void run01left(lv_event_t * e)
{
    motor_state_01 = RUN_LEFT ;
}

void stop01motor(lv_event_t * e)
{
    // Your code here
    motor_state_01 = STOP ;
}

void setup(void)
{
    Serial.begin(115200);                // initialize serial
}

void loop()
{
    switch( motor_state_01 )
    {
        case RUN_RIGHT :
        {
            smd.Run_Unlimited( SmartDrive_Motor_ID_1,
                               SmartDrive_Dir_Reverse, 90);
        }
        break ;
        case STOP :
        {
            smd.StopMotor( SmartDrive_Motor_ID_1,
                           SmartDrive_Action_Brake );
        }
        break ;
        case RUN_LEFT :
        {
            smd.Run_Unlimited( SmartDrive_Motor_ID_1,
                         SmartDrive_Dir_Forward, 90);
       }
       break ;

    }

}
