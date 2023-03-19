#include  <stdlib.h>
#include <stdio.h>
#include "../Class/Persion.h"




/// @brief 实现构造函数
/// @param pFirstName 
/// @param pLastName 
/// @return 
Person *new_Person(const char *const pFirstName, const char *const pLastName)
{
    Person *pObj = NULL;
    // allocating memory
    pObj = (Person *)malloc(sizeof(Person));
    if (pObj == NULL)
    {
        return NULL;
    }

    pObj->pFirstName = malloc(sizeof(char) * (strlen(pFirstName) + 1));
    if (pObj->pFirstName == NULL)
    {
        return NULL;
    }
    strcpy(pObj->pFirstName, pFirstName);

    pObj->pLastName = malloc(sizeof(char) * (strlen(pLastName) + 1));
    if (pObj->pLastName == NULL)
    {
        return NULL;
    }
    strcpy(pObj->pLastName, pLastName);

    pObj->Hello = Say_hello;
    printf("init  succesfully! \n");
    // Initializing interface for access to functions
    // pObj->Delete = delete_Person;
     pObj->Display = Person_DisplayInfo;
    // pObj->WriteToFile = Person_WriteToFile;



        return pObj;
}

void Person_DisplayInfo(Person *const pPersonObj)
{
        printf("call Person_DisplayInfo()\n");

        printf("pFirstName:%s pLastName:%s\n", pPersonObj->pFirstName, pPersonObj->pLastName);
}

void Say_hello()
{
        printf("this is function Say_hello!!!\n");
}
