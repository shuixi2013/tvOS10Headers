/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:36 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <libobjc.A.dylib/MRLoadable.h>
#import <libobjc.A.dylib/MRRenderable.h>

@class MCPlug, MCPlugSerial, MCPlugParallel, MCPlugHaven, NSString, MRLayerClock, NSMutableDictionary, NSMutableArray, NSDictionary, MRRenderer, MRAudioPlayer;

@interface MRLayer : NSObject <MRLoadable, MRRenderable> {

	MRLayer* mSuperlayer;
	MCPlug* mPlug;
	MCPlugSerial* mPlugAsSerial;
	MCPlugParallel* mPlugAsParallel;
	MCPlugHaven* mPlugAsHaven;
	NSString* mUUID;
	NSString* mIDInSupercontainer;
	unsigned long long mIndex;
	CGSize mPixelSize;
	double mTimeStamp;
	double mTimeIn;
	MRLayerClock* mClock;
	MRLayerRenderingStateOpaque* mRenderingState;
	NSMutableDictionary* mAnimationTriggers;
	NSMutableDictionary* mMotions;
	NSMutableDictionary* mPersistentState;
	NSMutableArray* mLayerCommandQueue;
	NSDictionary* mParameters;
	MRRenderer* mRenderer;
	MRAudioPlayer* mAudioPlayer;
	id mParentHelper;
	BOOL mIsPreactivated;
	BOOL mIsActivated;
	BOOL mOkToDeferKenBurns;
	BOOL mIsPrecomputing;
	BOOL mIsReadonly;
	BOOL mDoAudio;
	BOOL mIsSelected;
	BOOL mIsDimmed;
	BOOL mNeedsRendering;
	BOOL mNeedsToUpdateGeometry;
	BOOL mNeedsToUpdateInitialState;
	BOOL mNeedsToRequestRebuildAudio;
	BOOL mNeedsToRequestRebuildVolume;
	BOOL mNeedsToSynchronizeTime;
	BOOL mLayerCommandQueueNeedsAttention;
	BOOL mIsScheduledForDestruction;
	BOOL mSupportsAccumulation;

}

