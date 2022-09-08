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

enum state_t {
    state_1 = 0, // STOPPED_STATE;
    state_2 = 1, // RUNNING_STATE;
};

void Timercallback(lv_timer_t * timer)
{
  /*Use the user_data*/
  uint32_t * user_data = timer->user_data;
  printf("my_timer called with user data: %d\n", *user_data);

  /*Do something with LVGL*/
  if (state == 1) {
      printf("my_timer called with user data parte 2: %d\n", *user_data);
      run01right(e);
  }
}

void run01right(lv_event_t * e)
{
    // Your code here
   smd.Run_Unlimited(SmartDrive_Motor_ID_1, SmartDrive_Dir_Reverse, 90);
   state = state_2;
}

void stop01motor(lv_event_t * e)
{
	// Your code here
    smd.StopMotor(SmartDrive_Motor_ID_1, SmartDrive_Action_Brake);
    state = state_1;
}

void setup(void)
{
    Serial.begin(115200);                // initialize serial
    pinMode(LED_BUILTIN, OUTPUT);
    pinMode(BUTTON_BUILTIN, INPUT);
}

void loop(void)
{
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
static uint32_t user_data = 10;
lv_timer_t * timer = lv_timer_create(Timercallback, 500,  &user_data);
