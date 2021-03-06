// Generated by Haxe 3.3.0
#ifndef INCLUDED_thx_Eithers
#define INCLUDED_thx_Eithers

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,ds,Option)
HX_DECLARE_CLASS1(thx,Either)
HX_DECLARE_CLASS1(thx,Eithers)

namespace thx{


class HXCPP_CLASS_ATTRIBUTES Eithers_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Eithers_obj OBJ_;
		Eithers_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="thx.Eithers")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"thx.Eithers"); }
		static hx::ObjectPtr< Eithers_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Eithers_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Eithers","\x6e","\x67","\x48","\x40"); }

		static Bool isLeft(::hx::EnumBase either);
		static ::Dynamic isLeft_dyn();

		static Bool isRight(::hx::EnumBase either);
		static ::Dynamic isRight_dyn();

		static ::hx::EnumBase toLeft(::hx::EnumBase either);
		static ::Dynamic toLeft_dyn();

		static ::hx::EnumBase toRight(::hx::EnumBase either);
		static ::Dynamic toRight_dyn();

		static  ::Dynamic toLeftUnsafe(::hx::EnumBase either);
		static ::Dynamic toLeftUnsafe_dyn();

		static  ::Dynamic toRightUnsafe(::hx::EnumBase either);
		static ::Dynamic toRightUnsafe_dyn();

		static ::hx::EnumBase map(::hx::EnumBase either, ::Dynamic f);
		static ::Dynamic map_dyn();

		static ::hx::EnumBase flatMap(::hx::EnumBase either, ::Dynamic f);
		static ::Dynamic flatMap_dyn();

		static ::hx::EnumBase leftMap(::hx::EnumBase either, ::Dynamic f);
		static ::Dynamic leftMap_dyn();

		static  ::Dynamic orThrow(::hx::EnumBase either,::String message);
		static ::Dynamic orThrow_dyn();

		static ::hx::EnumBase toVNel(::hx::EnumBase either);
		static ::Dynamic toVNel_dyn();

		static  ::Dynamic cata(::hx::EnumBase either, ::Dynamic l, ::Dynamic r);
		static ::Dynamic cata_dyn();

};

} // end namespace thx

#endif /* INCLUDED_thx_Eithers */ 
