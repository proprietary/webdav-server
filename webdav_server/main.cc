#include "pugixml.hpp"

#include <iostream>

int main(int argc, char* argv[])
{
	if (argc < 2) {
		return 1;
	}
// tag::code[]
    pugi::xml_document doc;

	std::cout << "loading file: " << argv[1] << std::endl;

    pugi::xml_parse_result result = doc.load_file(argv[1]);

    std::cout << "Load result: " << result.description() << ", mesh name: " << doc.child("mesh").attribute("name").value() << std::endl;
// end::code[]
}
