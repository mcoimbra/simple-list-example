#include <iostream>

#include "simple_list.h"


int main()
{
	std::cout << "Sample program to demonstrate a simple list in use." << std::endl;


	blitzkoder::simple_list_head *very_small_list = blitzkoder::simple_list_create_empty();
	blitzkoder::simple_list_append(very_small_list, 1);
	blitzkoder::simple_list_append(very_small_list, 2);
	blitzkoder::simple_list_append(very_small_list, 3);

	int small_sum = blitzkoder::simple_list_sum(very_small_list);
	std::cout << "The sum of the very small list was: " << small_sum << std::endl;

	blitzkoder::simple_list_head *list_head = blitzkoder::simple_list_create_empty();

	for(int i = 0; i < 20; i++)
		blitzkoder::simple_list_append(list_head, i);


	std::cout << blitzkoder::simple_list_print(list_head) << std::endl;

	int sum = blitzkoder::simple_list_sum(list_head);

	std::cout << "The sum of the list was: " << sum << std::endl;

	blitzkoder::simple_list_delete(list_head);

    return 0;
}



// ----------------------------------------------------------------------------
// Copyright 2018 Miguel Coimbra
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
// ----------------------------- END-OF-FILE ----------------------------------