#include <stdio.h>
#include <stdlib.h>
#include <cairo/cairo.h>

int width = 600, height = 400;

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

struct line {
    Point *points;
};

typedef struct line Line;
    
void draw_line(cairo_t *context, Line line) {
    cairo_save(context);
    cairo_set_line_width (context, 2.0);
    cairo_set_source_rgb (context, 0, 0, 0);
    cairo_move_to(context, line.points[0].x, height - line.points[0].x);
    int i = 1;
    for(; line.points[i].x > 0; i++) {
        cairo_line_to(context, line.points[i].x, height - line.points[i].y);    
    }
    cairo_stroke(context);
    cairo_restore(context);
}
    
void create_point(cairo_t *context, int x, int y, Color color) {
    cairo_save(context);
    cairo_set_source_rgba (context, color.r, color.g, color.b, color.a);
    cairo_set_line_width (context, 5.0);
    cairo_arc (context, x, height - y, 5.0, 0, 2*360);
    cairo_fill (context);
    cairo_restore(context);
}

int main () {
    printf("Hello cairo!\n");
    
    cairo_surface_t *surface = 
    cairo_image_surface_create(CAIRO_FORMAT_ARGB32, width, height);
    cairo_t *context = cairo_create(surface);
    
    cairo_set_line_width (context, 10.0);
    cairo_set_source_rgb (context, 1, 1, 1);
    cairo_rectangle(context, 0, 0, width, height);
    cairo_fill_preserve(context);
    cairo_set_source_rgb (context, 0, 0, 1);
    cairo_stroke(context);
     
    cairo_set_source_rgb (context, 1, 1, 1);
    cairo_rectangle(context, 100, 100, 50, 50);
    cairo_fill(context);
    
    Color c1 = {1, 0.5, 0.5, 1.0};
    create_point(context, 100, 100, c1);
    create_point(context, 150, 150, c1);
    create_point(context, 200, 200, c1);
    create_point(context, 250, 250, c1);
    create_point(context, 300, 300, c1);
    
    cairo_set_source_rgba (context, 1, 1, 0, 0.2);
    cairo_rectangle(context, 125, 125, 50, 50);
    cairo_fill(context);
    
    Point p1 = {100, 100};
    Point p2 = {150, 250};
    Point p3 = {200, 300};
    Point p4 = {250, 50};
    Point p5 = {300, 80};
    Point p6 = {-1, -1};
    
    Line l1;
    l1.points = malloc(6*sizeof(Point));
    l1.points[0] = p1;
    l1.points[1] = p2;
    l1.points[2] = p3;
    l1.points[3] = p4;
    l1.points[4] = p5;
    l1.points[5] = p6;
    
    draw_line(context, l1);
    
    cairo_surface_write_to_png(surface, "hello.png");
    cairo_destroy(context);
    cairo_surface_destroy(surface);
    return 0;
}