// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED__List_ListIterator
#include <_List/ListIterator.h>
#endif
#ifndef INCLUDED__List_ListNode
#include <_List/ListNode.h>
#endif

namespace _List{

void ListIterator_obj::__construct( ::_List::ListNode head){
            	HX_STACK_FRAME("_List.ListIterator","new",0x1ee472af,"_List.ListIterator.new","/usr/lib/haxe/std/List.hx",269,0xd5566cff)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(head,"head")
HXLINE( 269)		this->head = head;
            	}

Dynamic ListIterator_obj::__CreateEmpty() { return new ListIterator_obj; }

hx::ObjectPtr< ListIterator_obj > ListIterator_obj::__new( ::_List::ListNode head)
{
	hx::ObjectPtr< ListIterator_obj > _hx_result = new ListIterator_obj();
	_hx_result->__construct(head);
	return _hx_result;
}

Dynamic ListIterator_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ListIterator_obj > _hx_result = new ListIterator_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

Bool ListIterator_obj::hasNext(){
            	HX_STACK_FRAME("_List.ListIterator","hasNext",0x25781b3c,"_List.ListIterator.hasNext","/usr/lib/haxe/std/List.hx",273,0xd5566cff)
            	HX_STACK_THIS(this)
HXLINE( 273)		return hx::IsNotNull( this->head );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListIterator_obj,hasNext,return )

 ::Dynamic ListIterator_obj::next(){
            	HX_STACK_FRAME("_List.ListIterator","next",0xe8ffe7c4,"_List.ListIterator.next","/usr/lib/haxe/std/List.hx",276,0xd5566cff)
            	HX_STACK_THIS(this)
HXLINE( 277)		HX_VARI(  ::Dynamic,val) = this->head->item;
HXLINE( 278)		this->head = this->head->next;
HXLINE( 279)		return val;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListIterator_obj,next,return )


ListIterator_obj::ListIterator_obj()
{
}

void ListIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ListIterator);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ListIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(head,"head");
}

hx::Val ListIterator_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { return hx::Val( head); }
		if (HX_FIELD_EQ(inName,"next") ) { return hx::Val( next_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNext") ) { return hx::Val( hasNext_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ListIterator_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast<  ::_List::ListNode >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ListIterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("head","\x20","\x29","\x0b","\x45"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ListIterator_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::_List::ListNode*/ ,(int)offsetof(ListIterator_obj,head),HX_HCSTRING("head","\x20","\x29","\x0b","\x45")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ListIterator_obj_sStaticStorageInfo = 0;
#endif

static ::String ListIterator_obj_sMemberFields[] = {
	HX_HCSTRING("head","\x20","\x29","\x0b","\x45"),
	HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	::String(null()) };

static void ListIterator_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ListIterator_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ListIterator_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ListIterator_obj::__mClass,"__mClass");
};

#endif

hx::Class ListIterator_obj::__mClass;

void ListIterator_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("_List.ListIterator","\x3d","\xef","\x93","\xd6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ListIterator_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ListIterator_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ListIterator_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ListIterator_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ListIterator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ListIterator_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace _List
