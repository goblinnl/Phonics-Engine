#ifndef CAMERA_H
#define CAMERA_H


#include "GameObject.hpp"
#include "Renderer.hpp"
#include "Ray.hpp"
#include "Vector3.hpp"

#include <glm.hpp>

class Camera : public GameObject
{
	public:
		Camera( std::string name = 0, glm::vec3 position = glm::vec3( 0.0f, 3.0f, 5.0f ) );
		virtual ~Camera();
		bool intersect( Ray& ray, float& distance );

	private: //members
		glm::mat4 projection;
		Vector3 mNormal;
		float mDistance;
};


#endif // CAMERA_H
