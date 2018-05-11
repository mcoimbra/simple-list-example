#if defined (__WIN32__)
	#pragma once
#endif

#ifndef HEADERFILE_H
#define HEADERFILE_H

#include <string>

namespace blitzkoder
{
	struct simple_list_head {
		struct simple_list_item *first;
	};

	struct simple_list_item {
		struct simple_list_item *next;
		int val;
	};

	std::string simple_list_print(simple_list_head *h);

	void simple_list_delete(simple_list_head *h);
	simple_list_head *simple_list_create_empty();

	void simple_list_append(simple_list_head *h, simple_list_item *e);
	void simple_list_append(simple_list_head *h, int number);
	unsigned int simple_list_count(simple_list_head *h);
	int simple_list_sum(simple_list_head *h);
}

#endif

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