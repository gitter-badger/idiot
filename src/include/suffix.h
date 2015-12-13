/*
 * suffix.h
 *
 *  Created on: Dec 13, 2015
 *      Author: os
 */

#ifndef SRC_INCLUDE_SUFFIX_H_
#define SRC_INCLUDE_SUFFIX_H_

#include "lang.h"

struct suffix{

	char *suff_str;		/* суффикс */

	int gender;			/* род */
	int number;			/* число */
	int speech_part;	/* часть речи в которой может быть суфф */
	int is_before;		/* буквы могут быть перед суфф 			*/
	int is_end;			/* 					или после суфф 		*/

	struct suffix *next;

};

struct suffix suffixes[] = {

		{
				.suff_str = "адь",
				.gender = GENDER_MALE,
				.speech_part = SPEECH_NOUN,
				.is_before = 1,
				.is_end = 1
		},

		{

				/* кароч как-то так */
		}

};

#endif /* SRC_INCLUDE_SUFFIX_H_ */
