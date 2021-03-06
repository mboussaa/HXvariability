// Generated by Haxe 3.3.0
#ifndef INCLUDED_utest_Runner
#define INCLUDED_utest_Runner

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS1(utest,Dispatcher)
HX_DECLARE_CLASS1(utest,Runner)
HX_DECLARE_CLASS1(utest,TestFixture)
HX_DECLARE_CLASS1(utest,TestHandler)

namespace utest{


class HXCPP_CLASS_ATTRIBUTES Runner_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Runner_obj OBJ_;
		Runner_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="utest.Runner")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"utest.Runner"); }
		static hx::ObjectPtr< Runner_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Runner_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Runner","\x10","\xbe","\x2e","\x70"); }

		::Array< ::Dynamic> fixtures;
		 ::utest::Dispatcher onProgress;
		 ::utest::Dispatcher onStart;
		 ::utest::Dispatcher onComplete;
		 ::utest::Dispatcher onPrecheck;
		 ::utest::Dispatcher onTestStart;
		 ::utest::Dispatcher onTestComplete;
		Int length;
		 ::EReg globalPattern;
		void addCase( ::Dynamic test,::String setup,::String teardown,::String prefix, ::EReg pattern);
		::Dynamic addCase_dyn();

		void addFixture( ::utest::TestFixture fixture);
		::Dynamic addFixture_dyn();

		 ::utest::TestFixture getFixture(Int index);
		::Dynamic getFixture_dyn();

		Bool isMethod( ::Dynamic test,::String name);
		::Dynamic isMethod_dyn();

		Int pos;
		void run();
		::Dynamic run_dyn();

		void runNext();
		::Dynamic runNext_dyn();

		void runFixture( ::utest::TestFixture fixture);
		::Dynamic runFixture_dyn();

		void testComplete( ::utest::TestHandler h);
		::Dynamic testComplete_dyn();

};

} // end namespace utest

#endif /* INCLUDED_utest_Runner */ 
