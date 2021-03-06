#pragma once

#include <vector>
#include "GraphicsScene.h"
#include "PhysicsScene.h"
#include "Object.h"
#include "BehaviorManager.h"
#include "Window.h"
#include "Storage.h"

class Scene {
public:
	Scene(Window &window);
	Scene() { }

	void tick();

	void clean_up();

	void read_obj_file(std::string obj_file_path) noexcept;

	std::shared_ptr<GraphicsScene> graphics_scene;
	PhysicsScene physics_scene;
	ObjectVector objects;
	BehaviorManager behavior_manager;
};

