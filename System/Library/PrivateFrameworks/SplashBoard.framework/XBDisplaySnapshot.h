/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:46 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SplashBoard/SplashBoard-Structs.h>
@class FBSDisplay, NSOrderedSet, UIImage;

@interface XBDisplaySnapshot : NSObject {

	FBSDisplay* _display;
	NSOrderedSet* _layers;
	BOOL _opaque;
	CGSize _snapshotSize;
	double _scale;
	UIImage* _image;
	CGImageRef _imageRef;
	IOSurfaceRef _surfaceRef;

}

@property (nonatomic,retain,readonly) FBSDisplay * display;                      //@synthesize display=_display - In the implementation block
@property (nonatomic,copy,readonly) NSOrderedSet * layers;                       //@synthesize layers=_layers - In the implementation block
@property (assign,getter=isOpaque,nonatomic) BOOL opaque;                        //@synthesize opaque=_opaque - In the implementation block
@property (assign,nonatomic) double scale;                                       //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) CGSize snapshotSize;                                //@synthesize snapshotSize=_snapshotSize - In the implementation block
@property (nonatomic,readonly) IOSurfaceRef IOSurface; 
@property (getter=isDataLoaded,nonatomic,readonly) BOOL dataLoaded; 
@property (nonatomic,readonly) CGImageRef CGImage; 
@property (nonatomic,retain,readonly) UIImage * UIImage; 
-(void)setOpaque:(BOOL)arg1 ;
-(void)dealloc;
-(FBSDisplay *)display;
-(double)_scale;
-(void)setScale:(double)arg1 ;
-(CGImageRef)CGImage;
-(double)scale;
-(UIImage *)UIImage;
-(NSOrderedSet *)layers;
-(BOOL)isOpaque;
-(IOSurfaceRef)IOSurface;
-(id)initWithDisplay:(id)arg1 layers:(id)arg2 ;
-(void)setSnapshotSize:(CGSize)arg1 ;
-(BOOL)isDataLoaded;
-(BOOL)capture;
-(void)_synchronizedCaptureWithCompletion:(/*^block*/id)arg1 ;
-(CGSize)_scaledSnapshotSize;
-(id)initWithDisplay:(id)arg1 layer:(id)arg2 ;
-(CGSize)snapshotSize;
@end

