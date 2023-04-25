#ifndef MAIN_H
#define MAIN_H

[A[B[B[B[B[B[A[A[A[A[A[A[B[B#include <limits.h>
#include
#include
#include[A[A[C<stdarg.h>[B[D[D[D[D[D[D[D[D[D[D<stdlib.h>[B[D[D[D[D[D[D[D[D[D[
[A[B/* Flag Modifiers */
#define PLUS 1
#define
#define
#define
#define
#define
#define[A[A[A[A[A[A[B[B[B[B[B[B
#define
#define
#define[A[A[A[A[A[A[A[A[A[B[B[B[B[B[B[B[B[B[A[A[A[A[A[A[A[A[A[B	SPACE 2
[C[C[C[C[C[C[C[C[C[C[C[C[D[D[D[DHASH 4[B[D[D[D[D[D[D[A[D[D[C[C[D[[C[BZERO 8[B[D[D[D[D[D[DNEG 16[B[D[D[D[D[D[DPLUS_FLUG[A[C[B[D[D[D[D[D[D[D[D[D[A[C[C[C[C[C[C[C[C[C[C[C[D[D[C(flags $ 1)[D[D[D[D[C[C[C[C[C & 1)[B[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[DSPACE_FLAG ((flags >> 1) & 1)
[C[C[C[C[C[C[C[CHASH_FLAG ((flags >> 2) & 1)[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[BZERO_FLAG ((flags >> 4) & 1)[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[BNEG_FLAG ((flags >>[A[C[C[3[B[D[D[D 4) & 1)

[A[B/* Macros Modifier Lenth */
#define SHORT 1
#define LONG 2[B[B
















[A[A[A[A[A[A[A[A[A[A[A[A[A[A[A[A[B/**
*
*
*
*
*/[A[A[A[A[D[Cstruct buffer_s - Defining buffer struct.[B[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D@buffer: Pointer to character array.[B[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D@start: pointer to start buffer[B[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D@len: string stored in buffer[B[B[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[Dtypedef struct buffer_s
{[B[A
	char *buffer;
	char *start;
	unsigned int len;
} buffer_t;

/**
*
*[A struct [B[B[B[B[B[B[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[B[B[B[B[B











[A[A[A[A[A[A[A[A[A[A[A[A[A[A[A[B[B[C[C[C[C[C[C[C[C[C[C[C[C[C[D[D[D[D[D converter_s - New converter struct.
[C @specifier: character presenting conversion specifier
* @func: pointer to corresponding specifier
*/
typedef struct converter_s
{
	unsigned char specifier;
	unsigned int (*func)(va_list, buffer_t *,
			unsigned char, int, int, unsigned char);
} converter_t;
















[A[A[A[A[A[A[A[A[A[A[A[A[A[A[A[A[B/**
*
*
*
*[A[A[A struct flags_s - new flags struct
* [A[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C.
[C[C[C[D@flag: character representing a flag.
[C[C@value: integer value of flag.
[C[/

[Atypedef struct flags_s
{
	unsigned char flag;
	unsigned char value;
} flag_t;[B[D[D[D[D[D[D[D[D[D[D[D[D[D[Bint _printf(const char *format, ...);[[B/* Conversion Specifier Functions */
unsigned int convert_c(va_list args, buffer_t *output,
		unsigned char flags, int wid, int prec, unsigned char len);
unsigned int convert_s(va_list args, buffer_t *output,
		unsigned char flags, int wid, int prec, unsigned char len);
unsigned int convert_di(va_list args, buffer_t *output,
		unsigned char flags, int wid, int prec, unsigned char len);
unsigned int convert_percent(va_list args, buffer_t *output,
		unsigned char flags, int wid, int prec, unsigned char len);
unsigned int convert_b(va_list args, buffer_t *output,
		unsigned char flags, int wid, int prec, unsigned char len);
unsigned int convert_u(va_list args, buffer_t *output,
		unsigned char flags, int wid, int prec, unsigned char len);
unsigned int convert_o(va_list args, buffer_t *output,
		unsigned char flags, int wid, int prec, unsigned char len);
unsigned int convert_x(va_list args, buffer_t *output,
		unsigned char flags, int wid, int prec, unsigned char len);
unsigned int convert_X(va_list args, buffer_t *output,
		unsigned char flags, int wid, int prec, unsigned char len);
unsigned int convert_S(va_list args, buffer_t *output,
		unsigned char flags, int wid, int prec, unsigned char len);
unsigned int convert_p(va_list args, buffer_t *output,
		unsigned char flags, int wid, int prec, unsigned char len);
unsigned int convert_r(va_list args, buffer_t *output,
		unsigned char flags, int wid, int prec, unsigned char len);
unsigned int convert_R(va_list args, buffer_t *output,
		unsigned char flags, int wid, int prec, unsigned char len);

/* Handlers */
unsigned char handle_flags(const char *flags, char *index);
unsigned char handle_length(const char *modifier, char *index);
int handle_width(va_list args, const char *modifier, char *index);
int handle_precision(va_list args, const char *modifier, char *index);
unsigned int (*handle_specifiers(const char *specifier))(va_list, buffer_t *,
		unsigned char, int, int, unsigned char);

/* Modifiers */
unsigned int print_width(buffer_t *output, unsigned int printed,
		unsigned char flags, int wid);
unsigned int print_string_width(buffer_t *output,
		unsigned char flags, int wid, int prec, int size);
unsigned int print_neg_width(buffer_t *output, unsigned int printed,
		unsigned char flags, int wid);

/* Helper Functions */
buffer_t *init_buffer(void);
void free_buffer(buffer_t *output);
unsigned int _memcpy(buffer_t *output, const char *src, unsigned int n);
unsigned int convert_sbase(buffer_t *output, long int num, char *base,
		unsigned char flags, int wid, int prec);
unsigned int convert_ubase(buffer_t *output, unsigned long int num, char *base,
		unsigned char flags, int wid, int prec);

#endif
[A[C[C[C[C[C[C[C
