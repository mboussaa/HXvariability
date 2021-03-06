// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_TS16
#include <TS16.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_thx_color_TestTemperature
#include <thx/color/TestTemperature.h>
#endif
#ifndef INCLUDED_utest_Runner
#include <utest/Runner.h>
#endif
#ifndef INCLUDED_utest_ui_Report
#include <utest/ui/Report.h>
#endif
#ifndef INCLUDED_utest_ui_common_HeaderDisplayMode
#include <utest/ui/common/HeaderDisplayMode.h>
#endif
#ifndef INCLUDED_utest_ui_common_IReport
#include <utest/ui/common/IReport.h>
#endif
#ifndef INCLUDED_utest_ui_common_SuccessResultsDisplayMode
#include <utest/ui/common/SuccessResultsDisplayMode.h>
#endif


void TS16_obj::__construct() { }

Dynamic TS16_obj::__CreateEmpty() { return new TS16_obj; }

hx::ObjectPtr< TS16_obj > TS16_obj::__new()
{
	hx::ObjectPtr< TS16_obj > _hx_result = new TS16_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic TS16_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TS16_obj > _hx_result = new TS16_obj();
	_hx_result->__construct();
	return _hx_result;
}

void TS16_obj::addTests( ::utest::Runner runner){
            	HX_STACK_FRAME("TS16","addTests",0xdcd50d8a,"TS16.addTests","TS16.hx",8,0x2f211f1a)
            	HX_STACK_ARG(runner,"runner")
HXLINE(  15)		HX_VARI( ::String,w) = HX_("",00,00,00,00);
HXLINE(  16)		{
HXLINE(  16)			HX_VARI( Int,_g) = (int)0;
HXDLIN(  16)			HX_VARI( ::Array< ::String >,_g1) = ::Sys_obj::args();
HXDLIN(  16)			while((_g < _g1->length)){
HXLINE(  16)				HX_VARI( ::String,arg) = _g1->__get(_g);
HXDLIN(  16)				++_g;
HXLINE(  17)				w = arg;
            			}
            		}
HXLINE(  18)		::haxe::Log_obj::trace((HX_("The value of loop_wrapper is ",79,76,58,6c) + w),hx::SourceInfo(HX_("TS16.hx",1a,1f,21,2f),18,HX_("TS16",24,12,c5,37),HX_("addTests",00,a6,f2,86)));
HXLINE(  20)		HX_VARI( Int,x) = ::Std_obj::parseInt(w);
HXLINE(  21)		runner->addCase( ::thx::color::TestTemperature_obj::__new(x),null(),null(),null(),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TS16_obj,addTests,(void))

void TS16_obj::main(){
            	HX_STACK_FRAME("TS16","main",0x143792c3,"TS16.main","TS16.hx",24,0x2f211f1a)
HXLINE(  26)		HX_VARI(  ::utest::Runner,runner) =  ::utest::Runner_obj::__new();
HXLINE(  27)		::TS16_obj::addTests(runner);
HXLINE(  28)		::utest::ui::Report_obj::create(runner,null(),null());
HXLINE(  29)		runner->run();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(TS16_obj,main,(void))


TS16_obj::TS16_obj()
{
}

bool TS16_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { outValue = main_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addTests") ) { outValue = addTests_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *TS16_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *TS16_obj_sStaticStorageInfo = 0;
#endif

static void TS16_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TS16_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TS16_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TS16_obj::__mClass,"__mClass");
};

#endif

hx::Class TS16_obj::__mClass;

static ::String TS16_obj_sStaticFields[] = {
	HX_HCSTRING("addTests","\x00","\xa6","\xf2","\x86"),
	HX_HCSTRING("main","\x39","\x38","\x56","\x48"),
	::String(null())
};

void TS16_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("TS16","\x24","\x12","\xc5","\x37");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TS16_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TS16_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(TS16_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< TS16_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TS16_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TS16_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TS16_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

