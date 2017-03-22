/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:40 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVKit/TVKit-Structs.h>
@class NSString;

@interface TVImageRepresentation : NSObject {

	BOOL _fixedFrame;
	CGRect _sourceRect;
	CGRect _destinationRect;

}

@property (assign,nonatomic) CGRect sourceRect;                                //@synthesize sourceRect=_sourceRect - In the implementation block
@property (assign,nonatomic) CGRect destinationRect;                           //@synthesize destinationRect=_destinationRect - In the implementation block
@property (assign,getter=isFixedFrame,nonatomic) BOOL fixedFrame;              //@synthesize fixedFrame=_fixedFrame - In the implementation block
@property (nonatomic,readonly) NSString * cacheKey; 
+(id)_loadingQueue;
+(id)imageRepresentationWithImageProxy:(id)arg1 ;
+(id)imageRepresentationWithImageNamed:(id)arg1 inBundle:(id)arg2 compatibleWithTraitCollection:(id)arg3 ;
+(id)imageRepresentationWithURL:(id)arg1 ;
+(id)imageRepresentationWithImage:(id)arg1 ;
+(id)imageRepresentationWithNamedLayerImage:(id)arg1 ;
-(CGRect)sourceRect;
-(void)setSourceRect:(CGRect)arg1 ;
-(NSString *)cacheKey;
-(void)setFixedFrame:(BOOL)arg1 ;
-(id)_originalImageCacheKey;
-(CGImageRef)_originalImage;
-(CGImageRef)_imageForOriginalImage:(CGImageRef)arg1 ;
-(CGImageRef)newImage;
-(void)loadImageWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isFixedFrame;
-(CGRect)destinationRect;
-(void)setDestinationRect:(CGRect)arg1 ;
@end