@property (nonatomic,readonly) BOOL _isNative3D; 
@property (readonly) MRLayerClock * clock; 
@property (readonly) MRLayerRenderingStateOpaque* renderingState; 
@property (readonly) NSDictionary * persistentState; 
@property (readonly) NSDictionary * animationTriggers; 
@property (readonly) NSMutableDictionary * motions; 
@property (retain) id parentHelper; 
@property (nonatomic,readonly) BOOL supportsDynamicExpansion; 
@property (readonly) NSString * idInSupercontainer; 
@property (nonatomic,readonly) unsigned long long index; 
@property (readonly) MRLayer * superlayer; 
@property (readonly) MCPlug * plug; 
@property (readonly) MCPlugSerial * plugAsSerial; 
@property (readonly) MCPlugParallel * plugAsParallel; 
@property (readonly) MCPlugHaven * plugAsHaven; 
@property (readonly) NSString * uuid; 
@property (readonly) NSDictionary * parameters; 
@property (assign,nonatomic) CGSize pixelSize; 
@property (assign,nonatomic) double timeIn; 
@property (assign,nonatomic) double duration; 
@property (nonatomic,readonly) BOOL isPreactivated; 
@property (nonatomic,readonly) BOOL isActivated; 
@property (assign,nonatomic) BOOL isSelected; 
@property (assign,nonatomic) BOOL isDimmed; 
@property (nonatomic,readonly) double timeStamp; 
@property (nonatomic,readonly) BOOL supportsAccumulation; 
@property (nonatomic,readonly) BOOL isScheduledForDestruction; 
@property (nonatomic,readonly) BOOL hasAudio; 
@property (assign,nonatomic) BOOL needsToSynchronizeTime; 
@property (assign,nonatomic) BOOL needsToUpdateGeometry; 
@property (nonatomic,readonly) BOOL isNative3D; 
@property (nonatomic,readonly) BOOL isOpaque; 
@property (nonatomic,readonly) BOOL isAlphaFriendly; 
@property (nonatomic,readonly) BOOL isInfinite; 
-(void)unload;
-(void)finalize;
-(void)dealloc;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(MRLayer *)superlayer;
-(BOOL)isOpaque;
-(BOOL)isSelected;
-(void)deactivate;
-(NSDictionary *)parameters;
-(void)activate;
-(unsigned long long)index;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)cleanup;
-(NSString *)uuid;
-(double)timeStamp;
-(void)setIsSelected:(BOOL)arg1 ;
-(MRLayerClock *)clock;
-(BOOL)isActivated;
-(id)_currentState;
-(void)setTimeIn:(double)arg1 ;
-(NSString *)idInSupercontainer;
-(MCPlug *)plug;
-(double)timeIn;
-(void)updateGeometry;
-(void)setPixelSize:(CGSize)arg1 ;
-(BOOL)isLoadedForTime:(double)arg1 ;
-(void)loadForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 now:(BOOL)arg4 ;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)retainedByUserRenderedImageAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)patchworkAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)isNative3D;
-(BOOL)isAlphaFriendly;
-(BOOL)isInfinite;
-(void)beginMorphingToAspectRatio:(double)arg1 withDuration:(double)arg2 ;
-(void)endMorphing;
-(BOOL)supportsDynamicExpansion;
-(void)_unobservePlug;
-(void)depreactivate:(BOOL)arg1 ;
-(void)setNeedsUpdateForPluggerOfSublayer:(id)arg1 ;
-(void)stampTime;
-(id)initWithPlug:(id)arg1 andParameters:(id)arg2 inSuperlayer:(id)arg3 ;
-(void)_observePlugOnPreactivate;
-(void)_sendAction:(id)arg1 withStates:(id)arg2 async:(BOOL)arg3 yesterday:(BOOL)arg4 ;
-(void)resumeOrPause:(BOOL)arg1 ;
-(void)_unobservePlugOnDepreactivate;
-(BOOL)_isNative3D;
-(BOOL)_setStateValue:(id)arg1 forKey:(id)arg2 ;
-(void)_rebuildAudio;
-(void)synchronizeTime;
-(void)_renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)hasSomethingToRender;
-(void)_updateStateWithContext:(id)arg1 ;
-(BOOL)isDimmed;
-(id)__retainedByUserRenderedImageAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)_retainedByUserRenderedImageAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)isFlatAndSquare;
-(void)_setScissorRectOnContext:(id)arg1 saveTo:(int*)arg2 ;
-(void)_applyState:(id)arg1 ;
-(NSDictionary *)persistentState;
-(MRLayerRenderingStateOpaque*)renderingState;
-(MCPlugParallel *)plugAsParallel;
-(id)sublayerWithPlug:(id)arg1 ;
-(id)sublayerForPrecomputingWithPlug:(id)arg1 ;
-(void)preactivate;
-(BOOL)isPreactivatedAtTime:(double)arg1 ;
-(BOOL)isActivatedAtTime:(double)arg1 ;
-(void)scheduleForDestruction;
-(BOOL)hasAudio;
-(CGPoint)convertLocalPoint:(CGPoint)arg1 ;
-(CGPoint)convertGlobalPoint:(CGPoint)arg1 ;
-(id)actionHitAtPoint:(CGPoint)arg1 layer:(id*)arg2 ;
-(id)actionForKey:(id)arg1 recursive:(BOOL)arg2 ;
-(double)doAnimationTrigger:(id)arg1 ;
-(double)doActionTrigger:(id)arg1 ;
-(double)doStateOperation:(id)arg1 ;
-(double)doMotionTrigger:(id)arg1 ;
-(double)doGenericAction:(id)arg1 ;
-(id)_dumpLayerWithOptions:(unsigned long long)arg1 ;
-(void)setIsDimmed:(BOOL)arg1 ;
-(MCPlugSerial *)plugAsSerial;
-(MCPlugHaven *)plugAsHaven;
-(BOOL)isPreactivated;
-(BOOL)supportsAccumulation;
-(BOOL)isScheduledForDestruction;
-(NSDictionary *)animationTriggers;
-(NSMutableDictionary *)motions;
-(id)parentHelper;
-(void)setParentHelper:(id)arg1 ;
-(BOOL)needsToSynchronizeTime;
-(void)setNeedsToSynchronizeTime:(BOOL)arg1 ;
-(BOOL)needsToUpdateGeometry;
-(void)setNeedsToUpdateGeometry:(BOOL)arg1 ;
-(void)_queueLayerCommand:(int)arg1 object:(id)arg2 ;
-(void)_observePlug;
-(void)_setNeedsToRequestRebuildAudio:(BOOL)arg1 ;
-(CGSize)pixelSize;
-(void)cancelLoading;
@end

