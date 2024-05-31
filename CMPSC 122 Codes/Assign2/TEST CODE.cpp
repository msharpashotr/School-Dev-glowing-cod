/*-------------------------------------------------------------------------*/
/* Assign2Testmystring.cpp                                                 */
/* cmpsc122                                                                */
/* driver program for assignment 2                                         */
/*-------------------------------------------------------------------------*/

#include "mystring.h"
#include <iostream>
#include <cstring>
using namespace std;

#define MAX_STRING_LENGTH 256

#define ASSURE(b) assure(b, __LINE__)

void assure(bool bSuccessful, int iLineNum)
{
   if (! bSuccessful)
      printf("Test at line %d failed.\n", iLineNum);
}

void testmystrlen(void)
{
   size_t uiResult;

   uiResult = mystrlen("Ruth");
   ASSURE(uiResult == 4);

   uiResult = mystrlen("Gehrig");
   ASSURE(uiResult == 6);

   uiResult = mystrlen("");
   ASSURE(uiResult == 0);
}

void testmystrcmp(void)
{
   int iResult;

   iResult = mystrcmp("Ruth", "Ruth");
   ASSURE(iResult == 0);

   iResult = mystrcmp("Gehrig", "Ruth");
   ASSURE(iResult < 0);

   iResult = mystrcmp("Ruth", "Gehrig");
   ASSURE(iResult > 0);

   iResult = mystrcmp("", "Ruth");
   ASSURE(iResult < 0);

   iResult = mystrcmp("Ruth", "");
   ASSURE(iResult > 0);

   iResult = mystrcmp("", "");
   ASSURE(iResult == 0);
}

void testmystrcpy(void)
{
   char pc[MAX_STRING_LENGTH];
   char *pcResult;

   pcResult = mystrcpy(pc, "Ruth");
   ASSURE(pcResult != NULL);
   ASSURE(pcResult == pc);
   ASSURE((pcResult != NULL) && (strcmp(pc, "Ruth") == 0));

   pcResult = mystrcpy(pc, "");
   ASSURE(pcResult != NULL);
   ASSURE(pcResult == pc);
   ASSURE((pcResult != NULL) && (strcmp(pc, "") == 0));
}


void testmystrcat(void)
{
   char pc[MAX_STRING_LENGTH];
   char *pcResult;

   strcpy(pc, "Ruth");
   pcResult = mystrcat(pc, "Gehrig");
   ASSURE(pcResult != NULL);
   ASSURE(pcResult == pc);
   ASSURE((pcResult != NULL) && (strcmp(pcResult, "RuthGehrig") == 0));

   strcpy(pc, "Ruth");
   pcResult = mystrcat(pc, "");
   ASSURE(pcResult != NULL);
   ASSURE(pcResult == pc);
   ASSURE((pcResult != NULL) && (strcmp(pcResult, "Ruth") == 0));

   strcpy(pc, "");
   pcResult = mystrcat(pc, "Ruth");
   ASSURE(pcResult != NULL);
   ASSURE(pcResult == pc);
   ASSURE((pcResult != NULL) && (strcmp(pcResult, "Ruth") == 0));

   strcpy(pc, "");
   pcResult = mystrcat(pc, "");
   ASSURE(pcResult != NULL);
   ASSURE(pcResult == pc);
   ASSURE((pcResult != NULL) && (strcmp(pcResult, "") == 0));
}


void testmystrrchr(void)
{
   char pc[] = "george";
   char *pcResult;

   pcResult = mystrrchr(pc, 'g');
   ASSURE(pcResult == pc + 4);

   pcResult = mystrrchr(pc, 'e');
   ASSURE(pcResult == pc + 5);

   pcResult = mystrrchr(pc, 'n');
   ASSURE(pcResult == NULL);

   pcResult = mystrrchr("", 'h');
   ASSURE(pcResult == NULL);
}


int main()
{
   testmystrlen();
   testmystrcmp();
   testmystrcpy();
   testmystrcat();
   testmystrrchr();

   printf("If no any error outputs, your program passes all the tests. The End.\n"); 
   return 0;
}

