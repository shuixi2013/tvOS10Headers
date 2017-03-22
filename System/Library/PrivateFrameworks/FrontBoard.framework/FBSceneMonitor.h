/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:12 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBSceneManagerInternalObserver.h>
#import <libobjc.A.dylib/FBSceneLayerManagerObserver.h>
#import <libobjc.A.dylib/FBSceneMonitorDelegate.h>

@protocol FBSceneMonitorDelegate;
@class FBScene, NSString, NSMutableSet, NSMutableDictionary, FBSSceneClientSettingsDiffInspector, FBSMutableSceneSettings, FBSSceneSettings;

@interface FBSceneMonitor : NSObject <FBSceneManagerInternalObserver, FBSceneLayerManagerObserver, FBSceneMonitorDelegate> {

	FBScene* _scene;
	NSString* _sceneID;
	NSMutableSet* _externalSceneIDs;
	NSMutableSet* _pairedExternalSceneIDs;
	NSMutableDictionary* _monitorsBySceneID;
	NSMutableDictionary* _updateContextsByTransactionID;
	FBSSceneClientSettingsDiffInspector* _diffInspector;
	FBSMutableSceneSettings* _sceneSettings;
	FBSMutableSceneSettings* _effectiveSettings;
	FBSSceneSettings* _lastCommitSettings;
	BOOL _monitorSettings;
	BOOL _monitorEffectiveSettings;
	BOOL _monitorPairing;
	BOOL _monitorClientSettings;
	BOOL _monitorSceneCommits;
	BOOL _invalidated;
	BOOL _isSynchronizing;
	BOOL _updateSettingsAfterSync;
	BOOL _updateExternalScenesAfterSync;
	id<FBSceneMonitorDelegate> _delegate;

}

@property (nonatomic,retain,readonly) FBScene * scene;                                        //@synthesize scene=_scene - In the implementation block
@property (nonatomic,copy,readonly) NSString * sceneID;                                       //@synthesize sceneID=_sceneID - In the implementation block
@property (assign,nonatomic) id<FBSceneMonitorDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain,readonly) FBSSceneSettings * sceneSettings;                       //@synthesize sceneSettings=_sceneSettings - In the implementation block
@property (nonatomic,retain,readonly) FBSSceneSettings * effectiveSceneSettings;              //@synthesize effectiveSettings=_effectiveSettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<FBSceneMonitorDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id<FBSceneMonitorDelegate>)delegate;
-(void)invalidate;
-(void)sceneLayerManager:(id)arg1 didRepositionLayer:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4 ;
-(FBSSceneSettings *)sceneSettings;
-(id)initWithSceneID:(id)arg1 ;
-(void)_updateScenePairingState:(BOOL)arg1 ;
-(void)sceneMonitor:(id)arg1 effectiveSceneSettingsDidChangeWithDiff:(id)arg2 previousSettings:(id)arg3 ;
-(void)_updateAllSceneStateIgnoringDelegate;
-(void)_updateSceneSettings:(BOOL)arg1 ;
-(void)_updateExternalScenes:(BOOL)arg1 ;
-(void)_updateEffectiveSceneSettings:(BOOL)arg1 ;
-(FBSSceneSettings *)effectiveSceneSettings;
-(void)sceneManagerWillBeginSceneUpdateSynchronization:(id)arg1 ;
-(void)sceneManagerDidEndSceneUpdateSynchronization:(id)arg1 ;
-(void)sceneManager:(id)arg1 scene:(id)arg2 didUpdateClientSettingsWithDiff:(id)arg3 oldClientSettings:(id)arg4 transitionContext:(id)arg5 ;
-(void)sceneManager:(id)arg1 didCreateScene:(id)arg2 withClient:(id)arg3 ;
-(void)sceneManager:(id)arg1 willCommitUpdateForScene:(id)arg2 transactionID:(unsigned long long)arg3 ;
-(void)sceneManager:(id)arg1 willDestroyScene:(id)arg2 ;
-(void)sceneManager:(id)arg1 didDestroyScene:(id)arg2 ;
-(void)sceneManager:(id)arg1 didCommitUpdateForScene:(id)arg2 transactionID:(unsigned long long)arg3 ;
-(BOOL)isPairedWithExternalSceneID:(id)arg1 ;
-(NSString *)sceneID;
-(id)initWithScene:(id)arg1 ;
-(FBScene *)scene;
@end

