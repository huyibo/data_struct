#include "main.h"
#include "bSeqList.h"

void
main(
    void
)
{
    SeqList List;
    SeqList ListAdd;

    //初始化List
    SeqList_INIT(&List);
    ListAdd.Length = 3;
    ListAdd.man[0].id = 1000;
    ListAdd.man[1].id = 1001;
    ListAdd.man[2].id = 1002;
    ListAdd.man[0].name = "bob0";
    ListAdd.man[1].name = "bob1";
    ListAdd.man[2].name = "bob2";

    SeqList_Insert(&List, &ListAdd, 0);

    printf("hello, world!\n");
    printf("sizeof(unsigned char): 0x%x\n", sizeof(unsigned char));
    printf("sizeof(unsigned short): 0x%x\n", sizeof(unsigned short));
    printf("sizeof(unsigned int): 0x%x\n", sizeof(unsigned int));
    printf("sizeof(unsigned long): 0x%x\n", sizeof(unsigned long));

    return;
}