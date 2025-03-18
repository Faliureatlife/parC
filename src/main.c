#include <stdlib.h>
#include <string.h>
#include <stdio.h>

// main parser function
int parse_func(char* file) {
}

// going to be used with FOSS DocGen in order to generate source code
int main(int argc, char* argv[]) {
  int i;
  char *line;
  char current_C;
  FILE *fd, *nf;

  for (i = 0; i < argc; i++) {
    // add flags vv
    if (!(strcmp(argv[i], "-h"))) {
      printf("Usage: docfile [Input file] [Output file]\n");
    }
  }

  fd = fopen(argv[0], "r");

  if (fd == NULL)
    {perror("Source file unable to be opened"); exit(EXIT_FAILURE);}

  nf = fopen(strcat(argv[1],".md"), "w+"); // NOLINT ; value not being saved so snprintf not needed
  if (nf == NULL)
    {perror("Destination file unable to be opened/created "); exit(EXIT_FAILURE);}

  line = (char*)calloc(65535, sizeof *line);
  while ((current_C = fgetc(fd)) != EOF) {
    i = 0;
    while (current_C != "\n") {
      if (i = 65535)
        {fprintf(stderr, "Line size of 65535 exceeded"); exit(EXIT_FAILURE);}
      line[i] = current_C;
      ++i;
    }
  }

  exit(EXIT_SUCCESS);
}
