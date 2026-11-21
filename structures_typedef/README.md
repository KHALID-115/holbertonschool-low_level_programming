# 0x0D. C - Structures, typedef

## 0. Poppy
`dog.h` defines `struct dog` with the members `name` (`char *`), `age` (`float`) and `owner` (`char *`).

## 1. A dog is the only thing on earth that loves you more than you love yourself
`init_dog` initializes a variable of type `struct dog`.
Prototype: `void init_dog(struct dog *d, char *name, float age, char *owner);`

## 2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad
`print_dog` prints a `struct dog`. Prints `(nil)` for any `NULL` element, and nothing if `d` is `NULL`.
Prototype: `void print_dog(struct dog *d);`
