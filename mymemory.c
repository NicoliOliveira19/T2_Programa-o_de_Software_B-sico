#include "mymemory.h"
#include <stdio.h>
#include <stdlib.h>

mymemory_t* mymemory_initial(size_t size) {
	mymemory_t *memory =  malloc(sizeof(memory_t));
	if (!memory) return NULL;

	memory->pool = malloc(size);
	if(!memory->pool) {
	free(memory);
	return NULL;				
	}

	memory->total_size = size;
	memory->head = NULL;
	return memory;

}

void* mymemory_alloc(mymemory_t *memory, size_t size) {
// aqui você deve implementar a estratégia de alocação (First Fit, Best Fit, etc.)
    // verificar espaços livres, criar allocation_t, adicionar à lista encadeada
    // retornar ponteiro para o início do bloco (dentro do pool)
return NULL;
}

void mymemory_free(mymemory_t *memory, void *ptr) {
// encontrar o nó na lista cujo start == ptr
    // removê-lo da lista
    // o bloco “fica livre” (você não chama free(ptr), apenas ajusta o controle lógico)

}

void mymemory_display(mymemory_t *memory) {
	allocation_t *current = memory->head;
	while (current != NULL) {
	  printf("Bloco: Início=%p, tamanho=&zu bytes\n", current->start, current->size);
	  current = current->next;
	}

}


}
