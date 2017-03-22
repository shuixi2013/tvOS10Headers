/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:37 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ATVSlideshow/ATVSlideshow-Structs.h>
@class MRImage;

@interface MRPatchworkPatch : NSObject {

	MRImage* _image;
	CGRect rectangle;
	BOOL needsBlend;

}

@property (nonatomic,retain) MRImage * image;               //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) CGRect rectangle; 
@property (assign,nonatomic) BOOL needsBlend; 
-(void)setImage:(MRImage *)arg1 ;
-(void)dealloc;
-(MRImage *)image;
-(id)initWithImage:(id)arg1 rectangle:(CGRect)arg2 needsBlend:(BOOL)arg3 ;
-(CGRect)rectangle;
-(void)setRectangle:(CGRect)arg1 ;
-(BOOL)needsBlend;
-(void)setNeedsBlend:(BOOL)arg1 ;
@end

