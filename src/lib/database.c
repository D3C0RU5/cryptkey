#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "password_manager.h"
const char datafile_name[20] = "cryptDatafile";

void create_datafile_if_not_exists()
{
  FILE *fptr;
  fptr = fopen(datafile_name, "a");
  fclose(fptr);
}

PasswordEntry *read_data()
{
  create_datafile_if_not_exists();

  FILE *fptr;
  fptr = fopen(datafile_name, "r");

  char line[100];

  while (fgets(line, 100, fptr))
  {
    printf("%s", line);
  }

  fclose(fptr);
}

void create_entry_in_database(PasswordEntry *entry)
{
  FILE *fptr;
  fptr = fopen(datafile_name, "a");

  fprintf(fptr, "%s", entry->service);
  fprintf(fptr, "%s", "\n");
  fprintf(fptr, "%s", entry->username);
  fprintf(fptr, "\n");
  fprintf(fptr, "%s", entry->password);
  fprintf(fptr, "\n");

  fclose(fptr);
}