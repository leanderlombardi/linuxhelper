#include "print_file.h"
#include <stdio.h>

int print_to_file(FILE *file, char *filename, char *libraries[], int numLibraries) {
    fprintf(file, "#include <stdio.h>\n");
    for (int i = 0; i < numLibraries; i++) {
        fprintf(file, "#include <%s>\n", libraries[i]);
    }
	fprintf(file, "// Programming helper by Leander Lombardi.\n");
    fprintf(file, "// Install for free: https://github.com/leanderlombardi/linuxhelper\n");
	fprintf(file, "// Do not remove comments above.\n");
    fprintf(file, "\nint main(void) {\n");
    fprintf(file, "\t\n");
	fprintf(file, "\treturn 0;\n");
    fprintf(file, "}\n");

	return 0;
}

