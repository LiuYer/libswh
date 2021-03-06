/**
The functionality of this file is described in corresponding `README.md`.
Copyright (C) 2017  https://github.com/march1993

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <stdio.h>
#include <swh/crypto/sha256.h>

int main(int argc, char * argv) {

	unsigned char output[32];

	char test0[] = "abc";
	sha256(3, test0, output);

	printf("sha256 of %s is\n", test0);
	for (size_t i = 0; i < 32; i++) {
		printf("%02x", output[i]);
	}
	printf("\n");

	char test1[] = "abcdbcdecdefdefgefghfghighijhijkijkljklmklmnlmnomnopnopq";
	sha256(448 / 8, test1, output);

	printf("sha256 of %s is\n", test1);
	for (size_t i = 0; i < 32; i++) {
		printf("%02x", output[i]);
	}
	printf("\n");

	return EXIT_SUCCESS;
}
