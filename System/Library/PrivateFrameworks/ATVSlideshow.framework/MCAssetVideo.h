/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:38 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/MCAsset.h>

@class NSMutableSet, NSSet;

@interface MCAssetVideo : MCAsset {

	NSMutableSet* mSlides;

}

@property (readonly) NSSet * slides; 
-(id)init;
-(NSSet *)slides;
-(void)demolish;
-(BOOL)isInUse;
-(void)learnSlide:(id)arg1 ;
-(void)forgetSlide:(id)arg1 ;
@end
