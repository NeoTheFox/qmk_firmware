#ifndef NECROPAD_H
#define NECROPAD_H

#include "quantum.h"

#define LAYOUT( \
      k00, k01, k02, k03, \
      k10, k11, k12, k13, \
      k20, k21, k22,  \
      k30, k31, k32, k33, \
      k40, k41 \
) \
{ \
    { k00, k01, k02, k03, }, \
    { k10, k11, k12, k13, }, \
    { k20, k21, k22, KC_NO, }, \
    { k30, k31, k32, k33, }, \
    { k40, k41, KC_NO, KC_NO,} \
} 

oled_rotation_t oled_init_user(oled_rotation_t rotation);

#endif
