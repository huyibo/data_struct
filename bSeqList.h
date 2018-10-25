#include "bStatusCode.h"

#pragma pack(push)
#pragma pack(1)
// 数据
//1. 定义最大存储空间
#define MAX_SIZE 255

//2. 定义单个元素
typedef struct {
    UINT32  id;
    char   *name;
}RPC;

//3.顺序表定义，除了数组，还需要一个int指明当前数组包括的元素个数
typedef struct {
    RPC     man[MAX_SIZE];
    UINT32  Length;
}SeqList;
#pragma pack(pop)

//操作
//1. 初始化
DS_STATUS
SeqList_INIT(
    SeqList *list
);

//2. 插入元素
DS_STATUS
SeqList_Insert(
    SeqList *list,
    SeqList *listadd,     //元素内容
    UINT32   InsIndex     //插入位置
);

//3. 删除元素
DS_STATUS
SeqList_Delete(
    SeqList *list,
    UINT32   InsIndex
);
