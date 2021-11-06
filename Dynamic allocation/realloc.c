/*	
	realloc();
	If the previously allocated memory is insufficient or more than required,
	you can change the previously allocated memory size using realloc().
	
	syntax:
		realloc(pointer_to_previously_allocated_block , new_size);
		
	example:
		int *ptr;
		ptr = (int*) malloc(sizeof(int);
		
		.........
		some code
		.........
		//expand the reserved block to 20 sizeof(int)
		realloc(ptr,20*sizeof(int));
		
*/