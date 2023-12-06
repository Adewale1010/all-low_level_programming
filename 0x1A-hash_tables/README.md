My Solutions to C - Hash tables tasks at ALX SE


0. >>> ht = {}
	0-hash_table_create.c: C function that creates a hash table.


1. djb2
	1-djb2.c: C hash function implementing the djb2 algorithm.


2. key -> index
	2-key_index.c: C function that gives you the index of a key.


3. >>> ht['betty'] = 'cool'
	3-hash_table_set.c: C function that adds an element to the hash table.


4. >>> ht['betty']
	4-hash_table_get.c: C function that retrieves a value associated with a key.


5. >>> print(ht)
	5-hash_table_print.c: C function that prints a hash table.


6. >>> del ht
	6-hash_table_delete.c: C function that deletes a hash table.


7. $ht['Betty'] = 'Cool'
	100-sorted_hash_table.c: Rewrite the previous functions using these data structures:

		shash_table_t *shash_table_create(unsigned long int size);
		int shash_table_set(shash_table_t *ht, const char *key, const char *value);
			The key/value pair should be inserted in the sorted list at the right place
			Note that here we do not want to do exactly like PHP: we want to create a sorted linked list, by key (sorted on ASCII value), that we can print by traversing it. See example.
		char *shash_table_get(const shash_table_t *ht, const char *key);
		void shash_table_print(const shash_table_t *ht);
			Should print the hash table using the sorted linked list
		void shash_table_print_rev(const shash_table_t *ht);
			Should print the hash tables key/value pairs in reverse order using the sorted linked list
		void shash_table_delete(shash_table_t *ht);
