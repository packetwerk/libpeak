/*
 * Copyright (c) 2013 Masoud Chelongar <masoud@packetwerk.com>
 * Copyright (c) 2013-2014 Franco Fichtner <franco@packetwerk.com>
 * Copyright (c) 2014 Tobias Boertitz <tobias@packetwerk.com>
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef PEAK_REGEX_H
#define PEAK_REGEX_H

#define REGEX_NOCASE	0x01

struct peak_regexes	*peak_regex_init(void);
const char		*peak_regex_parse(const char *, const size_t,
			     const unsigned int);
int			 peak_regex_add(struct peak_regexes *,
			     const unsigned int, const char *,
			     const size_t, const unsigned int);
void			 peak_regex_find(struct peak_regexes *,
			     const char *, const size_t, stash_t);
void			 peak_regex_exit(struct peak_regexes *);

#endif /* !PEAK_REGEX_H */
