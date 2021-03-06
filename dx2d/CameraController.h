#pragma once

#include "ObjectBehavior.h"
#include "CameraComponent.h"

#include "globalstructs.h"

class CameraController : public ObjectBehavior {
public:
	CameraController(const ObjectVector &objects, std::shared_ptr<Object> &object);

	void tick() override;

private:
	POINT previous_cursor_pos = { 0, 0 };
};
