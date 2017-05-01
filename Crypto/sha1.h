#include <sys/types.h>
#include <stdint.h>

// From http://www.mirrors.wiretapped.net/security/cryptography/hashes/sha1/sha1.c

typedef struct {
    int32_t state[5];
    int32_t count[2];
    int8_t buffer[64];
} SHA1_CTX;

extern void SHA1Init(SHA1_CTX* context);
extern void SHA1Update(SHA1_CTX* context, int8_t* data, int32_t len);
extern void SHA1Final(int8_t digest[20], SHA1_CTX* context);
