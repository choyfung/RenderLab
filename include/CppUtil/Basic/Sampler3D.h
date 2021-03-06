#ifndef _BASIC_SAMPLER_SAMPLER_3D_H_
#define _BASIC_SAMPLER_SAMPLER_3D_H_

#include <CppUtil/Basic/UGM/Val3.h>

namespace CppUtil {
	namespace Basic {
		class Sampler3D {
		public:
			virtual const Val3 GetSample() = 0;
			virtual const Val3 GetSample(float & pd) = 0;
			virtual ~Sampler3D() {}
		};
	}
}

#endif//!_BASIC_SAMPLER_SAMPLER_3D_H_
