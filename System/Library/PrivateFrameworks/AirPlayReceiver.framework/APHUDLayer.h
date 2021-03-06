/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:09 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirPlayReceiver/AirPlayReceiver-Structs.h>
#import <QuartzCore/CALayer.h>

@interface APHUDLayer : CALayer {

	CTFontRef _Font;
	CFDictionaryRef _TextAttributes;
	CFArrayRef _Labels;
	CFArrayRef _Values;
	CFArrayRef _Colors;

}
-(void)dealloc;
-(id)init;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)addLine:(CFStringRef)arg1 withColorIndex:(int)arg2 ;
-(void)setValueAtIndex:(int)arg1 format:(id)arg2 ;
-(void)setValue:(CFStringRef)arg1 atIndex:(int)arg2 ;
@end

