/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:23 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSSceneMessage.h>

@class FBSSceneSettingsDiff, FBSSceneClientSettingsDiff, FBSSceneTransitionContext, NSSet;

@interface FBSSceneEvent : FBSSceneMessage {

	long long _source;
	FBSSceneSettingsDiff* _settingsDiff;
	FBSSceneClientSettingsDiff* _clientSettingsDiff;
	FBSSceneTransitionContext* _transitionContext;

}

@property (assign,nonatomic) long long source;                                             //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) FBSSceneSettingsDiff * settingsDiff;                          //@synthesize settingsDiff=_settingsDiff - In the implementation block
@property (nonatomic,retain) FBSSceneClientSettingsDiff * clientSettingsDiff;              //@synthesize clientSettingsDiff=_clientSettingsDiff - In the implementation block
@property (nonatomic,retain) FBSSceneTransitionContext * transitionContext;                //@synthesize transitionContext=_transitionContext - In the implementation block
@property (nonatomic,readonly) NSSet * actions; 
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setTransitionContext:(FBSSceneTransitionContext *)arg1 ;
-(FBSSceneTransitionContext *)transitionContext;
-(NSSet *)actions;
-(void)setSource:(long long)arg1 ;
-(long long)source;
-(FBSSceneSettingsDiff *)settingsDiff;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setSettingsDiff:(FBSSceneSettingsDiff *)arg1 ;
-(FBSSceneClientSettingsDiff *)clientSettingsDiff;
-(void)setClientSettingsDiff:(FBSSceneClientSettingsDiff *)arg1 ;
@end

