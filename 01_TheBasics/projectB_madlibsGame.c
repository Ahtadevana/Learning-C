#include <stdio.h>
#include <string.h>

int main()  {
    char hobby[30] = "";
    char place[30] = "";
    char verb[30] = "";

    printf("---Welcome to the madlibs game!---\n");
    
    printf("Enter a hobby (-ing): ");
    fgets(hobby, sizeof(hobby), stdin);
    hobby[strcspn(hobby, "\n")] = '\0';

    printf("Enter a place: ");
    fgets(place, sizeof(place), stdin);
    place[strcspn(place, "\n")] = '\0';

    printf("Enter a verb (-ing): ");
    fgets(verb, sizeof(verb), stdin);
    verb[strcspn(verb, "\n")] = '\0';

    printf("I love %s! I'm currently at %s %s", hobby, place, verb);
    return 0;
}