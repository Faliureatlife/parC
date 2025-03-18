
typedef struct {
  *int alloc_stack; 
  int size;
}stacked;

void initstack(stacked* stackd, int elem){
  stackd->size = elem;
  malloc(alloc_stack, (sizeof *int) * elem);
}
