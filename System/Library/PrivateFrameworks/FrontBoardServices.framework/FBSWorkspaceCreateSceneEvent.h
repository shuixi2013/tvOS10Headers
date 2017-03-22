/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:23 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSWorkspaceSceneUpdateEvent.h>

@class FBSSceneClientSettingsDiff, FBSDisplay, NSString, FBSSceneSpecification;

@interface FBSWorkspaceCreateSceneEvent : FBSWorkspaceSceneUpdateEvent {

	FBSSceneClientSettingsDiff* _clientSettings;
	FBSDisplay* _display;
	NSString* _specificationClassName;

}

@property (nonatomic,retain) FBSSceneClientSettingsDiff * clientSettingsDiff;              //@synthesize clientSettings=_clientSettings - In the implementation block
@property (nonatomic,retain) FBSDisplay * display;                                         //@synthesize display=_display - In the implementation block
@property (nonatomic,retain) FBSSceneSpecification * specification; 
-(void)dealloc;
-(FBSDisplay *)display;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(FBSSceneSpecification *)specification;
-(void)setSpecification:(FBSSceneSpecification *)arg1 ;
-(FBSSceneClientSettingsDiff *)clientSettingsDiff;
-(void)setClientSettingsDiff:(FBSSceneClientSettingsDiff *)arg1 ;
-(void)setDisplay:(FBSDisplay *)arg1 ;
@end

