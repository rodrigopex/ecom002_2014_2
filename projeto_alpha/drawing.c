#include "drawing.h"

void draw_line(cairo_t *context, Point * points) {
    cairo_save(context);
    cairo_set_line_width (context, 2.0);
    cairo_set_source_rgb (context, 0, 0, 0);
    cairo_move_to(context, points[0].x, points[0].x);
    int i = 1;
    for(; points[i].x > 0; i++) {
        cairo_line_to(context, points[i].x, points[i].y);
    }
    cairo_stroke(context);
    cairo_restore(context);
}

void create_point(cairo_t *context, int x, int y, Color color) {
    cairo_save(context);
    cairo_set_source_rgba (context, color.r, color.g, color.b, color.a);
    cairo_set_line_width (context, 5.0);
    cairo_arc (context, x, y, 5.0, 0, 2*360);
    cairo_fill (context);
    cairo_restore(context);
}
