/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:17 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSUUID, NSArray;

@interface AXSwitchRecipe : NSObject {

	NSString* _name;
	NSUUID* _uuid;
	NSArray* _mappings;
	double _timeout;
	NSString* _unlocalizedName;
	NSString* _menuIconIdentifier;

}

@property (nonatomic,retain) NSUUID * uuid;                              //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) NSArray * mappings;                         //@synthesize mappings=_mappings - In the implementation block
@property (assign,nonatomic) double timeout;                             //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,retain) NSString * unlocalizedName;                 //@synthesize unlocalizedName=_unlocalizedName - In the implementation block
@property (nonatomic,readonly) BOOL shouldContinueScanning; 
@property (nonatomic,copy) NSString * menuIconIdentifier;                //@synthesize menuIconIdentifier=_menuIconIdentifier - In the implementation block
+(id)recipeWithDictionaryRepresentation:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)dictionaryRepresentation;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(double)timeout;
-(void)setTimeout:(double)arg1 ;
-(void)setUnlocalizedName:(NSString *)arg1 ;
-(void)setMenuIconIdentifier:(NSString *)arg1 ;
-(NSString *)unlocalizedName;
-(NSString *)menuIconIdentifier;
-(BOOL)shouldContinueScanning;
-(NSArray *)mappings;
-(void)setMappings:(NSArray *)arg1 ;
@end

