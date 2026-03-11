#include "pch.h"
#include "phonetic_engine.h"

int letter_count(const char* word)
{
    int count = 0;
    for (const char* p = word; *p != '\0'; ++p) {
        if (isalpha(*p)) {
            ++count;
        }
    }
    return count;
}
int syllable_count(const char* word)
{
    return 1234;
}