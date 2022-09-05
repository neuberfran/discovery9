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
int period = 1000;
unsigned long time_now = 0;

bool STOP01 =  true;
int led_state = LOW;    // the current state of LED
int button_state;       // the current state of button
int last_button_state;  // the previous state of button

void run01right(lv_event_t * e, lv_obj_t * obj)
{
    lv_event_code_t code = lv_event_get_code(e);
 //   lv_obj_t *obj = lv_event_get_target(e);
     while(obj != ui_stop && STOP01) {
//   time_now = millis();

 //      while(millis() < time_now + period && STOP01) {

        lv_event_code_t code = lv_event_get_code(e);
//        lv_obj_add_event_cb(ui_stop, ui_event_stop, LV_EVENT_ALL, NULL);
        smd.Run_Unlimited(SmartDrive_Motor_ID_1, SmartDrive_Dir_Reverse, 90);
//        delay(1000);
//        lv_obj_add_event_cb(obj, btn2_event_cb, LV_EVENT_ALL, NULL);           /*Assign a callback to the button*/
      //  lv_event_code_t eb = lv_event_get_code(e);
   //     lv_event_code_t code = lv_event_get_code(e);
     //  lv_obj_t * obj = lv_event_get_target(obj);

  //      lv_obj_t * obj = lv_event_get_target(obj);

//        if(code == LV_EVENT_CLICKED) {
//              if (obj == ui_stop) {
//                  smd.StopMotor(SmartDrive_Motor_ID_1, SmartDrive_Action_Brake);
//              }
//        }
    }
       STOP01 = false;

}

void stop01motor(lv_event_t * e, lv_obj_t * obj)
{
	// Your code here
    STOP01 = false;
    smd.StopMotor(SmartDrive_Motor_ID_1, SmartDrive_Action_Brake);
    STOP01 = false;
}
void setup(void)
{
    Serial.begin(115200);                // initialize serial
    pinMode(LED_BUILTIN, OUTPUT);
    pinMode(BUTTON_BUILTIN, INPUT);

    }
void loop(void)
{
//    digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN));
//    delay(1000);
    last_button_state = button_state;      // save the last state
    button_state = digitalRead(BUTTON_BUILTIN); // read new state

    if (last_button_state == HIGH && button_state == LOW) {
      Serial.println("The button is pressed");

      // toggle state of LED
      led_state = !led_state;

      // control LED arccoding to the toggled state
      digitalWrite(LED_BUILTIN, led_state);
      smd.StopMotor(SmartDrive_Motor_ID_1, SmartDrive_Action_Brake);

    }
}
