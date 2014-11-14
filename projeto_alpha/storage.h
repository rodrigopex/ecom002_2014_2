#ifndef STORAGE_H
#define STORAGE_H

#include <jansson.h>
#include "utils.h"

int JSON_getInt(json_t *node, const char * varName);

const char * JSON_getString(json_t *node, const char * varName);

int JSON_getBool(json_t *node, const char * varName);

Color JSON_getColor(json_t *node);

Point * JSON_getPoints(json_t *root);

#endif
