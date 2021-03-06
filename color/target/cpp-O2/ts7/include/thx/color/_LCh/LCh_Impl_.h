// Generated by Haxe 3.3.0
#ifndef INCLUDED_thx_color__LCh_LCh_Impl_
#define INCLUDED_thx_color__LCh_LCh_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(thx,color,_LCh,LCh_Impl_)

namespace thx{
namespace color{
namespace _LCh{


class HXCPP_CLASS_ATTRIBUTES LCh_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef LCh_Impl__obj OBJ_;
		LCh_Impl__obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="thx.color._LCh.LCh_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"thx.color._LCh.LCh_Impl_"); }
		static hx::ObjectPtr< LCh_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LCh_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("LCh_Impl_","\x71","\x85","\x20","\xc9"); }

		static ::Array< Float > create(Float lightness,Float chroma,Float hue);
		static ::Dynamic create_dyn();

		static ::Array< Float > fromFloats(::Array< Float > arr);
		static ::Dynamic fromFloats_dyn();

		static ::Array< Float > fromString(::String color);
		static ::Dynamic fromString_dyn();

		static ::Array< Float > _new(::Array< Float > channels);
		static ::Dynamic _new_dyn();

		static  ::Dynamic analogous(::Array< Float > this1,hx::Null< Float >  spread);
		static ::Dynamic analogous_dyn();

		static ::Array< Float > complement(::Array< Float > this1);
		static ::Dynamic complement_dyn();

		static ::Array< Float > interpolate(::Array< Float > this1,::Array< Float > other,Float t);
		static ::Dynamic interpolate_dyn();

		static ::Array< Float > interpolateWidest(::Array< Float > this1,::Array< Float > other,Float t);
		static ::Dynamic interpolateWidest_dyn();

		static ::Array< Float > min(::Array< Float > this1,::Array< Float > other);
		static ::Dynamic min_dyn();

		static ::Array< Float > max(::Array< Float > this1,::Array< Float > other);
		static ::Dynamic max_dyn();

		static ::Array< Float > normalize(::Array< Float > this1);
		static ::Dynamic normalize_dyn();

		static ::Array< Float > rotate(::Array< Float > this1,Float angle);
		static ::Dynamic rotate_dyn();

		static ::Array< Float > roundTo(::Array< Float > this1,Int decimals);
		static ::Dynamic roundTo_dyn();

		static  ::Dynamic split(::Array< Float > this1,hx::Null< Float >  spread);
		static ::Dynamic split_dyn();

		static  ::Dynamic square(::Array< Float > this1);
		static ::Dynamic square_dyn();

		static  ::Dynamic tetrad(::Array< Float > this1,Float angle);
		static ::Dynamic tetrad_dyn();

		static  ::Dynamic triad(::Array< Float > this1);
		static ::Dynamic triad_dyn();

		static ::Array< Float > withLightness(::Array< Float > this1,Float newlightness);
		static ::Dynamic withLightness_dyn();

		static ::Array< Float > withChroma(::Array< Float > this1,Float newchroma);
		static ::Dynamic withChroma_dyn();

		static ::Array< Float > withHue(::Array< Float > this1,Float newhue);
		static ::Dynamic withHue_dyn();

		static Bool equals(::Array< Float > this1,::Array< Float > other);
		static ::Dynamic equals_dyn();

		static Bool nearEquals(::Array< Float > this1,::Array< Float > other, ::Dynamic tolerance);
		static ::Dynamic nearEquals_dyn();

		static ::String toString(::Array< Float > this1);
		static ::Dynamic toString_dyn();

		static ::String toHclString(::Array< Float > this1);
		static ::Dynamic toHclString_dyn();

		static ::Array< Float > toLab(::Array< Float > this1);
		static ::Dynamic toLab_dyn();

		static ::Array< Float > toLuv(::Array< Float > this1);
		static ::Dynamic toLuv_dyn();

		static ::Array< Float > toCmy(::Array< Float > this1);
		static ::Dynamic toCmy_dyn();

		static ::Array< Float > toCmyk(::Array< Float > this1);
		static ::Dynamic toCmyk_dyn();

		static ::Array< Float > toCubeHelix(::Array< Float > this1);
		static ::Dynamic toCubeHelix_dyn();

		static Float toGrey(::Array< Float > this1);
		static ::Dynamic toGrey_dyn();

		static ::Array< Float > toHsl(::Array< Float > this1);
		static ::Dynamic toHsl_dyn();

		static ::Array< Float > toHsv(::Array< Float > this1);
		static ::Dynamic toHsv_dyn();

		static ::Array< Float > toHunterLab(::Array< Float > this1);
		static ::Dynamic toHunterLab_dyn();

		static Int toRgb(::Array< Float > this1);
		static ::Dynamic toRgb_dyn();

		static Int toRgba(::Array< Float > this1);
		static ::Dynamic toRgba_dyn();

		static ::Array< Float > toRgbx(::Array< Float > this1);
		static ::Dynamic toRgbx_dyn();

		static ::Array< Float > toRgbxa(::Array< Float > this1);
		static ::Dynamic toRgbxa_dyn();

		static Float toTemperature(::Array< Float > this1);
		static ::Dynamic toTemperature_dyn();

		static ::Array< Float > toXyz(::Array< Float > this1);
		static ::Dynamic toXyz_dyn();

		static ::Array< Float > toYuv(::Array< Float > this1);
		static ::Dynamic toYuv_dyn();

		static ::Array< Float > toYxy(::Array< Float > this1);
		static ::Dynamic toYxy_dyn();

		static Float get_lightness(::Array< Float > this1);
		static ::Dynamic get_lightness_dyn();

		static Float get_chroma(::Array< Float > this1);
		static ::Dynamic get_chroma_dyn();

		static Float get_hue(::Array< Float > this1);
		static ::Dynamic get_hue_dyn();

};

} // end namespace thx
} // end namespace color
} // end namespace _LCh

#endif /* INCLUDED_thx_color__LCh_LCh_Impl_ */ 
