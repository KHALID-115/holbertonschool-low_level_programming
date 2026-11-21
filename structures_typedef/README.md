# 0x0D. C - Structures, typedef

## 0. Poppy
`dog.h` defines `struct dog` with the members `name` (`char *`), `age` (`float`) and `owner` (`char *`).

## 1. A dog is the only thing on earth that loves you more than you love yourself
`init_dog` initializes a variable of type `struct dog`.
Prototype: `void init_dog(struct dog *d, char *name, float age, char *owner);`

## 2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad
`print_dog` prints a `struct dog`. Prints `(nil)` for any `NULL` element, and nothing if `d` is `NULL`.
Prototype: `void print_dog(struct dog *d);`

## 3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read
`dog.h` also defines `dog_t` as a new name for the type `struct dog`.

## 4. A door is what a dog is perpetually on the wrong side of
`new_dog` creates a new dog, storing a copy of `name` and `owner`. Returns `NULL` if it fails.
Prototype: `dog_t *new_dog(char *name, float age, char *owner);`

## 5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg
`free_dog` frees a dog (its `name`, its `owner` and the struct itself).
Prototype: `void free_dog(dog_t *d);`
