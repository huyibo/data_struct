#include "bSeqList.h"

//1. 初始化
DS_STATUS
SeqList_INIT(
    SeqList *list
)
{
    UINT32 Index;

    for (Index = 0; Index < MAX_SIZE; Index++) {
        list->man[Index].id = 0;
        list->man[Index].name = "\0";
    }
    list->Length = Index + 1;

    return DS_SUCCESS;
}

//2. 插入元素
DS_STATUS
SeqList_Insert(
    SeqList *list,
    SeqList *listadd,     //元素内容
    UINT32   InsIndex     //插入位置
)
{
    UINT32  Index;
    UINT32  Index2;
    SeqList List_backup;

    //备份内容
    List_backup.Length = list->Length;
    for (Index = 0; Index < list->Length; Index++) {
        List_backup.man[Index].id = list->man[Index].id;
        List_backup.man[Index].name = list->man[Index].name;
    }
    
    //插入元素
    list->Length = InsIndex;
    for (Index = InsIndex; Index < MAX_SIZE - 1; Index++) {
        list->Length++;
        if (list->Length >= MAX_SIZE) {
            list->Length--;
            break;
        }
        if ((Index - InsIndex) >= listadd->Length) {
            break;
        }
        list->man[Index].id = listadd->man[Index - InsIndex].id;
        list->man[Index].name = listadd->man[Index - InsIndex].name;

    }

    //复制剩下的元素
    for (Index = list->Length, Index2 = InsIndex; Index < MAX_SIZE; Index ++, Index2 ++) {
        list->Length++;
        if (list->Length >= MAX_SIZE) {
            list->Length--;
            break;
        }
        list->man[Index].id = List_backup.man[Index2].id;
        list->man[Index].name = List_backup.man[Index2].name;

    }

    return DS_SUCCESS;
}

//3. 删除元素
DS_STATUS
SeqList_Delete(
    SeqList *list,
    UINT32   InsIndex
)
{
    return DS_SUCCESS;
}