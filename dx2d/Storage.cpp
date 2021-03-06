#include "Storage.h"

Material & Storage::get_material_by_name(std::string name) {
	for (Material &material : materials) {
		if (material.name == name) return material;
	}

	ERROR_MESSAGE(L"Material not found in storage.");
	return *materials.end();
}
