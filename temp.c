#include "pes.h"
#include <string.h>

int object_write(ObjectType type, const void *data, size_t len, ObjectID *id_out);

int main() {
    const char *data = "hello world";
    ObjectID id;

    object_write(OBJ_BLOB, data, strlen(data), &id);

    return 0;
}
