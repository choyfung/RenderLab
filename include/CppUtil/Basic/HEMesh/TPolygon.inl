#pragma once
#ifndef _CPPUTIL_BASIC_HEMESH_TPOLYGON_INL_
#define _CPPUTIL_BASIC_HEMESH_TPOLYGON_INL_

namespace CppUtil {
	namespace Basic {
		template<typename V, typename E, typename P>
		const std::vector<Ptr<E>> TPolygon<V, E, P>::BoundaryEdges() {
			std::vector<Ptr<E>> edges;
			for (auto he : BoundaryHEs())
				edges.push_back(he->Edge());
			return edges;
		}

		template<typename V, typename E, typename P>
		const std::vector<Ptr<V>> TPolygon<V, E, P>::BoundaryVertice() {
			std::vector<Ptr<V>> vertice;
			for (auto he : BoundaryHEs())
				vertice.push_back(he->Origin());
			return vertice;
		}
	}
}

#endif// !_CPPUTIL_BASIC_HEMESH_TPOLYGON_INL_
