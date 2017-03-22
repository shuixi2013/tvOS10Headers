/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:20 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSBundle, NSString, NSArray;

@interface BSPluginManager : NSObject {

	NSBundle* _bundle;
	NSString* _pluginDirectory;
	NSArray* _pluginBundles;

}

@property (nonatomic,retain,readonly) NSBundle * bundle;                     //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,copy,readonly) NSString * pluginDirectory;              //@synthesize pluginDirectory=_pluginDirectory - In the implementation block
@property (nonatomic,copy,readonly) NSArray * pluginBundles;                 //@synthesize pluginBundles=_pluginBundles - In the implementation block
+(id)managerForBundle:(id)arg1 ;
+(id)mainManager;
-(id)pluginBundleForName:(id)arg1 type:(id)arg2 ;
-(id)pluginBundleForIdentifier:(id)arg1 ;
-(id)pluginBundlesForType:(id)arg1 ;
-(NSString *)pluginDirectory;
-(NSArray *)pluginBundles;
-(void)dealloc;
-(id)description;
-(NSBundle *)bundle;
-(id)initWithBundle:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end

