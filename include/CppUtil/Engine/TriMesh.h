#ifndef _ENGINE_PRIMITIVE_TRIMESH_H_
#define _ENGINE_PRIMITIVE_TRIMESH_H_

#include <CppUtil/Engine/Primitive.h>
#include <CppUtil/Engine/Triangle.h>
#include <CppUtil/Engine/BVHNode.h>

#include <glm/vec3.hpp>

namespace CppUtil {
	namespace Engine {
		class TriMesh : public Primitive {
			ELE_SETUP(TriMesh)
		public:
			TriMesh(const std::vector<uint> & indice,
				const std::vector<glm::vec3> & positions,
				const std::vector<glm::vec3> & normals,
				const std::vector<glm::vec2> & texcoords);

			TriMesh(uint triNum, uint vertexNum,
				const uint * indice,
				const float * positions,
				const float * normals,
				const float * texcoords);

		public:
			// 这个函数不应该主动调用
			void InitAfterGenSharePtr();

		public:
			const std::vector<glm::vec3> & GetPositions() const { return positions; }
			const std::vector<glm::vec3> & GetNormals() const { return normals; }
			const std::vector<glm::vec2> & GetTexcoords() const { return texcoords; }
			const std::vector<glm::vec3> & GetTangents() const { return tangents; }
			const std::vector<uint> & GetIndice() const { return indice; }
			const std::vector<Triangle::Ptr> & GetTriangles() const { return triangles; }

		public:
			static TriMesh::Ptr GenCube();
			static TriMesh::Ptr GenSphere();
			static TriMesh::Ptr GenPlane();

		private:
			void GenTangents();

		private:
			std::vector<uint> indice;
			std::vector<glm::vec3> positions;
			std::vector<glm::vec3> normals;
			std::vector<glm::vec2> texcoords;
			std::vector<glm::vec3> tangents;

			std::vector<Triangle::Ptr> triangles;
		};
	}
}

#endif//!_ENGINE_PRIMITIVE_TRIMESH_H_
