#ifndef ABS_H
#define ABS_H
#define ABS(x) ((x * (x >> 31)) | ((~x + 1) * ((~x + 1) >> 31)))

#endif /*ABS_H*/
