#ifndef SAM_H
#define SAM_H

#include "quantum.h"

// This a shortcut to help you visually see your layout.
// The following is an example using the Planck MIT layout
// The first section contains all of the arguements
// The second converts the arguments into a two-dimensional array
#define KEYMAP( \
    k000, k001, k002, k003, k004, k005, k006, k007, k008, k009, k010, k011, k012,   k013,     \
    k100, k101, k102, k103, k104, k105, k106, k107, k108, k109, k110, k111, k112, k113, k114, \
    k200, k201, k202, k203, k204, k205, k206, k207, k208, k209, k210, k211, k212,       k213, \
    k300, k301, k302, k303, k304, k305, k306, k307, k308, k309, k310,     k311,   k312, k313, \
    k400,   k401,  k402,   k403,     k404,     k405,   k406,   k407,  k408, k409, k410, k411  \
) \
{ \
    { k000, k001, k002,  k003, k004, k005, k006,  k007, k008, k009,  k010, k011,  k012, KC_NO, k013 }, \
    { k100, k101, k102,  k103, k104, k105, k106,  k107, k108, k109,  k110, k111,  k112, k113,  k114 }, \
    { k200, k201, k202,  k203, k204, k205, k206,  k207, k208, k209,  k210, k211,  k212, KC_NO, k213 }, \
    { k300, k301, k302,  k303, k304, k305, k306,  k307, k308, k309,  k310, KC_NO, k311, k312,  k313 }, \
    { k400, k401, KC_NO, k402, k403, k404, KC_NO, k405, k406, KC_NO, k407, k408,  k409, k410,  k411 } \
}

#endif
