#include "simple_list.h"

namespace blitzkoder
{
	std::string simple_list_print(simple_list_head * h) {
		std::string external_representation = std::string("");

		if (h->first != nullptr) {
			for (simple_list_item *ep = h->first; ep != nullptr; ep = ep->next) {
				external_representation.append(std::to_string(ep->val));
				if (ep->next != nullptr)
					external_representation.append("\n");
			}
		}

		return external_representation;
	}

	void simple_list_delete(simple_list_head * h) {

		// If the list has elements, iterate and delete each one.
		if (h->first != nullptr) {
			for (simple_list_item *ep = h->first, *aux; ep != nullptr; ep = aux) {
				aux = ep->next;
				delete(ep);
			}
		}

		// Delete the head of the list.
		delete(h);
	}


	simple_list_head* simple_list_create_empty() {
		simple_list_head* new_list = new simple_list_head;
		new_list->first = nullptr;
		new_list->number_of_elements = 0;

		return new_list;
	}

	void simple_list_append(simple_list_head* h, int number) {

		// Allocate memory to represent a simple_list_item.
		simple_list_item* new_element = new simple_list_item;

		// Set its value and set it to have an nonexistent arrow.
		new_element->val = number;
		new_element->next = nullptr;
		
		// Initial case for an empty list, 'e' is going to be the first element.
		if (h->first == nullptr) {
			h->first = new_element;
			return;
		}

		// If the list wasn't empty, iterate until we reach the last element of the list.
		simple_list_item *ep = h->first;
		for (; ep->next != nullptr; ep = ep->next);

		// Assign the new element 'e' to the end. The list element `ep` now has an arrow pointing to the new element.
		ep->next = new_element;


		h->number_of_elements++;


	}


	void simple_list_append(simple_list_head* h, simple_list_item* e) {

		// Initial case for an empty list, 'e' is going to be the first element.
		if (h->first == nullptr) {
			h->first = e;
			return;
		}

		// Iterate until we reach the last element of the list.
		simple_list_item *ep = h->first;
		for (; ep->next != nullptr; ep = ep->next);

		// Assign the new element 'e' to the end.
		ep->next = e;
	}

	unsigned int simple_list_count(simple_list_head* h) {

		// Initial case for an empty list, return 0.
		if (h->first == nullptr) {
			return 0;
		}

		// Iterate until we reach the end of the list. Increment the counter for each element.
		unsigned int counter = 0;
		for (simple_list_item *ep = h->first; ep != nullptr; ep = ep->next) {
			counter++;
		}
		return counter;
	}
	int simple_list_sum(simple_list_head * h)
	{
		// Initial case for an empty list, return 0.
		if (h->first == nullptr) {
			return 0;
		}

		int sum = 0;
		for (simple_list_item *ep = h->first; ep != nullptr; ep = ep->next) {
			sum += ep->val;
		}

		return sum;
	}
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