#include <hxcpp.h>

#ifndef INCLUDED_admob_AD
#include <admob/AD.h>
#endif
#ifndef INCLUDED_openfl_utils_JNI
#include <openfl/utils/JNI.h>
#endif
namespace admob{

Void AD_obj::__construct()
{
	return null();
}

//AD_obj::~AD_obj() { }

Dynamic AD_obj::__CreateEmpty() { return  new AD_obj; }
hx::ObjectPtr< AD_obj > AD_obj::__new()
{  hx::ObjectPtr< AD_obj > result = new AD_obj();
	result->__construct();
	return result;}

Dynamic AD_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AD_obj > result = new AD_obj();
	result->__construct();
	return result;}

int AD_obj::LEFT;

int AD_obj::RIGHT;

int AD_obj::CENTER;

int AD_obj::TOP;

int AD_obj::BOTTOM;

int AD_obj::BANNER_PORTRAIT;

int AD_obj::BANNER_LANDSCAPE;

::String AD_obj::admobID;

int AD_obj::originX;

int AD_obj::originY;

int AD_obj::bannerSize;

bool AD_obj::testMode;

::String AD_obj::admobInterstitialID;

bool AD_obj::testModeInterstitial;

Dynamic AD_obj::_initAd_func;

Dynamic AD_obj::_hideAd_func;

Dynamic AD_obj::_showAd_func;

Dynamic AD_obj::_initInterstitial_func;

Dynamic AD_obj::_showInterstitial_func;

