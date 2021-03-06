// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_thx_RangeIterator
#include <thx/RangeIterator.h>
#endif

namespace thx{

void RangeIterator_obj::__construct(Int start, ::Dynamic stop,hx::Null< Int >  __o_step){
Int step = __o_step.Default(1);
            	HX_STACK_FRAME("thx.RangeIterator","new",0xa7e810b3,"thx.RangeIterator.new","thx/Ints.hx",279,0xd1f81caf)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(start,"start")
            	HX_STACK_ARG(stop,"stop")
            	HX_STACK_ARG(step,"step")
HXLINE( 280)		this->current = start;
HXLINE( 281)		this->stop = stop;
HXLINE( 282)		this->step = step;
            	}

Dynamic RangeIterator_obj::__CreateEmpty() { return new RangeIterator_obj; }

hx::ObjectPtr< RangeIterator_obj > RangeIterator_obj::__new(Int start, ::Dynamic stop,hx::Null< Int >  __o_step)
{
	hx::ObjectPtr< RangeIterator_obj > _hx_result = new RangeIterator_obj();
	_hx_result->__construct(start,stop,__o_step);
	return _hx_result;
}

Dynamic RangeIterator_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< RangeIterator_obj > _hx_result = new RangeIterator_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

Bool RangeIterator_obj::hasNext(){
            	HX_STACK_FRAME("thx.RangeIterator","hasNext",0x893d0b40,"thx.RangeIterator.hasNext","thx/Ints.hx",286,0xd1f81caf)
            	HX_STACK_THIS(this)
HXLINE( 286)		Bool _hx_tmp;
HXDLIN( 286)		if (hx::IsNotNull( this->stop )) {
HXLINE( 286)			if ((this->step >= (int)0)) {
HXLINE( 286)				_hx_tmp = hx::IsLess( this->current,this->stop );
            			}
            			else {
HXLINE( 286)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE( 286)			_hx_tmp = true;
            		}
HXDLIN( 286)		if (!(_hx_tmp)) {
HXLINE( 286)			if ((this->step < (int)0)) {
HXLINE( 286)				return hx::IsGreater( this->current,this->stop );
            			}
            			else {
HXLINE( 286)				return false;
            			}
            		}
            		else {
HXLINE( 286)			return true;
            		}
HXDLIN( 286)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(RangeIterator_obj,hasNext,return )

Int RangeIterator_obj::next(){
            	HX_STACK_FRAME("thx.RangeIterator","next",0x43268d40,"thx.RangeIterator.next","thx/Ints.hx",289,0xd1f81caf)
            	HX_STACK_THIS(this)
HXLINE( 290)		HX_VARI( Int,result) = this->current;
HXLINE( 291)		hx::AddEq(this->current,this->step);
HXLINE( 292)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC0(RangeIterator_obj,next,return )


RangeIterator_obj::RangeIterator_obj()
{
}

void RangeIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RangeIterator);
	HX_MARK_MEMBER_NAME(current,"current");
	HX_MARK_MEMBER_NAME(stop,"stop");
	HX_MARK_MEMBER_NAME(step,"step");
	HX_MARK_END_CLASS();
}

void RangeIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(current,"current");
	HX_VISIT_MEMBER_NAME(stop,"stop");
	HX_VISIT_MEMBER_NAME(step,"step");
}

hx::Val RangeIterator_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return hx::Val( stop); }
		if (HX_FIELD_EQ(inName,"step") ) { return hx::Val( step); }
		if (HX_FIELD_EQ(inName,"next") ) { return hx::Val( next_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { return hx::Val( current); }
		if (HX_FIELD_EQ(inName,"hasNext") ) { return hx::Val( hasNext_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val RangeIterator_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { stop=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"step") ) { step=inValue.Cast< Int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { current=inValue.Cast< Int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RangeIterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb"));
	outFields->push(HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"));
	outFields->push(HX_HCSTRING("step","\x4c","\xe7","\x5b","\x4c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo RangeIterator_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(RangeIterator_obj,current),HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(RangeIterator_obj,stop),HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c")},
	{hx::fsInt,(int)offsetof(RangeIterator_obj,step),HX_HCSTRING("step","\x4c","\xe7","\x5b","\x4c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *RangeIterator_obj_sStaticStorageInfo = 0;
#endif

static ::String RangeIterator_obj_sMemberFields[] = {
	HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("step","\x4c","\xe7","\x5b","\x4c"),
	HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	::String(null()) };

static void RangeIterator_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RangeIterator_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void RangeIterator_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RangeIterator_obj::__mClass,"__mClass");
};

#endif

hx::Class RangeIterator_obj::__mClass;

void RangeIterator_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("thx.RangeIterator","\x41","\x3b","\x67","\xb8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = RangeIterator_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(RangeIterator_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RangeIterator_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = RangeIterator_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RangeIterator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RangeIterator_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace thx
