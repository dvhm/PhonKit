#pragma once

#ifdef PHONETICENGINE_EXPORTS
#define PHONETIC_API __declspec(dllexport)
#else
#define PHONETIC_API __declspec(dllimport)
#endif

extern "C" {
	PHONETIC_API int letter_count(const char* word);
	PHONETIC_API int syllable_count(const char* word);

}