#include"escout.h"
Servo esc1, esc2, esc3, esc4;
void esc_init(int escpin1,int escpin2,int escpin3,int escpin4){
     esc1.attach(escpin1);
     esc2.attach(escpin2);
     esc3.attach(escpin3);
     esc4.attach(escpin4);
}
void esc_write(int esc_1,int esc_2,int esc_3,int esc_4){
    esc1.writeMicroseconds(esc_1);
    esc2.writeMicroseconds(esc_2);
    esc3.writeMicroseconds(esc_3);
    esc4.writeMicroseconds(esc_4);
}