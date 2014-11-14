#ifndef UTILS_H
#define UTILS_H

struct color {
    float r;
    float g;
    float b;
    float a;
};

typedef struct color Color;

struct point {
    int x;
    int y;
};

typedef struct point Point;

#endif

// struct line {
//     Point *points;
// };
//
// typedef struct line Line;
