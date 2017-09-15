/* $CORTO_GENERATED
 *
 * xml.c
 *
 * Only code written between the begin and end tags will be preserved
 * when the file is regenerated.
 */

#include <driver/ext/xml/xml.h>

/* $header() */
static int xml_loadFile(corto_string file, int argc, char* argv[], void* ctx) {
    return corto_deserXml(file);
}
/* $end */

int xmlMain(int argc, char *argv[]) {
/* $begin(main) */

    corto_load_register("xml", xml_loadFile, NULL);

    return 0;
/* $end */
}
