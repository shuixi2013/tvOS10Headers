/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:12 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <FrontBoard/FrontBoard-Structs.h>
@class FBScene, FBSceneSnapshotContext, XBDisplaySnapshot, UIImage;

@interface FBSceneSnapshot : NSObject {

	FBScene* _scene;
	FBSceneSnapshotContext* _context;
	XBDisplaySnapshot* _snapshot;

}

@property (nonatomic,retain,readonly) FBSceneSnapshotContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) IOSurfaceRef IOSurface; 
@property (getter=isDataLoaded,nonatomic,readonly) BOOL dataLoaded; 
@property (nonatomic,readonly) CGImageRef CGImage; 
@property (nonatomic,retain,readonly) UIImage * UIImage; 
-(void)dealloc;
-(CGImageRef)CGImage;
-(UIImage *)UIImage;
-(FBSceneSnapshotContext *)context;
-(IOSurfaceRef)IOSurface;
-(id)_collectLayersToSnapshotFromScene:(id)arg1 withSnapshotContext:(id)arg2 rootContext:(id)arg3 ;
-(CGAffineTransform)_baseTransformForSnapshotContext:(id)arg1 rootContext:(id)arg2 ;
-(BOOL)isDataLoaded;
-(BOOL)capture;
-(id)initWithScene:(id)arg1 snapshotContext:(id)arg2 ;
@end

