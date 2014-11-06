#include <jansson.h>
#include <stdio.h>

int main() {
    json_t *root;
    json_error_t error;
    root = json_load_file("../test.json", 0, &error);
    if(root == 0){
        printf("ERRO AO LER ARQUIVO, linha %d!\n", error.line);
        return error.line;
    }
    json_t * jfileName = json_object_get(root, "fileName");
    const char * fileName = json_string_value(jfileName);
    printf("O nome do arquivo é: %s\n", fileName);

    json_t * jFormat = json_object_get(root, "format");
    const char * format = json_string_value(jFormat);
    printf("O format é: %s\n", format);

    json_t *jSize = json_object_get(root, "size");
    const int size = json_integer_value(jSize);
    printf("Size: %d\n", size);

    json_t *jReadOnly = json_object_get(root, "readOnly");
    const unsigned int readOnly = json_is_true(jReadOnly);
    printf("readOnly: %d\n", readOnly);

    json_t *jRatio = json_object_get(root, "ratio");
    const double ratio = json_real_value(jRatio);
    printf("Ratio: %.2lf\n", ratio);

    json_t *jColor = json_object_get(root, "color");
    for(int i = 0; i < json_array_size(jColor); ++i){
        json_t * jItem = json_array_get(jColor, i);
        const int item = json_integer_value(jItem);
        printf("Item[%d]: %d\n", i, item);
    }

    json_t *jPoints = json_object_get(root, "points");
    for(int i = 0; i < json_array_size(jPoints); ++i){
        json_t * jPoint = json_array_get(jPoints, i);
        json_t *jX = json_object_get(jPoint, "x");
        const int x = json_integer_value(jX);
        json_t *jY = json_object_get(jPoint, "y");
        const int y = json_integer_value(jY);
        printf("x:%d, y:%d\n", x, y);
    }


    return 0;
}
