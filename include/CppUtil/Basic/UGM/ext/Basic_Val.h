#ifndef _CPPUTIL_BASIC_MATH_UGM_EXT_BASIC_VAL_H_
#define _CPPUTIL_BASIC_MATH_UGM_EXT_BASIC_VAL_H_

#include <CppUtil/Basic/UGM/ext/Basic_Val_Base.h>

namespace CppUtil {
	namespace Basic {
		namespace EXT {
			template <int N, typename T, typename ImplT>
			class Basic_Val : public Basic_Val_Base<N, T, ImplT>{
			public:
				using Basic_Val_Base<N, T, ImplT>::Basic_Val_Base;

			public:
				const ImplT LerpWith(const ImplT & s1, T t) const {
					return Lerp(ToImplT(), s1, t);
				}

				static const ImplT Mid(const ImplT & lhs, const ImplT & rhs) {
					return Lerp(lhs, rhs, static_cast<T>(0.5));
				}

				const ImplT MidWith(const ImplT & v) const {
					return Mid(ToImplT(), v);
				}

				const ImplT MinWith(const ImplT & v) const {
					return Min(ToImplT(), v);
				}

				const ImplT MaxWith(const ImplT & v) const {
					return Max(ToImplT(), v);
				}

			protected:
				ImplT & ToImplT() {
					return *static_cast<ImplT *>(this);
				}

				const ImplT & ToImplT() const {
					return *static_cast<const ImplT *>(this);
				}
			};
		}
	}
}

#endif // !_CPPUTIL_BASIC_MATH_UGM_EXT_BASIC_VAL_H_
