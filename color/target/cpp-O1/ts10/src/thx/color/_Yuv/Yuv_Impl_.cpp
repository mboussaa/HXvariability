// Generated by Haxe 3.3.0
#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_thx_ArrayFloats
#include <thx/ArrayFloats.h>
#endif
#ifndef INCLUDED_thx_Floats
#include <thx/Floats.h>
#endif
#ifndef INCLUDED_thx_color__Lab_Lab_Impl_
#include <thx/color/_Lab/Lab_Impl_.h>
#endif
#ifndef INCLUDED_thx_color__Rgbx_Rgbx_Impl_
#include <thx/color/_Rgbx/Rgbx_Impl_.h>
#endif
#ifndef INCLUDED_thx_color__Rgbxa_Rgbxa_Impl_
#include <thx/color/_Rgbxa/Rgbxa_Impl_.h>
#endif
#ifndef INCLUDED_thx_color__Xyz_Xyz_Impl_
#include <thx/color/_Xyz/Xyz_Impl_.h>
#endif
#ifndef INCLUDED_thx_color__Yuv_Yuv_Impl_
#include <thx/color/_Yuv/Yuv_Impl_.h>
#endif
#ifndef INCLUDED_thx_color_parse_ChannelInfo
#include <thx/color/parse/ChannelInfo.h>
#endif
#ifndef INCLUDED_thx_color_parse_ColorInfo
#include <thx/color/parse/ColorInfo.h>
#endif
#ifndef INCLUDED_thx_color_parse_ColorParser
#include <thx/color/parse/ColorParser.h>
#endif

