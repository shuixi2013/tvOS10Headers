/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:45 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SplashBoard/SplashBoard-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBSDisplay, NSString;

@interface XBLaunchStateRequest : NSObject <BSXPCCoding, NSCopying> {

	FBSDisplay* _display;
	NSString* _groupID;
	long long _interfaceOrientation;
	unsigned long long _statusBarState;
	NSString* _urlSchemeName;
	NSString* _launchInterfaceIdentifier;
	CGSize _referenceSize;
	CGSize _naturalSize;

}

@property (nonatomic,retain) FBSDisplay * display;                            //@synthesize display=_display - In the implementation block
@property (nonatomic,copy) NSString * groupID;                                //@synthesize groupID=_groupID - In the implementation block
@property (assign,nonatomic) CGSize referenceSize;                            //@synthesize referenceSize=_referenceSize - In the implementation block
@property (assign,nonatomic) CGSize naturalSize;                              //@synthesize naturalSize=_naturalSize - In the implementation block
@property (assign,nonatomic) long long interfaceOrientation;                  //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (assign,nonatomic) unsigned long long statusBarState;               //@synthesize statusBarState=_statusBarState - In the implementation block
@property (nonatomic,copy) NSString * urlSchemeName;                          //@synthesize urlSchemeName=_urlSchemeName - In the implementation block
@property (nonatomic,copy) NSString * launchInterfaceIdentifier;              //@synthesize launchInterfaceIdentifier=_launchInterfaceIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(long long)interfaceOrientation;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(FBSDisplay *)display;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(CGSize)naturalSize;
-(NSString *)groupID;
-(void)setDisplay:(FBSDisplay *)arg1 ;
-(void)setGroupID:(NSString *)arg1 ;
-(unsigned long long)statusBarState;
-(NSString *)urlSchemeName;
-(NSString *)launchInterfaceIdentifier;
-(void)setStatusBarState:(unsigned long long)arg1 ;
-(void)setUrlSchemeName:(NSString *)arg1 ;
-(void)setLaunchInterfaceIdentifier:(NSString *)arg1 ;
-(void)setNaturalSize:(CGSize)arg1 ;
-(CGSize)referenceSize;
-(void)setReferenceSize:(CGSize)arg1 ;
@end

