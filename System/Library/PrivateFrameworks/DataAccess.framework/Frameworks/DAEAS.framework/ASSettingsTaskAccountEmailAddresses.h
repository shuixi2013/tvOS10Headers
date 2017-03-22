/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:19 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class NSMutableSet, NSString;

@interface ASSettingsTaskAccountEmailAddresses : ASItem {

	NSMutableSet* _mEmailAddresses;
	NSString* _primarySMTPAddress;

}

@property (nonatomic,retain) NSMutableSet * mEmailAddresses;              //@synthesize mEmailAddresses=_mEmailAddresses - In the implementation block
@property (nonatomic,retain) NSString * primarySMTPAddress;               //@synthesize primarySMTPAddress=_primarySMTPAddress - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)description;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(NSMutableSet *)mEmailAddresses;
-(void)setMEmailAddresses:(NSMutableSet *)arg1 ;
-(void)addEmailAddress:(id)arg1 ;
-(void)setPrimarySMTPAddress:(NSString *)arg1 ;
-(NSString *)primarySMTPAddress;
-(id)emailAddresses;
@end

