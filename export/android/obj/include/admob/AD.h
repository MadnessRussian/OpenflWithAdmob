#ifndef INCLUDED_admob_AD
#define INCLUDED_admob_AD

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(admob,AD)
namespace admob{


class HXCPP_CLASS_ATTRIBUTES  AD_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AD_obj OBJ_;
		AD_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AD_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AD_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("AD"); }

		static int LEFT;
		static int RIGHT;
		static int CENTER;
		static int TOP;
		static int BOTTOM;
		static int BANNER_PORTRAIT;
		static int BANNER_LANDSCAPE;
		static ::String admobID;
		static int originX;
		static int originY;
		static int bannerSize;
		static bool testMode;
		static ::String admobInterstitialID;
		static bool testModeInterstitial;
		static Dynamic _initAd_func;
		static Dynamic _hideAd_func;
		static Dynamic _showAd_func;
		static Dynamic _initInterstitial_func;
		static Dynamic _showInterstitial_func;
		static Void init( ::String id,hx::Null< int >  x,hx::Null< int >  y,hx::Null< int >  size,hx::Null< bool >  test);
		static Dynamic init_dyn();

		static Void show( );
		static Dynamic show_dyn();

		static Void hide( );
		static Dynamic hide_dyn();

		static Void refresh( );
		static Dynamic refresh_dyn();

		static Void initInterstitial( ::String id,hx::Null< bool >  test);
		static Dynamic initInterstitial_dyn();

		static Void showInterstitial( );
		static Dynamic showInterstitial_dyn();

};

} // end namespace admob

#endif /* INCLUDED_admob_AD */ 