Void AD_obj::init( ::String id,hx::Null< int >  __o_x,hx::Null< int >  __o_y,hx::Null< int >  __o_size,hx::Null< bool >  __o_test){
int x = __o_x.Default(0);
int y = __o_y.Default(0);
int size = __o_size.Default(0);
bool test = __o_test.Default(false);
	HX_STACK_FRAME("admob.AD","init",0xe49052ca,"admob.AD.init","admob/AD.hx",32,0xdf258ca9)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(size,"size")
	HX_STACK_ARG(test,"test")
{
		HX_STACK_LINE(33)
		::admob::AD_obj::admobID = id;
		HX_STACK_LINE(34)
		::admob::AD_obj::originX = x;
		HX_STACK_LINE(35)
		::admob::AD_obj::originY = y;
		HX_STACK_LINE(36)
		::admob::AD_obj::bannerSize = size;
		HX_STACK_LINE(37)
		::admob::AD_obj::testMode = test;
		HX_STACK_LINE(40)
		if (((::admob::AD_obj::_initAd_func == null()))){
			HX_STACK_LINE(41)
			Dynamic _g = ::openfl::utils::JNI_obj::createStaticMethod(HX_CSTRING("org.haxe.lime.GameActivity"),HX_CSTRING("initAd"),HX_CSTRING("(Ljava/lang/String;IIZ)V"),true,null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(41)
			::admob::AD_obj::_initAd_func = _g;
		}
		HX_STACK_LINE(45)
		Dynamic args = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(args,"args");
		HX_STACK_LINE(46)
		args->__Field(HX_CSTRING("push"),true)(::admob::AD_obj::admobID);
		HX_STACK_LINE(47)
		args->__Field(HX_CSTRING("push"),true)(::admob::AD_obj::originX);
		HX_STACK_LINE(48)
		args->__Field(HX_CSTRING("push"),true)(::admob::AD_obj::originY);
		HX_STACK_LINE(49)
		args->__Field(HX_CSTRING("push"),true)(::admob::AD_obj::testMode);
		HX_STACK_LINE(50)
		::admob::AD_obj::_initAd_func(args);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(AD_obj,init,(void))

Void AD_obj::show( ){
{
		HX_STACK_FRAME("admob.AD","show",0xeb27ecb7,"admob.AD.show","admob/AD.hx",53,0xdf258ca9)
		HX_STACK_LINE(54)
		if (((::admob::AD_obj::_showAd_func == null()))){
			HX_STACK_LINE(55)
			Dynamic _g = ::openfl::utils::JNI_obj::createStaticMethod(HX_CSTRING("org.haxe.lime.GameActivity"),HX_CSTRING("showAd"),HX_CSTRING("()V"),true,null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(55)
			::admob::AD_obj::_showAd_func = _g;
		}
		HX_STACK_LINE(58)
		Dynamic _g1 = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(58)
		::admob::AD_obj::_showAd_func(_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AD_obj,show,(void))

Void AD_obj::hide( ){
{
		HX_STACK_FRAME("admob.AD","hide",0xe3e34c7c,"admob.AD.hide","admob/AD.hx",61,0xdf258ca9)
		HX_STACK_LINE(62)
		if (((::admob::AD_obj::_hideAd_func == null()))){
			HX_STACK_LINE(63)
			Dynamic _g = ::openfl::utils::JNI_obj::createStaticMethod(HX_CSTRING("org.haxe.lime.GameActivity"),HX_CSTRING("hideAd"),HX_CSTRING("()V"),true,null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(63)
			::admob::AD_obj::_hideAd_func = _g;
		}
		HX_STACK_LINE(66)
		Dynamic _g1 = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(66)
		::admob::AD_obj::_hideAd_func(_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AD_obj,hide,(void))

Void AD_obj::refresh( ){
{
		HX_STACK_FRAME("admob.AD","refresh",0x3045d261,"admob.AD.refresh","admob/AD.hx",69,0xdf258ca9)
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AD_obj,refresh,(void))

Void AD_obj::initInterstitial( ::String id,hx::Null< bool >  __o_test){
bool test = __o_test.Default(false);
	HX_STACK_FRAME("admob.AD","initInterstitial",0xf2dc2096,"admob.AD.initInterstitial","admob/AD.hx",72,0xdf258ca9)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(test,"test")
{
		HX_STACK_LINE(73)
		::admob::AD_obj::admobInterstitialID = id;
		HX_STACK_LINE(74)
		::admob::AD_obj::testModeInterstitial = test;
		HX_STACK_LINE(77)
		if (((::admob::AD_obj::_initInterstitial_func == null()))){
			HX_STACK_LINE(78)
			Dynamic _g = ::openfl::utils::JNI_obj::createStaticMethod(HX_CSTRING("org.haxe.lime.GameActivity"),HX_CSTRING("initInterstitial"),HX_CSTRING("(Ljava/lang/String;Z)V"),true,null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(78)
			::admob::AD_obj::_initInterstitial_func = _g;
		}
		HX_STACK_LINE(83)
		Dynamic args = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(args,"args");
		HX_STACK_LINE(84)
		args->__Field(HX_CSTRING("push"),true)(::admob::AD_obj::admobInterstitialID);
		HX_STACK_LINE(85)
		args->__Field(HX_CSTRING("push"),true)(::admob::AD_obj::testModeInterstitial);
		HX_STACK_LINE(86)
		::admob::AD_obj::_initInterstitial_func(args);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AD_obj,initInterstitial,(void))

Void AD_obj::showInterstitial( ){
{
		HX_STACK_FRAME("admob.AD","showInterstitial",0x9e296a03,"admob.AD.showInterstitial","admob/AD.hx",89,0xdf258ca9)
		HX_STACK_LINE(90)
		if (((::admob::AD_obj::_showInterstitial_func == null()))){
			HX_STACK_LINE(91)
			Dynamic _g = ::openfl::utils::JNI_obj::createStaticMethod(HX_CSTRING("org.haxe.lime.GameActivity"),HX_CSTRING("showInterstitial"),HX_CSTRING("()V"),true,null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(91)
			::admob::AD_obj::_showInterstitial_func = _g;
		}
		HX_STACK_LINE(96)
		Dynamic _g1 = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(96)
		::admob::AD_obj::_showInterstitial_func(_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AD_obj,showInterstitial,(void))


AD_obj::AD_obj()
{
}

Dynamic AD_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"TOP") ) { return TOP; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"LEFT") ) { return LEFT; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		if (HX_FIELD_EQ(inName,"hide") ) { return hide_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"RIGHT") ) { return RIGHT; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"CENTER") ) { return CENTER; }
		if (HX_FIELD_EQ(inName,"BOTTOM") ) { return BOTTOM; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"admobID") ) { return admobID; }
		if (HX_FIELD_EQ(inName,"originX") ) { return originX; }
		if (HX_FIELD_EQ(inName,"originY") ) { return originY; }
		if (HX_FIELD_EQ(inName,"refresh") ) { return refresh_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"testMode") ) { return testMode; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bannerSize") ) { return bannerSize; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_initAd_func") ) { return _initAd_func; }
		if (HX_FIELD_EQ(inName,"_hideAd_func") ) { return _hideAd_func; }
		if (HX_FIELD_EQ(inName,"_showAd_func") ) { return _showAd_func; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"BANNER_PORTRAIT") ) { return BANNER_PORTRAIT; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"BANNER_LANDSCAPE") ) { return BANNER_LANDSCAPE; }
		if (HX_FIELD_EQ(inName,"initInterstitial") ) { return initInterstitial_dyn(); }
		if (HX_FIELD_EQ(inName,"showInterstitial") ) { return showInterstitial_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"admobInterstitialID") ) { return admobInterstitialID; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"testModeInterstitial") ) { return testModeInterstitial; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_initInterstitial_func") ) { return _initInterstitial_func; }
		if (HX_FIELD_EQ(inName,"_showInterstitial_func") ) { return _showInterstitial_func; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AD_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"TOP") ) { TOP=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"LEFT") ) { LEFT=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"RIGHT") ) { RIGHT=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"CENTER") ) { CENTER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BOTTOM") ) { BOTTOM=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"admobID") ) { admobID=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"originX") ) { originX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"originY") ) { originY=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"testMode") ) { testMode=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bannerSize") ) { bannerSize=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_initAd_func") ) { _initAd_func=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_hideAd_func") ) { _hideAd_func=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_showAd_func") ) { _showAd_func=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"BANNER_PORTRAIT") ) { BANNER_PORTRAIT=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"BANNER_LANDSCAPE") ) { BANNER_LANDSCAPE=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"admobInterstitialID") ) { admobInterstitialID=inValue.Cast< ::String >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"testModeInterstitial") ) { testModeInterstitial=inValue.Cast< bool >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_initInterstitial_func") ) { _initInterstitial_func=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_showInterstitial_func") ) { _showInterstitial_func=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AD_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("LEFT"),
	HX_CSTRING("RIGHT"),
	HX_CSTRING("CENTER"),
	HX_CSTRING("TOP"),
	HX_CSTRING("BOTTOM"),
	HX_CSTRING("BANNER_PORTRAIT"),
	HX_CSTRING("BANNER_LANDSCAPE"),
	HX_CSTRING("admobID"),
	HX_CSTRING("originX"),
	HX_CSTRING("originY"),
	HX_CSTRING("bannerSize"),
	HX_CSTRING("testMode"),
	HX_CSTRING("admobInterstitialID"),
	HX_CSTRING("testModeInterstitial"),
	HX_CSTRING("_initAd_func"),
	HX_CSTRING("_hideAd_func"),
	HX_CSTRING("_showAd_func"),
	HX_CSTRING("_initInterstitial_func"),
	HX_CSTRING("_showInterstitial_func"),
	HX_CSTRING("init"),
	HX_CSTRING("show"),
	HX_CSTRING("hide"),
	HX_CSTRING("refresh"),
	HX_CSTRING("initInterstitial"),
	HX_CSTRING("showInterstitial"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AD_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AD_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(AD_obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(AD_obj::CENTER,"CENTER");
	HX_MARK_MEMBER_NAME(AD_obj::TOP,"TOP");
	HX_MARK_MEMBER_NAME(AD_obj::BOTTOM,"BOTTOM");
	HX_MARK_MEMBER_NAME(AD_obj::BANNER_PORTRAIT,"BANNER_PORTRAIT");
	HX_MARK_MEMBER_NAME(AD_obj::BANNER_LANDSCAPE,"BANNER_LANDSCAPE");
	HX_MARK_MEMBER_NAME(AD_obj::admobID,"admobID");
	HX_MARK_MEMBER_NAME(AD_obj::originX,"originX");
	HX_MARK_MEMBER_NAME(AD_obj::originY,"originY");
	HX_MARK_MEMBER_NAME(AD_obj::bannerSize,"bannerSize");
	HX_MARK_MEMBER_NAME(AD_obj::testMode,"testMode");
	HX_MARK_MEMBER_NAME(AD_obj::admobInterstitialID,"admobInterstitialID");
	HX_MARK_MEMBER_NAME(AD_obj::testModeInterstitial,"testModeInterstitial");
	HX_MARK_MEMBER_NAME(AD_obj::_initAd_func,"_initAd_func");
	HX_MARK_MEMBER_NAME(AD_obj::_hideAd_func,"_hideAd_func");
	HX_MARK_MEMBER_NAME(AD_obj::_showAd_func,"_showAd_func");
	HX_MARK_MEMBER_NAME(AD_obj::_initInterstitial_func,"_initInterstitial_func");
	HX_MARK_MEMBER_NAME(AD_obj::_showInterstitial_func,"_showInterstitial_func");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AD_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AD_obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(AD_obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(AD_obj::CENTER,"CENTER");
	HX_VISIT_MEMBER_NAME(AD_obj::TOP,"TOP");
	HX_VISIT_MEMBER_NAME(AD_obj::BOTTOM,"BOTTOM");
	HX_VISIT_MEMBER_NAME(AD_obj::BANNER_PORTRAIT,"BANNER_PORTRAIT");
	HX_VISIT_MEMBER_NAME(AD_obj::BANNER_LANDSCAPE,"BANNER_LANDSCAPE");
	HX_VISIT_MEMBER_NAME(AD_obj::admobID,"admobID");
	HX_VISIT_MEMBER_NAME(AD_obj::originX,"originX");
	HX_VISIT_MEMBER_NAME(AD_obj::originY,"originY");
	HX_VISIT_MEMBER_NAME(AD_obj::bannerSize,"bannerSize");
	HX_VISIT_MEMBER_NAME(AD_obj::testMode,"testMode");
	HX_VISIT_MEMBER_NAME(AD_obj::admobInterstitialID,"admobInterstitialID");
	HX_VISIT_MEMBER_NAME(AD_obj::testModeInterstitial,"testModeInterstitial");
	HX_VISIT_MEMBER_NAME(AD_obj::_initAd_func,"_initAd_func");
	HX_VISIT_MEMBER_NAME(AD_obj::_hideAd_func,"_hideAd_func");
	HX_VISIT_MEMBER_NAME(AD_obj::_showAd_func,"_showAd_func");
	HX_VISIT_MEMBER_NAME(AD_obj::_initInterstitial_func,"_initInterstitial_func");
	HX_VISIT_MEMBER_NAME(AD_obj::_showInterstitial_func,"_showInterstitial_func");
};

#endif

Class AD_obj::__mClass;

void AD_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("admob.AD"), hx::TCanCast< AD_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void AD_obj::__boot()
{
	LEFT= (int)0;
	RIGHT= (int)1;
	CENTER= (int)2;
	TOP= (int)0;
	BOTTOM= (int)1;
	BANNER_PORTRAIT= (int)0;
	BANNER_LANDSCAPE= (int)1;
	originX= (int)0;
	originY= (int)0;
	bannerSize= (int)0;
	testMode= false;
}

} // end namespace admob
