#ifndef DRAWING_H
#define DRAWING_H

#include <cairo/cairo.h>
#include "utils.h"

void draw_line(cairo_t *context, Point * points);

void create_point(cairo_t *context, int x, int y, Color color);

#endif
