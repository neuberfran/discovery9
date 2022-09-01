// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.0.5
// LVGL VERSION: 8.2
// PROJECT: SquareLine_Project7


#include <Arduino.h>
#include "ui.h"
#include "vGlobal.h"
#include <SmartDrive.h>

SmartDrive smd = SmartDrive(SmartDrive_DefaultAddress);

volatile int buttonState = 0;

bool STOP01 =  true;


void run01right(lv_event_t * e, lv_obj_t * obj)
{
    while(STOP01) {
        smd.Run_Unlimited(SmartDrive_Motor_ID_1, SmartDrive_Dir_Reverse, 90);
      //  lv_event_code_t eb = lv_event_get_code(e);
        lv_event_code_t code = lv_event_get_code(e);
     //  lv_obj_t * obj = lv_event_get_target(obj);

  //      lv_obj_t * obj = lv_event_get_target(obj);

        if(code == LV_EVENT_CLICKED) {
              if (obj == ui_stop) {
                  smd.StopMotor(SmartDrive_Motor_ID_1, SmartDrive_Action_Brake);
              }
        }
    }
}

void stop01motor(lv_event_t * e, lv_obj_t * obj)
{
	// Your code here
    STOP01 = false;
    smd.StopMotor(SmartDrive_Motor_ID_1, SmartDrive_Action_Brake);
    STOP01 = false;
}
