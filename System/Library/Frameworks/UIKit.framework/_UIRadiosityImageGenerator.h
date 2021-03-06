/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:04 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <UIKit/UIKit-Structs.h>
@class NSMutableArray, NSMutableDictionary, NSObject;

@interface _UIRadiosityImageGenerator : NSObject {

	NSMutableArray* _surfaces;
	NSMutableDictionary* _outSurfaces;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}
+(id)sharedInstance;
-(id)init;
-(void)_pushSurface:(id)arg1 ;
-(CGSize)_surfaceSizeForImageSize:(CGSize)arg1 ;
-(id)_surfaceForImage:(CGImageRef)arg1 ;
-(id)_surfaceForSize:(CGSize)arg1 ;
-(id)_popSurfaceForSize:(CGSize)arg1 ;
-(unsigned)_dimensionForSize:(CGSize)arg1 ;
-(void)imageWithImage:(CGImageRef)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

