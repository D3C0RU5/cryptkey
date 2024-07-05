#include "../helpers/header.h"
#include "../helpers/hidden_scan.h"
#include "../lib/password_manager.h"
#include <stdio.h>
#include <stdlib.h>

void main_view()
{
  int choice;
  do
  {
    show_header();
    printf("\nPassword Manager\n");
    printf("1. Add Password\n");
    printf("2. List Passwords\n");
    printf("3. Find Password\n");
    printf("4. Delete Password\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      add_password();
      break;
    case 2:
      list_passwords();
      break;
    case 3:
      find_password();
      break;
    case 4:
      delete_password();
      break;
    default:
      printf("Invalid choice. Please try again.\n");
    }
    system("clear");
  } while (choice != 5);
}
