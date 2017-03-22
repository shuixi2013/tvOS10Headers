/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:54 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <libobjc.A.dylib/OKPresentationCanvasSubclassingHooks.h>
#import <libobjc.A.dylib/NSCopying.h>

@class OKPresentation, NSString, NSMutableDictionary;

@interface OKPresentationCanvas : NSObject <OKPresentationCanvasSubclassingHooks, NSCopying> {

	OKPresentation* _presentation;
	id _parent;
	NSString* _name;
	NSString* _uuid;
	NSMutableDictionary* _settings;
	NSMutableDictionary* _userSettings;
	NSMutableDictionary* _userData;
	NSMutableDictionary* _properties;
	BOOL _isTemplate;
	BOOL _isResolved;

}

@property (nonatomic,copy,readonly) NSString * uuid;                                 //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) OKPresentation * presentation;                          //@synthesize presentation=_presentation - In the implementation block
@property (assign,nonatomic) id parent; 
@property (nonatomic,copy) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSMutableDictionary * settings;                  //@synthesize settings=_settings - In the implementation block
@property (nonatomic,copy,readonly) NSMutableDictionary * userSettings;              //@synthesize userSettings=_userSettings - In the implementation block
@property (nonatomic,copy,readonly) NSMutableDictionary * userData;                  //@synthesize userData=_userData - In the implementation block
@property (nonatomic,copy) NSMutableDictionary * properties;                         //@synthesize properties=_properties - In the implementation block
@property (assign,nonatomic) BOOL isTemplate;                                        //@synthesize isTemplate=_isTemplate - In the implementation block
@property (assign,nonatomic) BOOL isResolved;                                        //@synthesize isResolved=_isResolved - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)parent;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSMutableDictionary *)settings;
-(id)dictionary;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)keyPath;
-(void)setProperties:(NSMutableDictionary *)arg1 ;
-(BOOL)isTemplate;
-(void)setPresentation:(OKPresentation *)arg1 ;
-(NSMutableDictionary *)userData;
-(void)setIsTemplate:(BOOL)arg1 ;
-(NSString *)uuid;
-(NSMutableDictionary *)properties;
-(void)setParent:(id)arg1 ;
-(BOOL)isResolved;
-(OKPresentation *)presentation;
-(void)resolveIfNeeded;
-(id)canvasWithName:(id)arg1 ;
-(void)_setSettingsObject:(id)arg1 forKey:(id)arg2 ;
-(void)setSettingsObject:(id)arg1 forKeyPath:(id)arg2 ;
-(void)_setUserDataObject:(id)arg1 forKey:(id)arg2 ;
-(void)setUserDataObject:(id)arg1 forKeyPath:(id)arg2 ;
-(void)_setPropertiesObject:(id)arg1 forKey:(id)arg2 ;
-(void)setPropertiesObject:(id)arg1 forKeyPath:(id)arg2 ;
-(void)parentApplyValueForKeyPath:(id)arg1 ;
-(id)mergedSettings;
-(void)addSettingsFromDictionary:(id)arg1 ;
-(NSMutableDictionary *)userSettings;
-(void)setIsResolved:(BOOL)arg1 ;
@end

