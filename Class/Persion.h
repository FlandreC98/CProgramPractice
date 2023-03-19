typedef struct _Person Person;

typedef void (*fptrDisplayInfo)(Person *);
typedef void (*fptrWriteToFile)(Person *, const char *);
typedef void (*fptrDelete)(Person *);
typedef void (*fptrHello)();

typedef struct _Person
{
    char *pFirstName;
    char *pLastName;

    // interface for function
    fptrDisplayInfo Display;
    fptrWriteToFile WriteToFile;
    fptrDelete Delete;
    fptrHello Hello;
} Person;

Person *new_Person(const char *const pFirstName,
                   const char *const pLastName); // constructor

// void delete_Person(Person *const pPersonObj);                               // destructor
 void Person_DisplayInfo(Person *const pPersonObj);
// void Person_WriteToFile(Person *const pPersonObj, const char *const pFileName);

void Say_hello();