namespace thx{
namespace color{
namespace _Yuv{

void Yuv_Impl__obj::__construct() { }

Dynamic Yuv_Impl__obj::__CreateEmpty() { return new Yuv_Impl__obj; }

hx::ObjectPtr< Yuv_Impl__obj > Yuv_Impl__obj::__new()
{
	hx::ObjectPtr< Yuv_Impl__obj > _hx_result = new Yuv_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic Yuv_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Yuv_Impl__obj > _hx_result = new Yuv_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

::Array< Float > Yuv_Impl__obj::create(Float y,Float u,Float v){
            	HX_STACK_FRAME("thx.color._Yuv.Yuv_Impl_","create",0xb470756e,"thx.color._Yuv.Yuv_Impl_.create","thx/color/Yuv.hx",26,0x17dfb21b)
            	HX_STACK_ARG(y,"y")
            	HX_STACK_ARG(u,"u")
            	HX_STACK_ARG(v,"v")
HXLINE(  26)		return ::Array_obj< Float >::__new(3)->init(0,y)->init(1,u)->init(2,v);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Yuv_Impl__obj,create,return )

::Array< Float > Yuv_Impl__obj::fromFloats(::Array< Float > arr){
            	HX_STACK_FRAME("thx.color._Yuv.Yuv_Impl_","fromFloats",0x414857d3,"thx.color._Yuv.Yuv_Impl_.fromFloats","thx/color/Yuv.hx",28,0x17dfb21b)
            	HX_STACK_ARG(arr,"arr")
HXLINE(  29)		::thx::ArrayFloats_obj::resize(arr,(int)3,null());
HXLINE(  30)		return ::Array_obj< Float >::__new(3)->init(0,arr->__get((int)0))->init(1,arr->__get((int)1))->init(2,arr->__get((int)2));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Yuv_Impl__obj,fromFloats,return )

::Array< Float > Yuv_Impl__obj::fromString(::String color){
            	HX_STACK_FRAME("thx.color._Yuv.Yuv_Impl_","fromString",0x11225d4d,"thx.color._Yuv.Yuv_Impl_.fromString","thx/color/Yuv.hx",33,0x17dfb21b)
            	HX_STACK_ARG(color,"color")
HXLINE(  34)		HX_VARI(  ::thx::color::parse::ColorInfo,info) = ::thx::color::parse::ColorParser_obj::parseColor(color);
HXLINE(  35)		if (hx::IsNull( info )) {
HXLINE(  36)			return null();
            		}
HXLINE(  38)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  38)			if ((info->name == HX_("yuv",1a,37,5c,00))) {
HXLINE(  40)				HX_VARI( ::Array< Float >,channels) = ::thx::color::parse::ColorParser_obj::getFloatChannels(info->channels,(int)3,false);
HXLINE(  38)				return channels;
            			}
            			else {
HXLINE(  38)				return null();
            			}
            		}
            		catch( ::Dynamic _hx_e){
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic e = _hx_e;
HXLINE(  38)				return null();
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXDLIN(  38)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Yuv_Impl__obj,fromString,return )

::Array< Float > Yuv_Impl__obj::_new(::Array< Float > channels){
            	HX_STACK_FRAME("thx.color._Yuv.Yuv_Impl_","_new",0x2ba34353,"thx.color._Yuv.Yuv_Impl_._new","thx/color/Yuv.hx",46,0x17dfb21b)
            	HX_STACK_ARG(channels,"channels")
HXLINE(  46)		return channels;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Yuv_Impl__obj,_new,return )

::Array< Float > Yuv_Impl__obj::interpolate(::Array< Float > this1,::Array< Float > other,Float t){
            	HX_STACK_FRAME("thx.color._Yuv.Yuv_Impl_","interpolate",0x7aee290f,"thx.color._Yuv.Yuv_Impl_.interpolate","thx/color/Yuv.hx",50,0x17dfb21b)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(other,"other")
            	HX_STACK_ARG(t,"t")
HXLINE(  50)		return ::Array_obj< Float >::__new(3)->init(0,::thx::Floats_obj::interpolate(t,this1->__get((int)0),other->__get((int)0)))->init(1,::thx::Floats_obj::interpolate(t,this1->__get((int)1),other->__get((int)1)))->init(2,::thx::Floats_obj::interpolate(t,this1->__get((int)2),other->__get((int)2)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Yuv_Impl__obj,interpolate,return )

::Array< Float > Yuv_Impl__obj::min(::Array< Float > this1,::Array< Float > other){
            	HX_STACK_FRAME("thx.color._Yuv.Yuv_Impl_","min",0x3e3a67e0,"thx.color._Yuv.Yuv_Impl_.min","thx/color/Yuv.hx",57,0x17dfb21b)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(other,"other")
HXLINE(  57)		HX_VARI( Float,y) = ::Math_obj::min(this1->__get((int)0),other->__get((int)0));
HXDLIN(  57)		HX_VARI( Float,u) = ::Math_obj::min(this1->__get((int)1),other->__get((int)1));
HXDLIN(  57)		HX_VARI( Float,v) = ::Math_obj::min(this1->__get((int)2),other->__get((int)2));
HXDLIN(  57)		return ::Array_obj< Float >::__new(3)->init(0,y)->init(1,u)->init(2,v);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Yuv_Impl__obj,min,return )

::Array< Float > Yuv_Impl__obj::max(::Array< Float > this1,::Array< Float > other){
            	HX_STACK_FRAME("thx.color._Yuv.Yuv_Impl_","max",0x3e3a60f2,"thx.color._Yuv.Yuv_Impl_.max","thx/color/Yuv.hx",60,0x17dfb21b)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(other,"other")
HXLINE(  60)		HX_VARI( Float,y) = ::Math_obj::max(this1->__get((int)0),other->__get((int)0));
HXDLIN(  60)		HX_VARI( Float,u) = ::Math_obj::max(this1->__get((int)1),other->__get((int)1));
HXDLIN(  60)		HX_VARI( Float,v) = ::Math_obj::max(this1->__get((int)2),other->__get((int)2));
HXDLIN(  60)		return ::Array_obj< Float >::__new(3)->init(0,y)->init(1,u)->init(2,v);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Yuv_Impl__obj,max,return )

::Array< Float > Yuv_Impl__obj::normalize(::Array< Float > this1){
            	HX_STACK_FRAME("thx.color._Yuv.Yuv_Impl_","normalize",0xb2373c5b,"thx.color._Yuv.Yuv_Impl_.normalize","thx/color/Yuv.hx",63,0x17dfb21b)
            	HX_STACK_ARG(this1,"this1")
HXLINE(  63)		HX_VAR_NAME( ::Array< Float >,this2,"this");
HXDLIN(  63)		HX_VARI( Float,v) = this1->__get((int)0);
HXDLIN(  63)		Float _hx_tmp;
HXDLIN(  63)		if ((v < (int)0)) {
HXLINE(  63)			_hx_tmp = (int)0;
            		}
            		else {
HXLINE(  63)			if ((v > (int)1)) {
HXLINE(  63)				_hx_tmp = (int)1;
            			}
            			else {
HXLINE(  63)				_hx_tmp = v;
            			}
            		}
HXDLIN(  63)		HX_VARI_NAME( Float,v1,"v") = this1->__get((int)1);
HXDLIN(  63)		Float _hx_tmp1;
HXDLIN(  63)		if ((v1 < ((Float)-0.436))) {
HXLINE(  63)			_hx_tmp1 = ((Float)-0.436);
            		}
            		else {
HXLINE(  63)			if ((v1 > ((Float)0.436))) {
HXLINE(  63)				_hx_tmp1 = ((Float)0.436);
            			}
            			else {
HXLINE(  63)				_hx_tmp1 = v1;
            			}
            		}
HXDLIN(  63)		HX_VARI_NAME( Float,v2,"v") = this1->__get((int)2);
HXDLIN(  63)		Float _hx_tmp2;
HXDLIN(  63)		if ((v2 < ((Float)-0.615))) {
HXLINE(  63)			_hx_tmp2 = ((Float)-0.615);
            		}
            		else {
HXLINE(  63)			if ((v2 > ((Float)0.615))) {
HXLINE(  63)				_hx_tmp2 = ((Float)0.615);
            			}
            			else {
HXLINE(  63)				_hx_tmp2 = v2;
            			}
            		}
HXDLIN(  63)		this2 = ::Array_obj< Float >::__new(3)->init(0,_hx_tmp)->init(1,_hx_tmp1)->init(2,_hx_tmp2);
HXDLIN(  63)		return this2;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Yuv_Impl__obj,normalize,return )

::Array< Float > Yuv_Impl__obj::roundTo(::Array< Float > this1,Int decimals){
            	HX_STACK_FRAME("thx.color._Yuv.Yuv_Impl_","roundTo",0xa99b06b7,"thx.color._Yuv.Yuv_Impl_.roundTo","thx/color/Yuv.hx",66,0x17dfb21b)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(decimals,"decimals")
HXLINE(  66)		HX_VARI( Float,y) = ::thx::Floats_obj::roundTo(this1->__get((int)0),decimals);
HXDLIN(  66)		HX_VARI( Float,u) = ::thx::Floats_obj::roundTo(this1->__get((int)1),decimals);
HXDLIN(  66)		HX_VARI( Float,v) = ::thx::Floats_obj::roundTo(this1->__get((int)2),decimals);
HXDLIN(  66)		return ::Array_obj< Float >::__new(3)->init(0,y)->init(1,u)->init(2,v);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Yuv_Impl__obj,roundTo,return )

::Array< Float > Yuv_Impl__obj::withY(::Array< Float > this1,Float newy){
            	HX_STACK_FRAME("thx.color._Yuv.Yuv_Impl_","withY",0xd192d561,"thx.color._Yuv.Yuv_Impl_.withY","thx/color/Yuv.hx",69,0x17dfb21b)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(newy,"newy")
HXLINE(  69)		return ::Array_obj< Float >::__new(3)->init(0,newy)->init(1,this1->__get((int)1))->init(2,this1->__get((int)2));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Yuv_Impl__obj,withY,return )

::Array< Float > Yuv_Impl__obj::withU(::Array< Float > this1,Float newu){
            	HX_STACK_FRAME("thx.color._Yuv.Yuv_Impl_","withU",0xd192d55d,"thx.color._Yuv.Yuv_Impl_.withU","thx/color/Yuv.hx",72,0x17dfb21b)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(newu,"newu")
HXLINE(  72)		return ::Array_obj< Float >::__new(3)->init(0,this1->__get((int)0))->init(1,newu)->init(2,this1->__get((int)2));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Yuv_Impl__obj,withU,return )

::Array< Float > Yuv_Impl__obj::withV(::Array< Float > this1,Float newv){
            	HX_STACK_FRAME("thx.color._Yuv.Yuv_Impl_","withV",0xd192d55e,"thx.color._Yuv.Yuv_Impl_.withV","thx/color/Yuv.hx",75,0x17dfb21b)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(newv,"newv")
HXLINE(  75)		return ::Array_obj< Float >::__new(3)->init(0,this1->__get((int)0))->init(1,this1->__get((int)1))->init(2,newv);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Yuv_Impl__obj,withV,return )

::String Yuv_Impl__obj::toString(::Array< Float > this1){
            	HX_STACK_FRAME("thx.color._Yuv.Yuv_Impl_","toString",0x1605df9e,"thx.color._Yuv.Yuv_Impl_.toString","thx/color/Yuv.hx",78,0x17dfb21b)
            	HX_STACK_ARG(this1,"this1")
HXLINE(  78)		return ((((((HX_("yuv(",ce,ff,53,50) + this1->__get((int)0)) + HX_(",",2c,00,00,00)) + this1->__get((int)1)) + HX_(",",2c,00,00,00)) + this1->__get((int)2)) + HX_(")",29,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Yuv_Impl__obj,toString,return )

Bool Yuv_Impl__obj::equals(::Array< Float > this1,::Array< Float > other){
            	HX_STACK_FRAME("thx.color._Yuv.Yuv_Impl_","equals",0xf853fcb1,"thx.color._Yuv.Yuv_Impl_.equals","thx/color/Yuv.hx",81,0x17dfb21b)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(other,"other")
HXLINE(  81)		return ::thx::color::_Yuv::Yuv_Impl__obj::nearEquals(this1,other,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Yuv_Impl__obj,equals,return )

Bool Yuv_Impl__obj::nearEquals(::Array< Float > this1,::Array< Float > other, ::Dynamic __o_tolerance){
 ::Dynamic tolerance = __o_tolerance.Default(((Float)1e-9));
            	HX_STACK_FRAME("thx.color._Yuv.Yuv_Impl_","nearEquals",0xbb1fa0b9,"thx.color._Yuv.Yuv_Impl_.nearEquals","thx/color/Yuv.hx",84,0x17dfb21b)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(other,"other")
            	HX_STACK_ARG(tolerance,"tolerance")
HXLINE(  84)		Bool _hx_tmp;
HXDLIN(  84)		Bool _hx_tmp1 = ::thx::Floats_obj::nearEquals(this1->__get((int)0),other->__get((int)0),tolerance);
HXDLIN(  84)		if (_hx_tmp1) {
HXLINE(  84)			_hx_tmp = ::thx::Floats_obj::nearEquals(this1->__get((int)1),other->__get((int)1),tolerance);
            		}
            		else {
HXLINE(  84)			_hx_tmp = false;
            		}
HXDLIN(  84)		if (_hx_tmp) {
HXLINE(  84)			return ::thx::Floats_obj::nearEquals(this1->__get((int)2),other->__get((int)2),tolerance);
            		}
            		else {
HXLINE(  84)			return false;
            		}
HXDLIN(  84)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Yuv_Impl__obj,nearEquals,return )

::Array< Float > Yuv_Impl__obj::toLab(::Array< Float > this1){
            	HX_STACK_FRAME("thx.color._Yuv.Yuv_Impl_","toLab",0x1b37ff60,"thx.color._Yuv.Yuv_Impl_.toLab","thx/color/Yuv.hx",87,0x17dfb21b)
            	HX_STACK_ARG(this1,"this1")
HXLINE(  87)		::Array< Float > _hx_tmp = ::thx::color::_Yuv::Yuv_Impl__obj::toXyz(this1);
HXDLIN(  87)		return ::thx::color::_Xyz::Xyz_Impl__obj::toLab(_hx_tmp);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Yuv_Impl__obj,toLab,return )

::Array< Float > Yuv_Impl__obj::toLCh(::Array< Float > this1){
            	HX_STACK_FRAME("thx.color._Yuv.Yuv_Impl_","toLCh",0x1b37e544,"thx.color._Yuv.Yuv_Impl_.toLCh","thx/color/Yuv.hx",90,0x17dfb21b)
            	HX_STACK_ARG(this1,"this1")
HXLINE(  90)		::Array< Float > _hx_tmp = ::thx::color::_Yuv::Yuv_Impl__obj::toLab(this1);
HXDLIN(  90)		return ::thx::color::_Lab::Lab_Impl__obj::toLCh(_hx_tmp);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Yuv_Impl__obj,toLCh,return )

::Array< Float > Yuv_Impl__obj::toLuv(::Array< Float > this1){
            	HX_STACK_FRAME("thx.color._Yuv.Yuv_Impl_","toLuv",0x1b3810e0,"thx.color._Yuv.Yuv_Impl_.toLuv","thx/color/Yuv.hx",93,0x17dfb21b)
            	HX_STACK_ARG(this1,"this1")
HXLINE(  93)		return ::thx::color::_Rgbx::Rgbx_Impl__obj::toLuv(::thx::color::_Yuv::Yuv_Impl__obj::toRgbx(this1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Yuv_Impl__obj,toLuv,return )

::Array< Float > Yuv_Impl__obj::toCmy(::Array< Float > this1){
            	HX_STACK_FRAME("thx.color._Yuv.Yuv_Impl_","toCmy",0x1b3135a2,"thx.color._Yuv.Yuv_Impl_.toCmy","thx/color/Yuv.hx",96,0x17dfb21b)
            	HX_STACK_ARG(this1,"this1")
HXLINE(  96)		return ::thx::color::_Rgbx::Rgbx_Impl__obj::toCmy(::thx::color::_Yuv::Yuv_Impl__obj::toRgbx(this1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Yuv_Impl__obj,toCmy,return )

::Array< Float > Yuv_Impl__obj::toCmyk(::Array< Float > this1){
            	HX_STACK_FRAME("thx.color._Yuv.Yuv_Impl_","toCmyk",0xafddb889,"thx.color._Yuv.Yuv_Impl_.toCmyk","thx/color/Yuv.hx",99,0x17dfb21b)
            	HX_STACK_ARG(this1,"this1")
HXLINE(  99)		return ::thx::color::_Rgbx::Rgbx_Impl__obj::toCmyk(::thx::color::_Yuv::Yuv_Impl__obj::toRgbx(this1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Yuv_Impl__obj,toCmyk,return )

::Array< Float > Yuv_Impl__obj::toCubeHelix(::Array< Float > this1){
            	HX_STACK_FRAME("thx.color._Yuv.Yuv_Impl_","toCubeHelix",0x7f3c129c,"thx.color._Yuv.Yuv_Impl_.toCubeHelix","thx/color/Yuv.hx",102,0x17dfb21b)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 102)		return ::thx::color::_Rgbx::Rgbx_Impl__obj::toCubeHelixWithGamma(::thx::color::_Yuv::Yuv_Impl__obj::toRgbx(this1),(int)1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Yuv_Impl__obj,toCubeHelix,return )

Float Yuv_Impl__obj::toGrey(::Array< Float > this1){
            	HX_STACK_FRAME("thx.color._Yuv.Yuv_Impl_","toGrey",0xb2864cec,"thx.color._Yuv.Yuv_Impl_.toGrey","thx/color/Yuv.hx",105,0x17dfb21b)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 105)		return ::thx::color::_Rgbx::Rgbx_Impl__obj::toGrey(::thx::color::_Yuv::Yuv_Impl__obj::toRgbx(this1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Yuv_Impl__obj,toGrey,return )

::Array< Float > Yuv_Impl__obj::toHsl(::Array< Float > this1){
            	HX_STACK_FRAME("thx.color._Yuv.Yuv_Impl_","toHsl",0x1b350614,"thx.color._Yuv.Yuv_Impl_.toHsl","thx/color/Yuv.hx",108,0x17dfb21b)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 108)		return ::thx::color::_Rgbx::Rgbx_Impl__obj::toHsl(::thx::color::_Yuv::Yuv_Impl__obj::toRgbx(this1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Yuv_Impl__obj,toHsl,return )

::Array< Float > Yuv_Impl__obj::toHsv(::Array< Float > this1){
            	HX_STACK_FRAME("thx.color._Yuv.Yuv_Impl_","toHsv",0x1b35061e,"thx.color._Yuv.Yuv_Impl_.toHsv","thx/color/Yuv.hx",111,0x17dfb21b)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 111)		return ::thx::color::_Rgbx::Rgbx_Impl__obj::toHsv(::thx::color::_Yuv::Yuv_Impl__obj::toRgbx(this1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Yuv_Impl__obj,toHsv,return )

::Array< Float > Yuv_Impl__obj::toHunterLab(::Array< Float > this1){
            	HX_STACK_FRAME("thx.color._Yuv.Yuv_Impl_","toHunterLab",0x4b6d63c0,"thx.color._Yuv.Yuv_Impl_.toHunterLab","thx/color/Yuv.hx",114,0x17dfb21b)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 114)		::Array< Float > _hx_tmp = ::thx::color::_Yuv::Yuv_Impl__obj::toXyz(this1);
HXDLIN( 114)		return ::thx::color::_Xyz::Xyz_Impl__obj::toHunterLab(_hx_tmp);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Yuv_Impl__obj,toHunterLab,return )

Int Yuv_Impl__obj::toRgb(::Array< Float > this1){
            	HX_STACK_FRAME("thx.color._Yuv.Yuv_Impl_","toRgb",0x1b3c9220,"thx.color._Yuv.Yuv_Impl_.toRgb","thx/color/Yuv.hx",117,0x17dfb21b)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 117)		return ::thx::color::_Rgbx::Rgbx_Impl__obj::toRgb(::thx::color::_Yuv::Yuv_Impl__obj::toRgbx(this1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Yuv_Impl__obj,toRgb,return )

Int Yuv_Impl__obj::toRgba(::Array< Float > this1){
            	HX_STACK_FRAME("thx.color._Yuv.Yuv_Impl_","toRgba",0xb9c34a41,"thx.color._Yuv.Yuv_Impl_.toRgba","thx/color/Yuv.hx",120,0x17dfb21b)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 120)		::Array< Float > _hx_tmp = ::thx::color::_Yuv::Yuv_Impl__obj::toRgbxa(this1);
HXDLIN( 120)		return ::thx::color::_Rgbxa::Rgbxa_Impl__obj::toRgba(_hx_tmp);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Yuv_Impl__obj,toRgba,return )

::Array< Float > Yuv_Impl__obj::toRgbx(::Array< Float > this1){
            	HX_STACK_FRAME("thx.color._Yuv.Yuv_Impl_","toRgbx",0xb9c34a58,"thx.color._Yuv.Yuv_Impl_.toRgbx","thx/color/Yuv.hx",127,0x17dfb21b)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 127)		return ::Array_obj< Float >::__new(3)->init(0,(this1->__get((int)0) + (((Float)1.139837398373983740) * this1->__get((int)2))))->init(1,((this1->__get((int)0) - (((Float)0.3946517043589703515) * this1->__get((int)1))) - (((Float)0.5805986066674976801) * this1->__get((int)2))))->init(2,(this1->__get((int)0) + (((Float)2.032110091743119266) * this1->__get((int)1))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Yuv_Impl__obj,toRgbx,return )

::Array< Float > Yuv_Impl__obj::toRgbxa(::Array< Float > this1){
            	HX_STACK_FRAME("thx.color._Yuv.Yuv_Impl_","toRgbxa",0xd11dc309,"thx.color._Yuv.Yuv_Impl_.toRgbxa","thx/color/Yuv.hx",131,0x17dfb21b)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 131)		return ::thx::color::_Rgbx::Rgbx_Impl__obj::toRgbxa(::thx::color::_Yuv::Yuv_Impl__obj::toRgbx(this1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Yuv_Impl__obj,toRgbxa,return )

Float Yuv_Impl__obj::toTemperature(::Array< Float > this1){
            	HX_STACK_FRAME("thx.color._Yuv.Yuv_Impl_","toTemperature",0x7e703647,"thx.color._Yuv.Yuv_Impl_.toTemperature","thx/color/Yuv.hx",134,0x17dfb21b)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 134)		return ::thx::color::_Rgbx::Rgbx_Impl__obj::toTemperature(::thx::color::_Yuv::Yuv_Impl__obj::toRgbx(this1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Yuv_Impl__obj,toTemperature,return )

::Array< Float > Yuv_Impl__obj::toYxy(::Array< Float > this1){
            	HX_STACK_FRAME("thx.color._Yuv.Yuv_Impl_","toYxy",0x1b41f0cd,"thx.color._Yuv.Yuv_Impl_.toYxy","thx/color/Yuv.hx",137,0x17dfb21b)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 137)		return ::thx::color::_Rgbx::Rgbx_Impl__obj::toYxy(::thx::color::_Yuv::Yuv_Impl__obj::toRgbx(this1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Yuv_Impl__obj,toYxy,return )

::Array< Float > Yuv_Impl__obj::toXyz(::Array< Float > this1){
            	HX_STACK_FRAME("thx.color._Yuv.Yuv_Impl_","toXyz",0x1b412f6c,"thx.color._Yuv.Yuv_Impl_.toXyz","thx/color/Yuv.hx",140,0x17dfb21b)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 140)		return ::thx::color::_Rgbx::Rgbx_Impl__obj::toXyz(::thx::color::_Yuv::Yuv_Impl__obj::toRgbx(this1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Yuv_Impl__obj,toXyz,return )

Float Yuv_Impl__obj::get_y(::Array< Float > this1){
            	HX_STACK_FRAME("thx.color._Yuv.Yuv_Impl_","get_y",0x9884ab1e,"thx.color._Yuv.Yuv_Impl_.get_y","thx/color/Yuv.hx",143,0x17dfb21b)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 143)		return this1->__get((int)0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Yuv_Impl__obj,get_y,return )

Float Yuv_Impl__obj::get_u(::Array< Float > this1){
            	HX_STACK_FRAME("thx.color._Yuv.Yuv_Impl_","get_u",0x9884ab1a,"thx.color._Yuv.Yuv_Impl_.get_u","thx/color/Yuv.hx",145,0x17dfb21b)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 145)		return this1->__get((int)1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Yuv_Impl__obj,get_u,return )

Float Yuv_Impl__obj::get_v(::Array< Float > this1){
            	HX_STACK_FRAME("thx.color._Yuv.Yuv_Impl_","get_v",0x9884ab1b,"thx.color._Yuv.Yuv_Impl_.get_v","thx/color/Yuv.hx",147,0x17dfb21b)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 147)		return this1->__get((int)2);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Yuv_Impl__obj,get_v,return )


Yuv_Impl__obj::Yuv_Impl__obj()
{
}

bool Yuv_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { outValue = min_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"max") ) { outValue = max_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"withY") ) { outValue = withY_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"withU") ) { outValue = withU_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"withV") ) { outValue = withV_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toLab") ) { outValue = toLab_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toLCh") ) { outValue = toLCh_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toLuv") ) { outValue = toLuv_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toCmy") ) { outValue = toCmy_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toHsl") ) { outValue = toHsl_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toHsv") ) { outValue = toHsv_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toRgb") ) { outValue = toRgb_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toYxy") ) { outValue = toYxy_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toXyz") ) { outValue = toXyz_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_y") ) { outValue = get_y_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_u") ) { outValue = get_u_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_v") ) { outValue = get_v_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"equals") ) { outValue = equals_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toCmyk") ) { outValue = toCmyk_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toGrey") ) { outValue = toGrey_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toRgba") ) { outValue = toRgba_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toRgbx") ) { outValue = toRgbx_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"roundTo") ) { outValue = roundTo_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toRgbxa") ) { outValue = toRgbxa_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"normalize") ) { outValue = normalize_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromFloats") ) { outValue = fromFloats_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"nearEquals") ) { outValue = nearEquals_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"interpolate") ) { outValue = interpolate_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toCubeHelix") ) { outValue = toCubeHelix_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toHunterLab") ) { outValue = toHunterLab_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"toTemperature") ) { outValue = toTemperature_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Yuv_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Yuv_Impl__obj_sStaticStorageInfo = 0;
#endif

static void Yuv_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Yuv_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Yuv_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Yuv_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class Yuv_Impl__obj::__mClass;

static ::String Yuv_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("fromFloats","\x61","\x28","\x9a","\x84"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("interpolate","\xc1","\xd4","\x32","\x1f"),
	HX_HCSTRING("min","\x92","\x11","\x53","\x00"),
	HX_HCSTRING("max","\xa4","\x0a","\x53","\x00"),
	HX_HCSTRING("normalize","\x8d","\x37","\xa1","\xab"),
	HX_HCSTRING("roundTo","\x69","\x71","\x0f","\x8d"),
	HX_HCSTRING("withY","\x93","\xcf","\x6e","\xca"),
	HX_HCSTRING("withU","\x8f","\xcf","\x6e","\xca"),
	HX_HCSTRING("withV","\x90","\xcf","\x6e","\xca"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("equals","\x3f","\xee","\xf2","\xbf"),
	HX_HCSTRING("nearEquals","\x47","\x71","\x71","\xfe"),
	HX_HCSTRING("toLab","\x92","\xf9","\x13","\x14"),
	HX_HCSTRING("toLCh","\x76","\xdf","\x13","\x14"),
	HX_HCSTRING("toLuv","\x12","\x0b","\x14","\x14"),
	HX_HCSTRING("toCmy","\xd4","\x2f","\x0d","\x14"),
	HX_HCSTRING("toCmyk","\x17","\xaa","\x7c","\x77"),
	HX_HCSTRING("toCubeHelix","\x4e","\xbe","\x80","\x23"),
	HX_HCSTRING("toGrey","\x7a","\x3e","\x25","\x7a"),
	HX_HCSTRING("toHsl","\x46","\x00","\x11","\x14"),
	HX_HCSTRING("toHsv","\x50","\x00","\x11","\x14"),
	HX_HCSTRING("toHunterLab","\x72","\x0f","\xb2","\xef"),
	HX_HCSTRING("toRgb","\x52","\x8c","\x18","\x14"),
	HX_HCSTRING("toRgba","\xcf","\x3b","\x62","\x81"),
	HX_HCSTRING("toRgbx","\xe6","\x3b","\x62","\x81"),
	HX_HCSTRING("toRgbxa","\xbb","\x2d","\x92","\xb4"),
	HX_HCSTRING("toTemperature","\x79","\xb2","\xfc","\x3d"),
	HX_HCSTRING("toYxy","\xff","\xea","\x1d","\x14"),
	HX_HCSTRING("toXyz","\x9e","\x29","\x1d","\x14"),
	HX_HCSTRING("get_y","\x50","\xa5","\x60","\x91"),
	HX_HCSTRING("get_u","\x4c","\xa5","\x60","\x91"),
	HX_HCSTRING("get_v","\x4d","\xa5","\x60","\x91"),
	::String(null())
};

void Yuv_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("thx.color._Yuv.Yuv_Impl_","\xbc","\xf7","\xe2","\x4d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Yuv_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Yuv_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Yuv_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Yuv_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Yuv_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Yuv_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Yuv_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace thx
} // end namespace color
} // end namespace _Yuv
