/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:59 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RawCamera/RAWFilter.h>

@class CIImage, NSNumber;

@interface RAWAdjustColorTRC : RAWFilter {

	CIImage* inputImage;
	id inputColorSpace;
	NSNumber* inputTRCs0;
	NSNumber* inputTRCy1;
	NSNumber* inputTRCs1;
	NSNumber* inputTRCy2;
	NSNumber* inputTRCs2;
	NSNumber* inputTRCy3;
	NSNumber* inputTRCs3;
	NSNumber* inputTRCs4;
	NSNumber* inputBoostAmount;
	NSNumber* inputBoostShadowAmount;
	NSNumber* inputBoostPreserveHueAmount;
	NSNumber* inputBoostPreserveRYHueAmount;
	NSNumber* inputBoostPreserveYGHueAmount;
	NSNumber* inputBoostPreserveGCHueAmount;
	NSNumber* inputBoostPreserveCBHueAmount;
	NSNumber* inputBoostPreserveBMHueAmount;
	NSNumber* inputBoostPreserveMRHueAmount;
	NSNumber* inputVersion;

}
+(id)customAttributes;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)customAttributes;
-(id)outputImage;
-(void)setInputBoostAmount:(id)arg1 ;
@end

