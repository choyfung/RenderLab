#ifndef _CPPUTIL_ENGINE_PRIMITIVE_SHAPE_H_
#define _CPPUTIL_ENGINE_PRIMITIVE_SHAPE_H_

#include <CppUtil/Basic/Element.h>
#include <CppUtil/Basic/UGM/BBox.h>

namespace CppUtil {
	namespace Engine {
		class Primitive;

		class Shape : public Basic::Element {
		protected:
			Shape() = default;
			virtual ~Shape() = default;

		public:
			virtual const BBoxf GetBBox() const = 0;
			virtual const Basic::Ptr<Primitive> GetPrimitive() = 0;
		};
	}

	using EShape = Engine::Shape;
}

#endif // !_CPPUTIL_ENGINE_PRIMITIVE_SHAPE_H_
