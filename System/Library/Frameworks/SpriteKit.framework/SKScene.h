/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:31 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKEffectNode.h>

@protocol SKSceneDelegate;
@class NSMapTable, NSMutableArray, SKPhysicsBody, SKNode, AVAudioEngine, SKPhysicsWorld, SKCameraNode, AVAudioEnvironmentNode, PKPhysicsWorld, UIColor, SKView;

@interface SKScene : SKEffectNode {

	double _lastUpdate;
	double _pausedTime;
	CGRect _visibleRect;
	NSMapTable* _touchMap;
	NSMutableArray* _allChildenWithConstraints;
	CGRect _bounds;
	BOOL _isSetup;
	BOOL _usesExplicitUpdate;
	BOOL _usesExplicitRender;
	SKPhysicsBody* _scenePinBody;
	id _view;
	SKCSceneNode* _skcSceneNode;
	SKNode* _listener;
	AVAudioEngine* _audioEngine;
	BOOL __needsUpdate;
	BOOL __needsRender;
	SKPhysicsWorld* _physicsWorld;
	SKCameraNode* _camera;
	id<SKSceneDelegate> _delegate;
	AVAudioEnvironmentNode* _avAudioEnvironmentNode;
	PKPhysicsWorld* __pkPhysicsWorld;

}

@property (assign) BOOL _usesExplicitUpdate; 
@property (assign) BOOL _usesExplicitRender; 
@property (assign) BOOL _needsUpdate;                                                      //@synthesize _needsUpdate=__needsUpdate - In the implementation block
@property (assign) BOOL _needsRender;                                                      //@synthesize _needsRender=__needsRender - In the implementation block
@property (assign,nonatomic) CGRect visibleRect;                                           //@synthesize visibleRect=_visibleRect - In the implementation block
@property (assign,nonatomic) CGSize visibleRectSize; 
@property (assign,nonatomic) CGPoint visibleRectCenter; 
@property (nonatomic,retain) AVAudioEnvironmentNode * avAudioEnvironmentNode;              //@synthesize avAudioEnvironmentNode=_avAudioEnvironmentNode - In the implementation block
@property (nonatomic,retain) PKPhysicsWorld * _pkPhysicsWorld;                             //@synthesize _pkPhysicsWorld=__pkPhysicsWorld - In the implementation block
@property (assign,nonatomic) CGSize size; 
@property (assign,nonatomic) long long scaleMode; 
@property (assign,nonatomic,__weak) SKCameraNode * camera;                                 //@synthesize camera=_camera - In the implementation block
@property (assign,nonatomic,__weak) SKNode * listener; 
@property (nonatomic,retain,readonly) AVAudioEngine * audioEngine; 
@property (nonatomic,retain) UIColor * backgroundColor; 
@property (assign,nonatomic,__weak) id<SKSceneDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGPoint anchorPoint; 
@property (nonatomic,readonly) SKPhysicsWorld * physicsWorld;                              //@synthesize physicsWorld=_physicsWorld - In the implementation block
@property (nonatomic,__weak,readonly) SKView * view; 
+(id)sceneWithContentsOfFile:(id)arg1 ;
+(id)sceneWithSize:(CGSize)arg1 ;
+(id)sceneWithContentsOfFile:(id)arg1 size:(CGSize)arg2 ;
-(CGSize)size;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIColor *)backgroundColor;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<SKSceneDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(CGRect)frame;
-(id)description;
-(id<SKSceneDelegate>)delegate;
-(SKView *)view;
-(void)setScale:(double)arg1 ;
-(id)initWithSize:(CGSize)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(id)_parentFocusEnvironment;
-(CGPoint)position;
-(CGPoint)anchorPoint;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(CGRect)visibleRect;
-(void)setZPosition:(double)arg1 ;
-(void)update:(double)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(void)setVisibleRect:(CGRect)arg1 ;
-(void)_update:(double)arg1 ;
-(SKNode *)listener;
-(void)setListener:(SKNode *)arg1 ;
-(SKCameraNode *)camera;
-(void)setCamera:(SKCameraNode *)arg1 ;
-(BOOL)_needsUpdate;
-(long long)scaleMode;
-(void)setScaleMode:(long long)arg1 ;
-(SKPhysicsWorld *)physicsWorld;
-(AVAudioEngine *)audioEngine;
-(void)willMoveFromView:(id)arg1 ;
-(void)_didMoveToView:(id)arg1 ;
-(AVAudioEnvironmentNode *)avAudioEnvironmentNode;
-(SKCNode*)_makeBackingNode;
-(void)_didMakeBackingNode;
-(void)didChangeSize:(CGSize)arg1 ;
-(BOOL)_usesExplicitUpdate;
-(void)set_needsUpdate:(BOOL)arg1 ;
-(void)set_pkPhysicsWorld:(PKPhysicsWorld *)arg1 ;
-(void)set_usesExplicitRender:(BOOL)arg1 ;
-(void)set_usesExplicitUpdate:(BOOL)arg1 ;
-(void)sceneDidLoad;
-(void)setAvAudioEnvironmentNode:(AVAudioEnvironmentNode *)arg1 ;
-(void)checkAudioEngine;
-(void)didMoveToView:(id)arg1 ;
-(void)didEvaluateActions;
-(void)didSimulatePhysics;
-(double)zRotation;
-(void)setZRotation:(double)arg1 ;
-(double)xScale;
-(double)yScale;
-(void)setXScale:(double)arg1 ;
-(void)setYScale:(double)arg1 ;
-(void)didApplyConstraints;
-(void)didFinishUpdate;
-(BOOL)_hasConstraints;
-(void)_registerConstraintsForNode:(id)arg1 ;
-(void)_removeConstraintsForNode:(id)arg1 ;
-(CGPoint)convertPointFromParent:(CGPoint)arg1 ;
-(CGPoint)convertPointToParent:(CGPoint)arg1 ;
-(void)set_anchorPoint:(CGPoint)arg1 ;
-(CGPoint)convertPointFromView:(CGPoint)arg1 ;
-(CGPoint)convertPointToView:(CGPoint)arg1 ;
-(void)setVisibleRectSize:(CGSize)arg1 ;
-(CGSize)visibleRectSize;
-(void)setVisibleRectCenter:(CGPoint)arg1 ;
-(CGPoint)visibleRectCenter;
-(id)_getFocusNodes;
-(BOOL)_needsRender;
-(void)set_needsRender:(BOOL)arg1 ;
-(PKPhysicsWorld *)_pkPhysicsWorld;
-(BOOL)_usesExplicitRender;
-(void)_willMoveFromView:(id)arg1 ;
-(void)willRenderContent;
-(void)didContinueContact:(id)arg1 ;
-(void)_setNeedsRender;
-(void)_setNeedsUpdate;
-(double)zPosition;
@end

