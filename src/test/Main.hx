package test;


import flash.display.Graphics;
import flash.display.Loader;
import flash.display.Sprite;
import flash.events.Event;
import flash.events.MouseEvent;
import flash.Lib;
import flash.events.Event; 
import flash.net.URLLoader;
import flash.net.URLRequest;
import flash.text.TextField;
import flash.text.TextFormat;
import flash.text.TextFormatAlign;
import haxe.Utf8;



#if mobile
import admob.AD;
#end

/**
 * ...
 * @author Madness
 */

class Main extends Sprite 
{
	public function new()  
	{
		super();  
		
		
		var Title = new TextField();
		Title.text = "Profit!";
		addChild(Title) ;
		
		#if mobile
		
		AD.init("id", AD.LEFT, AD.BOTTOM, AD.BANNER_PORTRAIT, true);
		AD.show();

		AD.initInterstitial("id", false);
		AD.showInterstitial();

		#end	
		
	}
	
}
